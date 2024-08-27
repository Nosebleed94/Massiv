#include <stdio.h>
#include <stdlib.h>
#define LINES 4
#define COLUMNS 3

void Sum_Mass (int *mass1, int *mass2,int *mass3, size_t sizey, size_t sizex);
void Mass (int *mass3, size_t sizey, size_t sizex);

int main ()
{
    int mass1 [LINES][COLUMNS] =   {{2, 3, 8},
                                    {6, 3, 8},
                                    {3, 5, 7},
                                    {5, 7, 11}};

    int mass2 [LINES][COLUMNS] =   {{3, 5, 7},    
                                    {8, 7, 9},                                  
                                    {1, 4, 6},
                                    {7, 3, 6}};

    int mass3 [LINES][COLUMNS] = {};
    Sum_Mass ((int*)mass1, (int*)mass2, (int*)mass3, LINES, COLUMNS); 
    Mass ((int*)mass3, LINES, COLUMNS); 
    return 0;
}

void Sum_Mass (int *mass1, int *mass2, int *mass3, size_t sizey, size_t sizex)
{
    for (int i = 0; i < sizey && i < sizey; i++)
    {
        for (int j = 0; j < sizex &&  j < sizex; j++)
        {
           *((int*)mass3 + sizex * i + j) = *((int*)mass1 + sizex * i + j) + *((int*)mass2 + sizex * i + j);
        }
    }   
}

void Mass (int *mass3, size_t sizey, size_t sizex)
{
    int sum = 0;
    for (int i = 0; i < sizey; i++)
    {
        for (int j = 0; j < sizex; j++ )
        {
            printf("%d ", *((int*)mass3 + sizex * i + j ));
        }
        printf ("\n");
    }   
}
    
