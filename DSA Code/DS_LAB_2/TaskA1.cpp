#include<iostream>   //include i/o library
using namespace std;  //use standard namespace

int main(){
    int A[10]={2,6,8,7,1}; //array of size
    int size =5;            //logical size of array
    int pos=3;
    int val=9;

    //shift element right from the end until pos

    for(int i=size; i>pos; --i){
        A[i]=A[i-1];
    }
    A[pos]=val;   //place the new value
    size++;        //update logical size

    cout<<"After insertion:";
    for(int i=0; i<size; ++i){
        cout<<A[i]<<"  ";  //print updated array
    //cout<<endl;
    }
        return 0;

}