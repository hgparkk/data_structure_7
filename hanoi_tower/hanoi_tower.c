/*
프로그램 내용 : 하노이의 탑 문제
실습일 : 2023.04.25
실습자 : 박현규
학번 : 202111678
*/

#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1)
        printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
    else
    {
        hanoi_tower(n - 1, from, to, tmp);
        printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
        hanoi_tower(n - 1, tmp, from, to);
    }
}

int main()
{
    hanoi_tower(4, 'A', 'B', 'C');
}
