#include <stdio.h>

int main() 
{
    int num[10];
    int EvenSum = 0, OddSum = 0;

    printf("Please enter ten numbers:\n");
    
    for (int i = 0; i < 10; i++)
     {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) 
        {
            EvenSum += num[i];   
        } else {
            OddSum += num[i];
        }
    }
    
    printf("\n******* Output ********\n\n");
    printf("Sum of even numbers: %d\n", EvenSum);
    printf("Sum of odd numbers: %d\n", OddSum);
    printf("Difference (EvenSum - OddSum): %d\n", EvenSum - OddSum);

    return 0;
}
