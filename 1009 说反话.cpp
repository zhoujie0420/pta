#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char str[81];
  gets(str);
  for (i = strlen(str) - 1; i >= 0; i--){
  // 将所有的空格转化成打印字符穿的结束符
    if (str[i] == ' '){
      printf("%s", &str[i + 1]);
      printf(" ");
    //  str[i] = '\0';
    }
    // 当走到数组起始位置时候需要单独打印。
    if (i == 0){ printf("%s", &str[i]); }
  }
  return 0;
}
 
