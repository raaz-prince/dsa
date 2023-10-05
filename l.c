#include<stdio.h>
void tower(int n,char a,char b,char c) {
    if(n==1)
    printf("%c -> %c\n",a,c);
    else {
  tower(n-1,a,c,b);
  printf("%c -> %c \n",a,c);
  tower(n-1,b,a,c);
    }
}
int main() {
    int n;
    printf("enter n:- ");
    scanf("%d",&n);
    tower(n,'a','b','c');
return 0;
}