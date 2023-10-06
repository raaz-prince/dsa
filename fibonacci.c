#include<stdio.h>

int fibonacci(int x , int y ) 
{
    static int p=5; 
    if(p>0)
    {static int m , n;
    m=x;
    n =y;
    int o = m + n ;
    printf("%d ",o);
    p--;
    fibonacci(n,o);}
}


int main() {
    int x =1; 
    int y =1;
    printf("%d %d ",x,y);
    fibonacci(x,y);

return 0;
}