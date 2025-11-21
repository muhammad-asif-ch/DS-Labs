#include<iostream>
using namespace std;


struct DNode {
    int data;
    DNode*next;
    DNode*prev;

    
};
int main(){

   //create node
    DNode* head=new DNode{10,NULL,NULL};
    DNode* second=new DNode{20,NULL,NULL};

    head->next=second;

    DNode* third=new DNode{30,NULL,NULL};
    head->next=third;

    // forward traversal

    cout<<"  Forward:";

    for(DNode* cur=head; cur; cur=cur->next)

    cout<<cur->data<<"  ";

    cout<<endl;

    //backward travesal
    cout<<"Backward:  ";
    for(DNode* cur=third; cur; cur=cur->prev)

    cout<<cur->data<<"  ";

    cout<<endl;
    return 0;




}

