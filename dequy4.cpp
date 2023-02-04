#include <stdio.h>

void hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Dia 1 sang %c trung gian %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("Dia %d sang %c trung gian %c\n", n, from, to);
    hanoi(n - 1, aux, to, from);
}

int main()
{
    int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);
    printf("The steps to solve the Tower of Hanoi with %d disks are:\n", n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}

