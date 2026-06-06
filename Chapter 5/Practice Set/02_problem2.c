#include <stdio.h>
// Write a function to convert Celsius temperature into Fahrenheit.
float c2f(float c);
float c2f(float c){
    return (1.8*c) + 32;
}

int main() {
    float celcius = 50;
    printf("Celcius to Fahrenheit for %.2f is: %.2f\n", celcius, c2f(celcius));
    return 0;
}