#include"my.h"
int main()
{
	int ret;
	printf("1-1 is running\n");
	ret=write(1,"Hello world\n",13);
	sleep(100);
	exit(0);
	return 0;
}


