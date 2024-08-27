#include <stdio.h>
#include <stdlib.h>
void Mass (int *mass, size_t sizex);

int main ()
{
    int mass [15] = {2,
                     2, 6,
                     4, 7, 9,
                     7, 9, 2, 8,
                     5, 7, 8, 3, 7};
                         
     Mass ((int*)mass, 15); 
     return 0;
}

void Mass (int *mass, size_t sizex)
{
    int j = 0;
    int i = 0;
    int step = 2;
    while (i < sizex)
    {
        while (i <= j)
        {
            printf ("%d ", *((int*)mass + i));
            ++i;
        }
        j = j + step;
        ++step;
        printf("\n");
    }
}

