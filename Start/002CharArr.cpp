#include<stdio.h>
int main002()
{
	char s1[5] = {'A','B','C','D','\0'};
	char s2[5] = "ABCD";
	if (s1[4] == s2[4])
	{
		printf("s2�ַ������Զ����˽�����");
	}
	return 0;
}