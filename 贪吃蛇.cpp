#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//72,80,75,77�Ƿ������Ӧ�ļ�ֵ
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SNAKE 1     //�ߵ������ʶ
#define FOOD 2      //ʳ��������ʶ
#define BAR 3       //ǽ�������ʶ

//��ʼ����ͼ 17*17
char map[17][17] = {0};
//��ʼ����ͷ����
unsigned char snake[50] = {77};
//��ʼ��ʳ������
unsigned char food = 68;
//�߳�
char len = 1;

//�洢����������x��y��ת������
void tran(unsigned char num,unsigned char * x,unsigned char * y);
//��ӡ��Ϸ
void print_game(void);
//��ȡ��������ע�⵱�����ȳ���һ��ʱ���ܻ�ͷ��
int get_dir(int old_dir);
//�ƶ�������(��Ϸ�󲿷�����������)
void move_snake(int dir);
//����ʳ��ĺ���
unsigned char generate_food(void); 
//�ж�������ĺ���(�ж������Ƿ�ײ���߽������ʳ)
int isalive(void);

int main(void){
    int dir = UP;   //��ʼ����Ĭ�����ϣ�UP�����Ƕ���ĺ�
    //���������Ϸ�ǿ������޼�����ȥ�ģ�����Ǹ�ѭ��
    while(1){
        print_game();   //��ӡ��Ϸ
        dir = get_dir(dir);     //��ȡ����(�������µķ���)
        move_snake(dir);    //�ƶ�����
        if(!isalive()){     //�ж��ߵ�����״̬
            break;
        }
    }

    printf("Game Over!\n");
    return 0;
}
void tran(unsigned char num,unsigned char * x,unsigned char * y){
    *x = num >> 4;
    *y = (unsigned char)(num << 4) >> 4;    //ע������Ҫ����ǿ������ת��
}
void print_game(void){
    int i,j;
    //���ݵ�ͼ��ÿ������������Ϸ�� i ��ʾ x �ᣬj ��ʾ y �ᣩ�����д�ӡ
    for(j = 0;j < 17;j ++){
        for(i = 0;i < 17;i ++){
            //�հ׵ط�
            if(map[i][j] == 0){
                putchar(' ');
            }
            //����
            else if(map[i][j] == SNAKE){
                putchar('*');
            }
            //Χ��
            else if(map[i][j] == BAR){
                putchar('#');
            }
            //ʳ��
            else if(map[i][j] == FOOD){
                putchar('$');
            }
        }
        putchar('\n');
    }
    Sleep(500);     //���ߺ��� �����̹���500ms,������window.h����linux���� sleep(),#include <unistd.h>�� 
    system("cls");  //�������� �����һ�� print_game() ��ˢ�����ã�������stdlib.h��
}
//�����µķ���
int get_dir(int old_dir){

    int new_dir = old_dir;

    //��kbhit()��getch()���ʵ�ּ�����Ӧ
    //kbhit() ��鵱ǰ�Ƿ��м������룬�����򷵻�һ����0ֵ�����򷵻�0
    //getch() ��ch=_getch();��ȴ��㰴�������֮�󣬰Ѹü��ַ�����Ӧ��ASCII�븳��ch,��ִ���������䡣 
    if(_kbhit()){
        _getch();
        new_dir = _getch();     //getch()����Ҫʹ������,ԭ������Ϊ��һ�η��ص�ֵָʾ�ü���չ���ַ����ڶ��ε��òŷ���ʵ�ʵļ�����

        //��������ȴ���1�����ܻ�ͷ���������ͷ������ԭ�������� 
        //abs(new_dir - old_dir) == 2 ��ʾ |LEFT-RIGHT|
        //abs(new_dir - old_dir) == 8 ��ʾ |UP-DOWN|
        if(len > 1 && (abs(new_dir - old_dir) == 2 || abs(new_dir - old_dir) == 8)){
            new_dir = old_dir;
        }
    }
    return new_dir;
}
void move_snake(int dir){
    int last = snake[0],current;    //last��current����֮��������ĸ���
    int i,j;
    int grow=0;     //�ж��Ƿ�Ҫ������
    unsigned char x, y,fx,fy;       //��������ʳ������
    tran(food, &fx, &fy);   //ʳ������ 
    tran(snake[0], &x, &y); //��ͷ���� 
    switch (dir){           //������ͷ���꣨����ԭ�������Ͻǣ� 
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
    }
    //��λ�ֻ���� 
    snake[0] = ((x ^ 0) << 4) ^ y;      //��x,y����һ����

    //�߳Ե���ʳ�� 
    if (snake[0] == food) {
        grow = 1;
        food = generate_food();     //������ʳ��
    }

    for (i = 0; i<len; i++) {       //���ƶ��Ĺؼ���ͨ������ͷԭ�������긳���ڶ��ڣ�ԭ���ĵڶ��ڸ��������ڣ�������ȥ�����������ĸ���
        if (i == 0)     //���ֻ��ͷ����������Ϊǰ���Ѹ�����ͷ����
            continue;
        current = snake[i];     //����ǰ�������߽�����洢��current��
        snake[i] = last;        //��ɵ�ǰ�����߽�����ĸ���
        last = current;     //last��¼������һ�β����߽ڵ����꣬��β����Ѿ��������ʰ�current����last

    //����߱߳���
    if (grow) {
        snake[len] = last;
        len++;
    }

    for (j = 0; j < 17; j ++){      //���߽���ʳ��ӵ���ͼ��ȥ��i,j ��Ӧ x���y�ᣩ
        for (i = 0; i < 17; i ++){ 
            if (i == 0 || i == 16 || j == 0 || j == 16){ 
                map[i][j] = BAR;
            } 
            else if (i == fx&&j == fy){ 
                map[i][j] = FOOD;
            } 
            else{ 
                map[i][j] = 0;
            } 
        } 

    for (i = 0; i < len; i++) {     //���߼ӵ���ͼ��ȥ
        tran(snake[i], &x, &y);
        if (snake[i] > 0){
            map[x][y] = SNAKE;
        }
    }
}
unsigned char generate_food()
{unsigned char food_,fx,fy;
    int in_snake=0,i;
    //�Ե�ǰʱ��Ϊ�����ṩ���ӹ�rand()�������ɸ�Ϊ�������
    srand((unsigned int)time(NULL));
    //ѭ�������ڱ߽����Ҳ��������ϵ�ʳ�� 
    do {
        food_ = rand() % 255;
        tran(food_, &fx, &fy);
        for (i = 0; i < len; i++){ 
            if (food_ == snake[i]){ 
            //�ڲ���������
                in_snake = 1;
            }
        } 
    } while (fx == 0 || fx == 16 || fy == 0 || fy == 16 || in_snake);
    return food_;
}
int isalive(void)
{    
    int self_eat = 0, i;
    unsigned char x, y;
    tran(snake[0], &x, &y);
    for (i = 1; i < len; i++){
        if (snake[0] == snake[i]){
            self_eat = 1;
        }
    }
    //��ͷײ�߽���߳Ե��Լ� �������� 
    return (x == 0 || x == 16 || y == 0 || y >= 16 || self_eat) ? 0 : 1;
}
int main(void){
    int dir = UP;   //��ʼ����Ĭ�����ϣ�UP�����Ƕ���ĺ�
    //�����۸���Ϸ�ǿ������޼�����ȥ�ģ�����Ǹ�ѭ��
    while(1){
        print_game();   //��ӡ��Ϸ
        dir = get_dir(dir);     //��ȡ����(�������µķ����)
        move_snake(dir);    //�ƶ�����
        if(!isalive()){     //�ж��ߵ�����״̬
            break;
        }
    }

    printf("Game Over!\n");
    return 0;
}
