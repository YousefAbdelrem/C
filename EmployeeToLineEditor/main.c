#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define Extended -32
#define Enter 13
#define Esc 27
#define Home 71
#define End 79
#define Up 72
#define Down 80
#define left 75
#define right 77
#define Tap 9
#define backspace 8
void textattr(int i);
void gotoxy( int column, int line );
char* LineEditor(int size, int col,int row, int startKey,int endKey);
int main()
{


    char *ptr = LineEditor(30,20,10,1,1);
    system("CLS");
    printf("HEaaaaaaaaaaaaaaa\\\\\||||||LLO\n");
    printf("%s",ptr);
    return 0;
}



/// create 3 val & 3 pointers
/// choose the key
/// then increase or decrease pointers int curr valu
/// print on screen



void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}


/// one employee with line editor
/*
char* LineEditor(int _size,int col,int row,int startKey,int endKey)
{
    char *arr;
    arr=malloc(_size * sizeof(char));  //char arr[30]
}
*/


char* LineEditor(int size, int col,int row, int startKey,int endKey)
{
    int first, curr,last;
    char *arr = malloc(size * sizeof(char)),flag = 1;
    char *pfirst, *pcurr, *plast;
    pfirst = pcurr = plast = arr;
    first = curr = last = 0;
    for(int i = 0; i < size; i++)
    {
        gotoxy(col+i,row);
        textattr(2);
    }

    do
    {
        gotoxy(col + curr,row);
        char ch = getch();

        switch(ch)
        {
        case Extended:
            ch = getch();
            switch(ch)
            {
            case left:
                if(curr > first)
                {
                    curr--;
                    pcurr--;
                }
                else
                {
                    /// curr == first;
                }
                break;
            case right:
                if(curr < last)
                {
                    curr++;
                    pcurr++;
                }
                break;

            case Home :
                curr = first;
                break;
            case End :
                curr = last;
                break;
            }

            break;
        case Esc:
        case Enter:
            *pcurr = '\0';
            flag = 0;
            break;
        case backspace:
            /// at the end curr == last
            if(curr == last)
            {
                gotoxy( col + curr - 1,row) ;
                printf(" ");
                curr--;
                last--;
                pcurr--;
            }
            break;
        case Down:
        case Up:
            break;
        default :
            if(ch >= 65 && ch <= 95){
            if(curr == last)
            {
                if(last < size)
                {
                    *pcurr = ch;
                    pcurr++;
                    plast++;
                    curr++;
                    last++;

                    printf("%c",ch);
                }
            }
            else
            {
                *pcurr = ch;
                pcurr++;
                curr++;
                printf("%c",ch);
            }
            }
        }
    }
    while(flag);

    return arr;
}
