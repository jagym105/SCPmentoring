#include <stdio.h>
main()
{
	int C;//�׽�Ʈ���̽� C
	scanf_s("%d", &C);
	int i, N[1000], j; int number[100][100]; //i,j �� for���� �������� ����, N�� �� ���� �迭�� �� ,number�� �� ���� �迭�� �����ϱ� ���� 
	for (i = 0 ; i < C ; i++)
	{
		scanf_s("%d", &N[i]);// �� �� ù��° ��(N)�� �Է¹���.
		for (j = 0 ; j < N[i] ; j++) //������ N�� �Է¹���
		{
		scanf_s("%d", &number[i][j]); //�Է¹޾Ƽ� number[i][j]�� ������
		}
	}

	int a, b; //for���� �������� ������ ������
	
	double average[100] = { 0. }; //average�ʱ�ȭ

	for (i = 0; i < C; i++)
	{
		for (b = 0; b < N[i]; b++)
		{
			average[i] += number[i][b]/N[i];		//i��° �� �迭�� �ִ� ������ ��� ���ϱ�
		}

	}
	
	
	int ota[100] = { 0 , }; //����̻��� ���� ��� �Ǵ��� ���ϱ� ����

	for (a = 0; a < C; a++)
	{
		for (i = 0; i < N[i]; i++)
		{
			if (number[a][i] > (int)average[a])	//a���� i��° ����� ���� a���� ����� ������ ota(over the average)�� ++
			{
				ota[a]++;		

			}
		}


		printf("%.3f%%\n", (double)ota[a] / (double)N[a]); //N[i](i��° ���� �迭 ��)�� ���Ͽ� ota[a](i��° �ٿ� ����� �Ѵ� �迭�� ��) ������ ����
	}

}