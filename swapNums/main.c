#include <stdio.h>
#include <stdlib.h>

void Swap(int *left, int *right){
    int tmp = *left;
    *left = *right;
    *right = tmp;
}

int main()
{
    int x = 5;
    int y = 7;

    Swap(&x, &y);
    printf("swapped: X: %i, Y: %i",x, y);

    return 0;
}
