#include <stdio.h>

int main() {
    int age = 65;
    if(age>=18 && age <50){
        printf("You can drive!");
    }
    else if (age>=51 && age <100 )
    {
        printf("You are a senior citizen and you can drive");
    }
    
    else{
        printf("You can't drive");
    }
    return 0;
}