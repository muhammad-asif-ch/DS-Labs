#include<iostream>
using namespace std;
int main(){
    int*p= new int(50);
    cout<< "*p before delete   "<<*p << "\n";

    delete p;
    p = nullptr;

    cout<<"Pointer safely set to nullptr after delete\n";
        return 0;
    }