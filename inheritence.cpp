#include<iostream>
using namespace std;

class parent {
    protected:
int x;
public:
parent(int z) {
    x=z;
}
int gt() {
    return x;
}
virtual void fun()=0;
};

class child : public parent {
int y;
public:
child(int a, int b) :parent(a) {
 y=b;
}
void fun() {
    cout<<"prince kumar"<<endl;
}
void get() {
    cout<<y<<endl;
    cout<<x;
}
};

int main() {
    child c(5,6);
    c.fun();
    cout<<endl;
    c.get();
    cout<<endl<<c.gt();
return 0;
}