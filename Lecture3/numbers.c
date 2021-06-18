#include <stdio.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    //linear search
    // search from left to right or right to left
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("found: ");
            return 0;
        }
    }
    printf("not found");
    return 1;
}