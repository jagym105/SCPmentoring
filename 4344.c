#include <stdio.h>
main()
{
	int C;//테스트케이스 C
	scanf_s("%d", &C);
	int i, N[1000], j; int number[100][100]; //i,j 는 for문을 쓰기위한 변수, N은 각 줄의 배열의 수 ,number는 각 줄의 배열을 저장하기 위함 
	for (i = 0 ; i < C ; i++)
	{
		scanf_s("%d", &N[i]);// 각 줄 첫번째 값(N)을 입력받음.
		for (j = 0 ; j < N[i] ; j++) //점수를 N번 입력받음
		{
		scanf_s("%d", &number[i][j]); //입력받아서 number[i][j]에 저장함
		}
	}

	int a, b; //for문을 쓰기위한 간단한 변수들
	
	double average[100] = { 0. }; //average초기화

	for (i = 0; i < C; i++)
	{
		for (b = 0; b < N[i]; b++)
		{
			average[i] += number[i][b]/N[i];		//i번째 줄 배열에 있는 수들의 평균 구하기
		}

	}
	
	
	int ota[100] = { 0 , }; //평균이상인 값이 몇개나 되는지 구하기 위함

	for (a = 0; a < C; a++)
	{
		for (i = 0; i < N[i]; i++)
		{
			if (number[a][i] > (int)average[a])	//a줄의 i번째 저장된 값이 a줄의 평균을 넘으면 ota(over the average)에 ++
			{
				ota[a]++;		

			}
		}


		printf("%.3f%%\n", (double)ota[a] / (double)N[a]); //N[i](i번째 줄의 배열 수)에 대하여 ota[a](i번째 줄에 평균을 넘는 배열의 수) 비율을 구함
	}

}