/*ÿ������������� 1 ��������������ʽΪ

�� 1 �У������� n
�� 2 �У��� 1 ��ѧ�������� ѧ�� �ɼ�
�� 3 �У��� 2 ��ѧ�������� ѧ�� �ɼ�
  ... ... ...
�� n+1 �У��� n ��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�

�����ʽ��
��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�*/
#include<stdio.h>

// ����ѧ���Ľṹ��
struct student{
    char name[15];
    char id[15];
    int grade;
}info[100];

int main()
{
    int i = 0, max = 0, min = 0, n;
    scanf("%d", &n);
	//����ѭ���ҵ����ֵ����Сֵ��ͬѧ��Ϣλ��
    for(i = 0; i < n; i++){
        scanf("%s %s %d", info[i].name, info[i].id, &info[i].grade);
        if(info[i].grade > info[max].grade)
          max = i;
        if(info[i].grade < info[min].grade)
          min = i;
    }
	// ��ӡ��Ϣ
    printf("%s %s\n", info[max].name, info[max].id);
    printf("%s %s\n", info[min].name, info[min].id);

    return 0;
}


