#include"ch4.h"

int main(int argc,char *argv[])
{
	int a;
	if(argc!=3) printf("2 num are required!\n");
	exit(0);
	a=atoi(argv[1])+atoi(argv[2]);	
	printf("%d\n",a);
}
