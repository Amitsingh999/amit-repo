#include<stdio.h>

int main() {
    int num[] = {50, 33, 40, 90, 20, 100, 55, 109};
    int check;

    printf("Original array: ");
    for(int i = 0; i < 8; i++) 
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    for(int i = 0; i < 8; i++) 
    {
        for(int k = i + 1; k < 8; k++) 
        {
            if(num[i] > num[k]) 
            {
                check = num[i];
                num[i] = num[k];
                num[k] = check;
            }
        }
    }

    printf("Ascending order: ");
    for(int i = 0; i < 8; i++) 
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
