#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int N; 
	scanf("%d",&N);//N을 입력받음(구구단 M단)
	int i;//for문을 위한 i
	for (i=1;i<=9;i++) //9까지 반복
	{
		printf("%d * %d = %d\n", N, i,(N*i));//N * i 출력
	}
}