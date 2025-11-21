#include<iostream>
using namespace std;


struct Node {
    int data; //value store
    Node*next;  //pointer to next node

    
};


int main(){
    //create three nodes manually
    Node*head=new Node{10,NULL};
    Node*second=new Node{20,NULL};
    Node*third=new Node{30,NULL};

 
    //link them
    head->next=second;
    second->next=third;


    //traverse list from head
    cout<<"Linked List: ";
    Node* temp =head;
    while(temp!=NULL){

        //print data
        cout<<temp->data<<"  ";
        //move to next node
        temp =temp->next;
    }
    

        return 0;

}