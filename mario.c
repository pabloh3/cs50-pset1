#include <cs50.h>
#include <stdio.h>


int main(void)
{
int f; int h;
f = 0;
while (f == 0)
{

    printf("Height");
   h = get_int();
    
    if ((h<0) || (h>23))
        f = 0;
        else
        f = 1;
}
int i; int n; int u;
for (n = 1; n < (h+1); n++)
    {
    for (i = 1; i < (h-n+1) ; i++)
        {
        printf(" ");
        }
    for (u = 1; u < (n) ; u++)
        {
        printf("#");
        }
    printf("##\n");
    }
}
