#include<iostream>
using namespace std;
int main(){
    int x =42;
    int*p=&x;
    int**q=&p;

    cout<<"x: "<<x<<"\n";
     cout<<"*p: "<<*p<<"\n";
      cout<<"**q: "<<**q<<"\n";
      **q=100;
      cout<<"after **q=100, x:"<<x<<"\n";
      return 0;
}