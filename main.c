#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool even(int n);
bool odd(int n);


bool even(int n)
{
    if(n==0)return true;
    if(n<0)return false;
    return odd(n-1);
}

bool odd(int n)
{
    if(n==1)return true;
    if(n<0)return false;
    return even(n-1);
}

int main()
{
    int num;
    bool isodd,iseven;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    isodd=odd(num);
    iseven=even(num);
    if(isodd==true)printf("Odd");
    if(iseven==true)printf("Even");
}
