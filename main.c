
#include <stdio.h>

int fibonacci(int n)
{
if(n==1 || n==0)
return 1;

return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int f=0;
    printf("Enter the index of the fibonacci number:");
    scanf("%d",&f);
    f=fibonacci(f);
    printf("The fibonacci number is %d",f);
    
}