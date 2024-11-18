#include<stdio.h>

int magicsq(int **sq, const int n) 
{
    
    if (n <= 0) 
    {
        return 0;
    }

    int magic_no = (n * (n * n + 1)) / 2;
   
   
   for (int i = 0; i < n; i++) 
   {
        int row_sum = 0;
        for (int j = 0; j < n; j++) 
        {
            row_sum += sq[i][j];
        }
        if (row_sum != magic_no) 
        {
            return 0;
        }
    }

    for (int j = 0; j < n; j++) 
    {
        int col_sum = 0;
        for (int i = 0; i < n; i++) 
        {
            col_sum += sq[i][j];
        }
        if (col_sum != magic_no) 
        {
            return 0;
        }
    }

    int main_diag_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        main_diag_sum += sq[i][i];
    }
    if (main_diag_sum != magic_no) 
    {
        return 0;
    }

    int sec_diag_sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sec_diag_sum += sq[i][n - i - 1];
    }
    if (sec_diag_sum != magic_no) 
    {
        return 0;
    }

    return 1;
}