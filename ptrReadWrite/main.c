#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int *ptr = &num;
    printf("Enter number read and write using pointer :");
    scanf("%d",ptr);
    printf("the ptr: %x \nthe number: %d",&ptr, *ptr);


    return 0;
}
