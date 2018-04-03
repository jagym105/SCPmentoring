#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int a, b, c=0;
	scanf("%d",&a);
	for (b=0;b<=a;b++)
	{
		c += b;
	}
	printf("%d",c);
}