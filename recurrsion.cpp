#include<iostream>
#include<string>
using namespace std;
void tower(int n,string a,string b,string c) {
    tower(n-1,a,c,b);
    printf("%s -> %s",a,b);
    printf("\n");
    tower(n-1,b,a,c);
}
int main() {
    string a="beg",b="help",c="end";
    tower(3,a,b,c);
return 0;
}