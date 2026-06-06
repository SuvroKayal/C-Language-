#include <stdio.h>
//Write a program using function to find average of three numbers.
float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a + b + c)/3.0;
}

int main() {
    int a = 5, b = 6, c = 8;
    printf("The average of 3 numbers is: %f\n", average(a, b, c));
    return 0;
}