#include<iostream>
using namespace std;

int main(){
    int A[10]={2,6,8,7,1};
    int size =5;
    int pos=2; //delete elements at index 2
    

    //shift elements left to overwrite deleted one
    for(int i=pos; i<size-1; ++i){
        A[i]=A[i+1];
    }
    
    size--; //reduce logical size

    cout<<"After deletion:";
    for(int i=0; i<size; ++i){
        cout<<A[i]<<"  ";

    }
        return 0;

}