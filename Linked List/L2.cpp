#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        data=0;
        next=NULL;
    }
     Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &Head,Node* &Tail,int data){
    if(Head==NULL){
        Node * newnode=new Node(data);
        Head=newnode;
        Tail=newnode;
        return;
    }
    Node* newnode=new Node(data);
    newnode->next=Head;
    Head=newnode;
}

void insertAtTail(Node* &Head,Node* &Tail,int data){
    if(Head==NULL){
        Node * newnode=new Node(data);
        Head=newnode;
        Tail=newnode;
        return;
    }
    Node* newnode=new Node(data);
    Tail->next=newnode;
    Tail=newnode;    
}
int Findlen(Node* &Head){
    Node* temp=Head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtMiddle(Node* &Head,Node* &Tail,int data,int position){
    if(Head==NULL){
        Node * newnode=new Node(data);
        Head=newnode;
        Tail=newnode;
        return;
    }
    if(position==0){
        insertAtHead(Head,Tail,data);
        return;
    }

    int len=Findlen(Head);

    if(len<=position){
        insertAtTail(Head,Tail,data);
        return;
    }
    int i=1;
    Node* prev=Head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;


    Node * newnode=new Node(data);
    newnode->next=curr;
    prev->next=newnode;
}

void PrintLL(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* Head=NULL;
    Node* Tail=NULL;

    insertAtHead(Head,Tail,20);
    insertAtHead(Head,Tail,30);
    insertAtHead(Head,Tail,40);
    insertAtHead(Head,Tail,50);
    insertAtTail(Head,Tail,10);

    insertAtMiddle(Head,Tail,38,5);
    PrintLL(Head);

 
 
 
 return 0;
}