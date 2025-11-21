#include<iostream>
using namespace std;


struct Node {
    int data;
    Node*next;

    
};
//insert new node at beginining
void insertAtHead(Node*& head, int val){

    Node* n=new Node{val, head};
    head=n;
}
//delete first node
void deleteHead(Node*& head){

    if(!head) return;

    Node* temp=head;
    head=head->next;
    delete temp;
}
//print list
void printList(Node* head){

    cout<<"List: ";
    for(Node* cur=head; cur; cur=cur->next)
       cout<<cur->data<<" ";
       cout<<endl;
}
int main(){

Node* head=NULL;
//list:30
insertAtHead(head, 30);
//list:20->30
insertAtHead(head, 20);
//list:10->20->30
insertAtHead(head, 10);
printList(head);

//remove 10
deleteHead(head);
printList(head);

return 0;

}