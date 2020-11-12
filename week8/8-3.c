#include"./ch4.h"
static int count=0;
int fun(int x)
{
	int a=0,b=0,c=0;
	count++;
	printf("count =%d\n",count);
	printf("local a=%8x,b=%8x,c=%8x ",&a,&b,&c);
	if(x==1)
	return 1;
	else return fun(x-1);	
}

int main()
{
	printf("sum %d=%d\n",1024*1024*10,fun(1024*1024*10));
	return 0;
}
