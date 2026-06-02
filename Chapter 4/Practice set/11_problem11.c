#include <stdio.h>
// Implement 10 using other types of loops. 
int main()
{
    int n = 5;
    int not_prime = 0;
    if (n == 0 || n == 1)
    {
        not_prime = 1;
        printf("%d is not prime number", n);
    }
    else
    {   
        int i =2;
        // while(i<n)
        // {
        //     if (n % i == 0 && n != 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // }
        do
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while(i<n);
        if (not_prime)
        {
            printf("%d is not prime number", n);
        }
        else
        {
            printf("%d is a prime number", n);
        }
    }
    return 0;
}