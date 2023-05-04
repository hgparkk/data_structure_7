/*
프로그램 내용 : 순환함수와 반복함수를 이용한 팩토리얼 계산
실습일 : 2023.04.25
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>

int factorial(int n)
{
	printf("factorial(%d)\n", n);
	if (n == 1) return 1;
	else return (n * factorial(n - 1));
}

int factorial_iter(int n)
{
	int k, result = 1;
	for (k = n;k > 0;k--)
		result = result * k;
	return result;
}

int main()
{
	factorial(3);

	return 0;
}
