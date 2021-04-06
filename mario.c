#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompt user for height/number of rows as integer between 1 and 8
    int n = 0;
    
    while (n < 1 || n > 8)
    {
        n = get_int("How many rows?\n");
    }
    
    //loop for rows
    for (int i = 1; i <= n; i++)
    {
        int row = i;
    
        // loop for left spaces
        for (int j = 1; j <= n - row; j++)
        {
            printf(" ");
        }
    
        // loop for left hashes
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }
    
        // gap
        printf("  ");
    
        // loop for right hashes
        for (int j = 1; j <= row; j++)
        {
            printf("#");
        }
    
        /// (superflous) loop for right spaces
        /// for (int j = 1; j <= n - row; j++)
        /// {
        /// printf(" ");
        /// }
    
        // new row
        printf("\n");
    } 
}