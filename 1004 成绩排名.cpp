/*每个测试输入包含 1 个测试用例，格式为

第 1 行：正整数 n
第 2 行：第 1 个学生的姓名 学号 成绩
第 3 行：第 2 个学生的姓名 学号 成绩
  ... ... ...
第 n+1 行：第 n 个学生的姓名 学号 成绩
其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出格式：
对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。*/
#include<stdio.h>

// 定义学生的结构体
struct student{
    char name[15];
    char id[15];
    int grade;
}info[100];

int main()
{
    int i = 0, max = 0, min = 0, n;
    scanf("%d", &n);
	//遍历循环找到最大值和最小值的同学信息位置
    for(i = 0; i < n; i++){
        scanf("%s %s %d", info[i].name, info[i].id, &info[i].grade);
        if(info[i].grade > info[max].grade)
          max = i;
        if(info[i].grade < info[min].grade)
          min = i;
    }
	// 打印信息
    printf("%s %s\n", info[max].name, info[max].id);
    printf("%s %s\n", info[min].name, info[min].id);

    return 0;
}


