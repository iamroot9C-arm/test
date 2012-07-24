#if 0
yes, hello.
#endif
#include <stdio.h>
#include "sum.h"

// 한글 테스트.. 
int main(int argc, char* argv[])
{
    int a = 10;
    int b = 20;

	printf("Hello World\n");
    printf("sum: %d + %d = %d\n", a, b, sum(a,b));

	return 0;
}


