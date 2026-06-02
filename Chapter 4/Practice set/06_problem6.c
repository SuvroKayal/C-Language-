#include <stdio.h>
// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 
int main() {
     int i= 1, n, sum = 0;
    scanf("%d", &n);
    // do{
    //      sum+=i;
    //     i++;
    // } while(i<=n);
    for (i = 0; i <= 10; i++)
    {
        sum+=i;
    }
    
    printf("The sum of first %d natural number is: %d",n, sum);
    return 0;
}