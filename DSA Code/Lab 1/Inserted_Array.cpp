#include<iostream>
using namespace std;

int main()
{
    int x[10];
    int n = 5;
    for (int i=0; i <6; i++){
        x[i]=2*i;
    }
    x[n] = 99;
    n++;
    cout<<"After insertion: ";
    for(int i=0; i<6; i++)
    {
    cout<< x[i] << " ";
    }
    cout << endl;
    return 0;
}