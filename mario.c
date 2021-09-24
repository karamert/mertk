#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);
    
    // build blocks
    for (int a = 0; a < n; a++)
    {
     for (int j = 0; j < n; j++)
     {
         if (a + j < n - 1)
          printf(" ");
         else
          printf("#");
     }
     printf("\n");
    }
}
