#include <stdio.h>

int main() {

	int N, x, y, i, s = 0, number[100];//N�� �迭�� �� x�� �񱳰�

	scanf_s("%d %d", &N, &x);

	for (i = 0; i < N; i++) {

		scanf_s("%d", &y);

		if (y < x) 
		{
			number[s] = y;
			s++;
		}

	}

	for (i = 0; i < s; i++) {

		printf("%d ", number[i]);
	}

}
