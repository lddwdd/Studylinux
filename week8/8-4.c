#include "ch08.h"

static jmp_buf g_stack_env;
static void func1(void);
static void func2(void);
int main(void)
{
	if(setjmp(g_stack_env)==0)
	{
		printf("Main Normal flow!\n");	
		func1();
		printf("Normal flow back from func1\n");
	}
	else{
		printf("Back from Long jump!\n");	
	}
	
	return 0;
}

static void func1()
{
	printf("Enter func1!\n");
	func2();
	printf("Leave func1!\n");
}

static void func2()
{
	printf("Enter func2!\n");
	longjmp(g_stack_env,1);
	printf("Leave func2!\n");
}
