#include <stdio.h>

int main() {
    int a = 1, b =1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if (a&&b)
    {//here we are using operators
        printf("Both are true\n");
    }
    //is same as writing
    if(a){
        if(b){
            printf("Both are true\n");
        }//it is a nested if
    }
    return 0;
}