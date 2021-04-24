#include <cs50.h>
#include <stdio.h>
int n;
int counter = 1;
int check=0;
int main (void)
{
    do
    {
        n= get_int("Height= ");
    }
    while(n<1 || n>8);

            if(n>0 && n<9)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n-counter;j++)
                {
                    printf(" ");
                }

                for(int k=0;k<counter;k++)
                {
                    printf("#");
                }
                printf("\n");
                counter = counter+1;
            }



        }
}

