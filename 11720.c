#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int a;
	char b[100] = { 0, };
	
		scanf("%d", &a);
		scanf("%s", &b);

		int plus = 0;
		int i;
		for (i = 0; i < a; i++)
		{
			plus += (int)b[i] - 48;
		}
		printf("%d",plus);
	
}