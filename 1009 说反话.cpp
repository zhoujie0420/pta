#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char str[81];
  gets(str);
  for (i = strlen(str) - 1; i >= 0; i--){
  // �����еĿո�ת���ɴ�ӡ�ַ����Ľ�����
    if (str[i] == ' '){
      printf("%s", &str[i + 1]);
      printf(" ");
    //  str[i] = '\0';
    }
    // ���ߵ�������ʼλ��ʱ����Ҫ������ӡ��
    if (i == 0){ printf("%s", &str[i]); }
  }
  return 0;
}
 
