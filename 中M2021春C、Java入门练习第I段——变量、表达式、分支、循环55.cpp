/*给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），单价分别对应为3.00元/公斤、
2.50元/公斤、4.10元/公斤、10.20元/公斤。
首先在屏幕上显示以下菜单：
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
用户可以输入编号1~4查询对应水果的单价。当连续查询次数超过5次时，程序应自动退出查询；不到5次而用户输入0即退出；输入其他编号，显示价格为0。
输入格式:
输入在一行中给出用户连续输入的若干个编号。
输出格式:
首先在屏幕上显示菜单。然后对应用户的每个输入，
在一行中按格式“price = 价格”输出查询结果，其中价格保留两位小数。当用户连续查询次数超过5次、或主动输入0时，程序结束。*/
#include <stdio.h>
int main()
{
    int num, count = 0;
    float price;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    while(1){
        scanf("%d", &num);
        count ++;
        if(count > 5 || num == 0) break;
        switch (num){
            case 1:
                price = 3.00;
                break;
            case 2:
                price = 2.50;
                break;
            case 3:
                price = 4.10;
                break;
            case 4:
                price = 10.20;
                break;
            default:
                price = 0.00;
                break;
        }
        printf("price = %.2f\n", price);
    }
    return 0;
}
