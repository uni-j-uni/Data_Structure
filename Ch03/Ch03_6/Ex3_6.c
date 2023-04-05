#include <stdio.h>
#include "addPoly.h"

int main()
{
	polynomial A = { 3, { 4, 3, 5, 0 } };
	polynomial B = { 4, { 3, 1, 0, 2, 1 } };
	polynomial C;
	
	C = addPoly(A, B);   // ���׽� A, B�� ���� ������ �����ϱ� ���� addPoly �Լ� ȣ��

	printf("\n A(x) = ");
	printPoly(A);   // ���׽� A ���
	
	printf("\n B(x) = ");
	printPoly(B);   // ���׽� B ���

	printf("\n C(x) = ");
	printPoly(C);   // ���׽� C ���
	getch();

	return 0;
}