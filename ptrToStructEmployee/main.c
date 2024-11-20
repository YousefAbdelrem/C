#include <stdio.h>
#include <stdlib.h>


struct employee
{
    int id;
    char name[30];
};


int main()
{
    struct employee e;
    struct employee *ptr = &e;
    ptr-> id = 1;
    strcpy(ptr-> name,"Yousef Abelrhem");
    printf("Name : %s \n", ptr->name);
    printf("ID : %d", ptr->id );

    return 0;
}
