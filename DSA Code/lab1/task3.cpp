#include<iostream>
using namespace std;
int main(){
    const char* names[]={"Ali","Sara","Azeem","Noor","Hamza"};

    int n=sizeof(names)/sizeof(names[0]);

    for(int i=0;i<n;++i){
        cout<<"names["<<i<<"]->"<<names[i]<<"\n";
    }
        const char* replacement="Fatima";
        names[2]=replacement;
        cout<<"After change, names[2]->"<<names[2]<<"\n";
        return 0;
    }