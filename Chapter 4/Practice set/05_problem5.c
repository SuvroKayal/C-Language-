#include <stdio.h>
//Write a program to sum first ten natural numbers using while loop.
int main() {
    int i= 1, n, sum = 0;
    scanf("%d", &n);
    while (i<=n)
    {
        sum+=i;
        i++;
    }
    printf("The sum of first %d natural number is: %d",n, sum);
    return 0;
}