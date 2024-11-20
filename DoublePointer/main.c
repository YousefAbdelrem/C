#include <stdio.h>
#include <stdlib.h>

int main()
{
     int* *ptrArr;
    int _size;
    printf("Enter the Size: ");
    scanf("%d",&_size);

    int *ptr[4],val;
    ptrArr = ptr;

    for(int i = 0; i < 4; i++)
    {

        *ptrArr = malloc(_size * sizeof(int));
    }


    for(int i = 0; i < 4; i++)
    {
        for(int j =0; j < _size; j++)
        {
            scanf("%d",&val);
            *ptrArr[i][j] = val;
        }
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j =0; j < _size; j++)
        {
           printf("%d ",*ptrArr[i][j]);
        }
        printf("\n");

    }

    return 0;
}

///2- try dynamic allocation for Array
/// of pointers to integers read and write

/// enter size
///
