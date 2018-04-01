#include <stdio.h>
main()
{
	int grade;
	scanf_s("%d", &grade);

	if (grade == 100)
	{
		grade = 99;
	}

	switch (grade/10)
	{
	
	case 9:
		printf("A");
		break;

	case 8:
	{
		printf("B");
		break;
	}
	case 7:
	{
		printf("C");
		break;
	}
	case 6:
	{
		printf("D");
		break;
	}
	case 5: printf("F");
		break;
	case 4: printf("F");
		break;
	case 3: printf("F");
		break;
	case 2: printf("F");
		break;
	case 1: printf("F");
		break;
	case 0: printf("F");
		break;
devault:
		{
		printf("0~100사이의 수를 입력해주세요");
		}
	}
}