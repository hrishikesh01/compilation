#include<stdio.h>

int add(int,int );
int (*fp1)(int,int);
int  mul(int,int);
int (*fp2)(int,int);
int main(void)
{
	int a,b;
	printf("enter  two numbers\n");
    scanf("%d %d",&a,&b);
	fp1=&add;
    fp2=&mul;
	printf("sum is %d\n",fp1(a,b));
	printf("product is %d\n",fp2(a,b));
return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mul(int p,int q)
{
	    int c;
	    c=q*p;
	    return c;
} 
