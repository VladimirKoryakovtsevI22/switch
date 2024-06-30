#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	printf("Enter number: ");
	scanf_s("%d", &a);

	switch (a)
	{
		case '1':
			printf("1\n");
			break;
		case '2':
			printf("2\n");
			break;
		case '3':
			printf("3\n");
			break;
		case '4':
			printf("4\n");
			break;
		case '5':
			printf("5\n");
			break;
		default:
			printf("you entered more than 5\n");
			break;
	}
	
	return 0;
}

