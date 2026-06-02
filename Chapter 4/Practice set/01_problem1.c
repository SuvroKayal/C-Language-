#include <stdio.h>
//Write a program to print multiplication table of a given number n. 
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}