#include <stdio.h>

int main() {
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    //if evaluation order right to left: Output 6 6 4;
    //if evaluation order left to right: Output 4 5 5;
    //it is depending on the compiler...
    return 0;
}