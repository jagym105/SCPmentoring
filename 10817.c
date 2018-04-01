#include <stdio.h>
main()
{
	int a, b, c;
	scanf_s("%d %d %d",&a,&b,&c);
	if (a >= b & a<=c | a>=c & a <= b)
		printf("%d", a); 
	else if (b >= c & b<=a | b>=a & b <= c)
		printf("%d", b);
	else if (c >= b & c<=a | c>=a & c <= b)
		printf("%d", c);
}