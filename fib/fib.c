/*
프로그램 내용 : 순환함수와 반복함수를 이용한 피보나치 수열 계산
실습일 : 2023.04.25
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return (fib(n - 1) + fib(n - 2));
}

int fib_iter(int n)
{
	int i, tmp, current, last;
	if (n < 2) return n;
	else
	{
		last = 0;
		current = 1;
		for (i = 2;i < n;i++)
		{
			tmp = current;
			current += last;
			last = tmp;
		}
		return current;
	}
}

int main()
{
	int ret, n;
	clock_t startTime, finishTime;
	double duration;
	double ret1;

	printf("Please, enter a number>>");
	scanf("%d", &n);

	startTime = clock();
	ret = fib(n);
	finishTime = clock();
	duration = (double)(finishTime - startTime) / CLOCKS_PER_SEC;
	printf("Recursion(Fibo %d):%d\n", n, ret);
	printf("%f초 입니다.\n", duration);

	startTime = clock();
	ret = fib_iter(n);
	finishTime = clock();
	duration = (double)(finishTime - startTime) / CLOCKS_PER_SEC;
	printf("Iteration(Fibo %d):%d\n", n, ret);
	printf("%f초 입니다.\n", duration);

	return 0;
}
