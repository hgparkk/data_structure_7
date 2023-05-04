/*
프로그램 내용 : 순환함수와 반복함수를 이용한 제곱 계산
실습일 : 2023.04.25
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>
#include <time.h>

double slow_power(double x, int n)
{
	int i;
	double result = 1.0;
	for (i = 0;i < n;i++)
		result = result * x;
	return result;
}

double power(double x, int n)
{
	if (n == 0)
		return 1;
	else if ((n % 2) == 0)
		return power(x * x, n / 2);
	else
		return x * power(x * x, (n - 1) / 2);
}

int main()
{
	clock_t startTime, finishTime;
	double duration;

	startTime = clock();
	for (int i = 0; i < 10000000; i++)
	{
		slow_power(2, 500);
	}
	finishTime = clock();
	duration = (double)(finishTime - startTime)/CLOCKS_PER_SEC;
	printf("반복함수를 이용해 계산에 걸리는 시간은 %lf 초 입니다\n", duration);
	startTime = clock();
	for (int i = 0; i < 10000000; i++)
	{
		power(2, 500);
	}
	finishTime = clock();
	duration = (double)(finishTime - startTime) / CLOCKS_PER_SEC;
	printf("순환함수를 이용해 계산에 걸리는 시간은 %lf 초 입니다\n", duration);

	return 0;
}
