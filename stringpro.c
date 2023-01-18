#include<stdio.h>
void lenstr(void);
void copystring(void);
void compstring(void);
void main()
{
	lenstr();
	copystring();
	compstring();
}
void lenstr()
{
char s[20];
int i;
printf("enter the string:");
scanf("%s",&s);
for(i=0;s[i];i++);
printf("%d\n",i);
}

void copystring()
{
	char a[20],b[20];
	int i;
	printf("enter the string:");
	scanf("%s",&a);
	
	for(i=0;a[i];i++)
		b[i]=a[i];
	
	printf("\n the copied string is:%s",b);
}

void compstring()
{
	char a[20],b[20];
	printf("enter the 2 strings :");
	scanf("%s\n%s",&a,&b);
	int i,j;
	for(i=0;a[i];i++)
		for(j=0;b[j];j++);
	if(i>j)
		printf("string 1 isgreater :");
	else 
		printf("string 2 is greater");
	if(i==j)
printf("both the string are equal");
}
	