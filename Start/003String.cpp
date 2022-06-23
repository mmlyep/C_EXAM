#include<stdio.h>
#include<string.h>

void getsAndPutsMethod()
{
	//char s[5];
	//gets(s);
	//puts(s);
}

void strcatMethod()
{
	char a[10]="1234";
	char b[10]="5678";
	strcat_s(a, b);
	puts(a);
}

void strcpyMethod()
{
	char a[10] = "123456789";
	char b[10] = "5678";
	strcpy_s(a, b);
	puts(a);
}

void strcmpMethod()
{

}

void strlenMethod()
{

}

int main003()
{
	//getsAndPutsMethod();
	//strcatMethod();
	strcpyMethod();
	return 0;
}