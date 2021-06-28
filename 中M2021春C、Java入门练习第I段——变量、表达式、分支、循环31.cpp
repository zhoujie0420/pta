/*对任意一个自然数N0，先将其各位数字相加求和，再将其和乘以3后加上1，变成一个新自然数N1；然后对N1重复这种操作，可以产生新自然数N2 ；
多次重复这种操作，运算结果最终会得到一个固定不变的数Nk ，就像掉入一个数字“陷阱”。

本题要求对输入的自然数，给出其掉入“陷阱”的过程。

输入格式:
在一行内给出一个自然数N0（N0<30000）。

输出格式:
对于输入的N0 ，逐行输出其掉入陷阱的步骤。第i行描述N掉入陷阱的第i步，格式为： i:Ni（i≥1）。当某一步得到的自然数结果Nk(k≥1)与上一步Nk-1
 相同时，停止输出。*/
 #include<stdio.h>
 int number(int N){
    int add=0,num=N%10;
    if(num==N){
        add=N;
    }else{
        while(N!=0){
        add+=num;
        N/=10;
        num=N%10;
        }
    }
    return add*3+1;
}  
int main (){
   int N=0,count=0,now=0,pre=0;
   scanf("%d",&N);
   now = number(N);
    while(1){
        count++;
        printf("%d:%d\n",count,now);
        pre=now;
        now=number(now);
        if(pre==now){
          if(now!=N)//如果这个数的最终结果和N相等，则不用再输出
            printf("%d:%d\n",count+1,now);
            break;
      }
  }
   return 0;
}


