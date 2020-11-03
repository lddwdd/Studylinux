#include"ch4.h"
static void callback1(void)
{
	printf("--------call back1-------\n");
}
static void callback2(void)
{
	printf("--------call back2-------\n");
}
static void callback3(void)
{
	printf("--------call back3-------\n");
}
static void __attribute__((destructor)) after_main()
{
	printf("----------After Main--------\n");
}
int main(void)
{
	atexit(callback1);
	atexit(callback2);
	atexit(callback3);
	printf("-------data in buffer-------\n");
	//_exit(0);
	exit(0);
}
