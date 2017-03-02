#include <iostream>
#include <stdio.h>
#include <string.h>



int fun_test()
{
return 0;
}

int main()
{
	int a = 4;

	int b = 0;

	int *p = NULL;

	p = &a;

	p = new int;

//	b = a++;

	printf("sizeof(c_test)=%d\n", sizeof(fun_test()));

//	int arr[sizeof(fun_test())];


	//a += (a++);
	//printf("%d, %d\n", (a++), a);

	char des[10];
	const	char *p_str = "01234567890";
	
	//strcpy(des, p_str);
	//printf("str=%d\n", strlen(des));

	int c;
	int d[1+1];
}
