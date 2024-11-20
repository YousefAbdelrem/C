#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3];
    int *ptr = arr;

        /// write way 1
        printf("Write method 1 ");
        printf("Enter 3 numbers : ");
        for(int i =0; i < 3; i++)
        {
            scanf("%d",ptr + i);
        }
        /// read 1
        printf("read method 1 number:  ");
        for(int i =0; i < 3; i++)
        {
            printf("%d ",*(ptr + i));
        }

    /// write way 2
        printf("\nWrite method 2 ");
        printf("Enter 3 numbers : ");
        for(int i = 0; i < 3; i++)
        {
            scanf("%d",&ptr[i]);
        }
        /// read 2
        printf("read method 1 number:  ");
        for(int i =0; i < 3; i++)
        {
            printf("%d ",ptr[i]);
        }


    /// write way 3
    printf("\nWrite method 3 ");
    printf("Enter 3 numbers : ");

    scanf("%d",(ptr));
    scanf("%d",(ptr + 1));
    scanf("%d",(ptr + 2));


    /// read 3
    printf("read method 3 number: ");
    printf("%d ", *(ptr));
    printf("%d ", *(ptr + 1));
    printf("%d ", *(ptr + 2));

    return 0;
}
