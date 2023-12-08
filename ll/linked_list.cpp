#include<iostream>
using namespace std;

//create the Node class consisting data field and a node type pointer
class Node{
    public:
    int data;
    Node* next;//pointer of node type

    //reate a constructor to initialize the node created
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head,int d){
//here we are passing head node's address as a parameter
//we dont want to create a copy and to create changes in same linkedlist
//reference variable is used here
//create new node
    Node* temp=new Node(d);//temp is object of node class
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);//
    tail->next=temp;
    tail=temp;
}


//print and traverse the linkedlist
void printlist(Node* &head){
    Node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    int n,ans;
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    cout<<head->data<<endl;//this will print the c=value at head
    cout<<head<<endl;//this will print head's address
    printlist(node1);

    do{
        cout<<"enter the number:\n";
        cin>>n;
        InsertAtHead(head,n);
        cout<<"Do you want to continue?(1/0)\n";
        cin>>ans;
    }while(ans==1);
    printlist(head);
    cout<<endl;

    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtTail(tail,18);

    printlist(head);
    return 0;}