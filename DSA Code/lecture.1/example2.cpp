#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter size:   ";
   cin>> n ;
   int *y = new int[n];
   for(int i=0;i<n;i++)
   {
    y[i]= i+1;
   }
   cout<<"Dynamic Array:    ";
   for(int i=0;i<n;i++)
   {
    cout<< y[i] << " ";
   }
   delete[] y;
   
    return 0;
}