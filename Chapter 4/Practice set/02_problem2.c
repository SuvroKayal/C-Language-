#include <stdio.h>
//Write a program to print multiplication table of 10 in reversed order.
int main() {
    int n = 10;
    scanf("%d", &n);
    for(int i = 10; i >= 0; i--){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}