#include <stdio.h>
//Repeat 8 using while loop.. 
int main() {
    int i =1;
    int product= 1;
    int n =4;
    while(i<=n)
    {
        product *= i;
        i++;
    }
    printf("The factorial is %d", product);
    return 0;
}   