#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"How many scores? ";
    cin>> n;
    int* scores = new int [n];
    cout<<"Enter   "<< n <<"  Score\n";
    for (int i = 0; i< n; ++i)
    {
        cin>> scores[i];
    }
    long long sum = 0;
    for (int i = 0; i< n; ++i)
    {
        sum += scores[i];
    }
    cout<<"Average=   "<< (double)sum / n << "\n";

    delete [] scores;
    scores = nullptr;

    return 0;
}