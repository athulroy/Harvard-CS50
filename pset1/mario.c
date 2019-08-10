//Nikhil Francis Giji
//5th August,2019
//Problem Set 1
//problem to print a mario pyramid
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Asking positive integer as input
    int n;
    do 
    {
        printf("enter a positive integer:");
        n = get_int("");
    }
    while (n < 1 || n > 8);
    
    
    for (int i = 1; i <= n; i++)
    {
        //print spaces
        for (int j = 0; j < (n - i); j++)
        {
            printf(" ");
        }
        //print hashes    
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("  ");
        //print hashes again   
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
