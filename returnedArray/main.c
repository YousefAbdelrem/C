#include <stdio.h>
#include <stdlib.h>

int* returnedArray(){
    static int arr[5] = {1, 2 ,3 ,4, 5};
    return arr;
}

int main()
{

    int *ptr;
    ptr = returnedArray();

    printf("Array returned using ptr: ");
    for(int i = 0; i < 5; i++)
    {
        printf(" %i ,", ptr[i]);
    }

    return 0;
}
