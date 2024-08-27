
#include <stdio.h>
#include <stdlib.h>
#define LINES 4
#define COLUMNS 3
void Mass (int *mass, size_t sizex, size_t sizey);

int main ()
{
    int mass [LINES][COLUMNS] = {{2, 3, 8},
                                 {6, 3, 8},
                                 {3, 5, 7},
                                 {5, 7, 11}};
    Mass ((int*)mass, LINES, COLUMNS); 
    return 0;
}

void Mass (int *mass, size_t sizey, size_t sizex)
{
    int sum = 0;
    for (int i = 0; i < sizey; i++)
    {
        for (int j = 0; j < sizex; j++ )
        {
            printf("%d ", *((int*)mass + sizex * i + j ));
            sum += *((int*)mass + sizex * i + j) ;
        }
        printf ("\n");
    }
    printf ("sum = %d", sum);   
}
    