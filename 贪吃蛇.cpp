#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//72,80,75,77是方向键对应的键值
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SNAKE 1     //蛇的坐标标识
#define FOOD 2      //食物的坐标标识
#define BAR 3       //墙的坐标标识

//初始化地图 17*17
char map[17][17] = {0};
//初始化蛇头坐标
unsigned char snake[50] = {77};
//初始化食物坐标
unsigned char food = 68;
//蛇长
char len = 1;

//存储坐标数字与x、y的转换函数
void tran(unsigned char num,unsigned char * x,unsigned char * y);
//打印游戏
void print_game(void);
//获取方向函数（注意当蛇身长度超过一节时不能回头）
int get_dir(int old_dir);
//移动蛇身函数(游戏大部分内容在其中)
void move_snake(int dir);
//生产食物的函数
unsigned char generate_food(void); 
//判断蛇死活的函数(判断了蛇是否撞到边界或者自食)
int isalive(void);

int main(void){
    int dir = UP;   //初始方向默认向上，UP是我们定义的宏
    //按道理该游戏是可以无限继续下去的，因此是个循环
    while(1){
        print_game();   //打印游戏
        dir = get_dir(dir);     //获取方向(我们摁下的方向)
        move_snake(dir);    //移动蛇身
        if(!isalive()){     //判断蛇的生命状态
            break;
        }
    }

    printf("Game Over!\n");
    return 0;
}
void tran(unsigned char num,unsigned char * x,unsigned char * y){
    *x = num >> 4;
    *y = (unsigned char)(num << 4) >> 4;    //注意这里要做个强制类型转换
}
void print_game(void){
    int i,j;
    //根据地图上每点的情况绘制游戏（ i 表示 x 轴，j 表示 y 轴），按行打印
    for(j = 0;j < 17;j ++){
        for(i = 0;i < 17;i ++){
            //空白地方
            if(map[i][j] == 0){
                putchar(' ');
            }
            //蛇身
            else if(map[i][j] == SNAKE){
                putchar('*');
            }
            //围栏
            else if(map[i][j] == BAR){
                putchar('#');
            }
            //食物
            else if(map[i][j] == FOOD){
                putchar('$');
            }
        }
        putchar('\n');
    }
    Sleep(500);     //休眠函数 将进程挂起500ms,包含在window.h（在linux下用 sleep(),#include <unistd.h>） 
    system("cls");  //清屏函数 配合下一次 print_game() 起到刷新作用，包含在stdlib.h中
}
//返回新的方向
int get_dir(int old_dir){

    int new_dir = old_dir;

    //用kbhit()与getch()组合实现键盘响应
    //kbhit() 检查当前是否有键盘输入，若有则返回一个非0值，否则返回0
    //getch() 用ch=_getch();会等待你按下任意键之后，把该键字符所对应的ASCII码赋给ch,再执行下面的语句。 
    if(_kbhit()){
        _getch();
        new_dir = _getch();     //getch()函数要使用两次,原因是因为第一次返回的值指示该键扩展的字符，第二次调用才返回实际的键代码

        //如果蛇身长度大于1，则不能回头，如果摁回头方向，则按原来方向走 
        //abs(new_dir - old_dir) == 2 表示 |LEFT-RIGHT|
        //abs(new_dir - old_dir) == 8 表示 |UP-DOWN|
        if(len > 1 && (abs(new_dir - old_dir) == 2 || abs(new_dir - old_dir) == 8)){
            new_dir = old_dir;
        }
    }
    return new_dir;
}
void move_snake(int dir){
    int last = snake[0],current;    //last与current用于之后蛇坐标的更新
    int i,j;
    int grow=0;     //判断是否要长身体
    unsigned char x, y,fx,fy;       //蛇坐标与食物坐标
    tran(food, &fx, &fy);   //食物坐标 
    tran(snake[0], &x, &y); //蛇头坐标 
    switch (dir){           //更新蛇头坐标（坐标原点是左上角） 
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
    //按位抑或（妙！） 
    snake[0] = ((x ^ 0) << 4) ^ y;      //将x,y换回一个数

    //蛇吃到了食物 
    if (snake[0] == food) {
        grow = 1;
        food = generate_food();     //产生新食物
    }

    for (i = 0; i<len; i++) {       //蛇移动的关键，通过将蛇头原来的坐标赋给第二节，原来的第二节赋给第三节，依次下去，完成蛇坐标的更新
        if (i == 0)     //如果只有头，跳过，因为前面已更新蛇头坐标
            continue;
        current = snake[i];     //将当前操作的蛇节坐标存储到current里
        snake[i] = last;        //完成当前操作蛇节坐标的更新
        last = current;     //last记录的是上一次操作蛇节的坐标，这次操作已经结束，故把current赋给last

    //如果蛇边长了
    if (grow) {
        snake[len] = last;
        len++;
    }

    for (j = 0; j < 17; j ++){      //将边界与食物加到地图里去（i,j 对应 x轴和y轴）
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

    for (i = 0; i < len; i++) {     //将蛇加到地图里去
        tran(snake[i], &x, &y);
        if (snake[i] > 0){
            map[x][y] = SNAKE;
        }
    }
}
unsigned char generate_food()
{unsigned char food_,fx,fy;
    int in_snake=0,i;
    //以当前时间为参数提供种子供rand()函数生成更为随机的数
    srand((unsigned int)time(NULL));
    //循环产生在边界内且不在蛇身上的食物 
    do {
        food_ = rand() % 255;
        tran(food_, &fx, &fy);
        for (i = 0; i < len; i++){ 
            if (food_ == snake[i]){ 
            //在不在蛇身上
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
    //蛇头撞边界或者吃到自己 ，则死掉 
    return (x == 0 || x == 16 || y == 0 || y >= 16 || self_eat) ? 0 : 1;
}
int main(void){
    int dir = UP;   //初始方向默认向上，UP是我们定义的宏
    //按理论该游戏是可以无限继续下去的，因此是个循环
    while(1){
        print_game();   //打印游戏
        dir = get_dir(dir);     //获取方向(我们摁下的方向键)
        move_snake(dir);    //移动蛇身
        if(!isalive()){     //判断蛇的生命状态
            break;
        }
    }

    printf("Game Over!\n");
    return 0;
}
