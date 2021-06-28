/*本题要求编写程序，将给定字符串中的大写英文字母按以下对应规则替换：

原字母	对应字母
A	Z
B	Y
C	X
D	W
…	…
X	C
Y	B
Z	A
输入格式：
输入在一行中给出一个不超过80个字符、并以回车结束的字符串。

输出格式：
输出在一行中给出替换完成后的字符串。*/
#include<stdio.h>
#include<string.h>
int main()
{
  int b[26],i,m,h,j;     //用于储存26个英文字母
  char a[81];    //81是防止溢出
  for (i = 0; i < 26; i++)              //输入26个字母在b[]中
 {
  b[i] = m;
  m++;
 }
scanf("%c",&h);                    //输入句子
 for (j = 0; j < 81; j++)
 {
   for (i = 0; i < 26; i++)
   {
      if ((a[j] + b[i]) == 155)     //通过规律我们能够发现其ASCII码'A'+'Z'='B'+'Y'=...=155
     {
      a[j] = b[i];
      break;                       //breakw为了更快结束循环
     }
   }
 }
 for (j = 0; j < 81; j++)
 {
  printf("%c", a[j]);
 }
 return 0;
}
