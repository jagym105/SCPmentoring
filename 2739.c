#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
main()
{
	int N; 
	scanf("%d",&N);//N�� �Է¹���(������ M��)
	int i;//for���� ���� i
	for (i=1;i<=9;i++) //9���� �ݺ�
	{
		printf("%d * %d = %d\n", N, i,(N*i));//N * i ���
	}
}