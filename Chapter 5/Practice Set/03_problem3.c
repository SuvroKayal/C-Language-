#include <stdio.h>
/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2. 
*/
float force (float);

float force (float mass){
    return mass*9.8;
}
int main() {
    float m =45;
    printf("The value of the force is  %.2f", force(m));
    return 0;
}