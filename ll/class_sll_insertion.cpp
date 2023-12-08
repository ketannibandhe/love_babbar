#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class SLL//we have created class to declare required functions.
{
    public:
    Node *temp,*temp1,*head;
    void create();
    void display();
    void insertmiddle();
    void inserthead();
    void insertback();
    void reverse();
};

void SLL::create(){
    int ans;
    head=NULL;
    do{
        temp=new Node;
        cout<<"enter data\n";
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else{
            temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
        cout<<"Do you want to continue?(1/0)\n";
        cin>>ans;
    }while(ans==1);
}

void SLL::display(){
    for(temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

void SLL::inserthead(){
    temp=new Node;
    cout<<"\nEnter the data of new head";
    cin>>temp->data;
    temp->next=head;
    head=temp;
}
void SLL::insertback(){
    temp=new Node;
    cout<<"\nEnter the data of new back";
    cin>>temp->data;
    temp1=head;
    while(temp1->next!=NULL)
        temp1=temp1->next;
    temp1->next=temp;
    temp->next=NULL;
}

void SLL::insertmiddle(){
    int key;
    temp=new Node;
    cout<<"Enter the data of new node\n";
    cin>>temp->data;
    temp->next=NULL;
    temp1=head;
    cout<<"Enter the key\n";
    cin>>key;
    if(head->data==key){
        temp->next=head;
        head=temp;
    }
    else{
        while(temp1->data!=key){   
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;
    }
}

void SLL::reverse(){
    Node* prevnode=new Node;
    Node* currnode=new Node;
    Node* nextnode=new Node;
    prevnode=NULL;
    currnode=head;
    nextnode=head;
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
    cout<<"\nlinklist is reversed:\n";
}

int main(){
    SLL s;
    s.create();
    s.display();
    s.insertmiddle();
    s.display();
    s.reverse();
    s.display();
    return 0;}