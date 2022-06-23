#include<stdio.h>

struct Student
{
	char* name;
	int id;
	int age;
};

typedef int ElemType;
typedef char* Name;

typedef struct Teacher
{
	Name name;
	ElemType id;
	ElemType age;
}Teacher, *Pteacher;

int main()
{
	struct Student st, * pst;
	pst = &st;
	st.age = 22;
	printf("%d\n", st.age);
	printf("%d\n", pst->age);
	printf("%d\n", (*pst).age);

	char name[] = "aa";
	Name n = name;
	Teacher t;
	t.age  = 20;
	Pteacher pt = &t;
	printf("%d\n", t.age);
	printf("%d\n", pt->age);
}