#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
float c; float f;
f = 0;
while (f == 0)
    {
    printf("How much change do you need?");
    c = get_float();
     if (c<0)
            f = 0;
            else
            f = 1;
    }

float y = c*100;
float x = round(y);
int i = (int) x;
int q = i/25;
int c2 = i-q*25;
int d = c2/10;
int c3 = c2-d*10;
int n = c3/5;
int c4 = c3-n*5;
int p = c4;
int t = q+d+n+p;
printf("%i\n",t);
}