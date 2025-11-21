#include<iostream>
using namespace std;


struct Node {
    int data;
    Node*next;
    

    
};
int main(){
    //10 people elimination every 3rd
    int N=10,M=3;

   //build circular list
    Node* head=new Node{1,NULL};
    
    Node* curr=head;
    for(int i=2; i<=N; i++){

        curr->next=new Node{i,NULL};
        curr=curr->next;
    }
    //make circular
    curr->next=head;

    Node*prev=curr;
    curr=head;

    //elimination
    while(curr->next!=curr){
        for(int i=1; i<M; i++){
            prev=curr;
            curr=curr->next;
        }
        cout<<"Removing : "<<curr->data<<endl;

        prev->next=curr->next;
        delete curr;
        curr= prev->next;
    }
    cout<<"Leader is: "<<curr->next<<endl;
    return 0;
}