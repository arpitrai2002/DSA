#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(){
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void PrintLL(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
}
 
int main(){

    Node* first=new Node(5);
    Node* second=new Node(6);
    Node* third=new Node(7);
    Node* fourth=new Node(1);
    Node* fifth=new Node(10);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    PrintLL(first);





 
 
 
 
 
 return 0;
}