#include <stdio.h>
#include <cs50.h>

int main(void)
{
printf("length of your shower in min?\n");
int t = GetInt();
int b = t*192/16;
printf("you consume %i bottles of water\n",b);
}