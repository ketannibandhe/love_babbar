#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};

class SLL//we have created class to declare required functions.
{
    public:
    Node *temp,*temp1,*head;
    void create();
    void display();
    void deletemiddle();
    void deletehead();
    void deleteback();
};

void SLL:: create()
{
    int ans;
    head =NULL;
    do{
        temp=new Node;
        cout<<"Enter data:\n";
        cin>>temp->data;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            //null ala mhanun loop thamble
            temp1->next=temp;
            temp->prev=temp1;
            temp->prev=NULL;
        }
        cout<<"Do you want to continue?(1/0):\n";
        cin>>ans;
    }while(ans==1);
}

void SLL::display(){
    
    for(temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

void SLL:: deletehead(){
    Node* temp=new Node;
    temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    delete temp;
}

void SLL:: deleteback(){
    Node* pre=new Node;
    Node* curr=new Node;
    pre=NULL;
    curr=head;
    while(curr->next!=NULL){
        pre=curr;
        curr=curr->next;
    }
    pre->next=curr->next;
    curr->prev=NULL;
    delete curr;
}

void SLL::deletemiddle(){
    int element;
    Node* pre=new Node;
    Node* curr=new Node;
    pre=NULL;
    curr=head;
    cout<<"Enter element to delete:\n";
    cin>>element;
    while(curr->data!=element){
        pre=curr;
        curr=curr->next;
    }
    pre->next=curr->next;
    curr->next->prev=pre;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}


int main(){
    SLL s;
    s.create();
    s.display();

    s.deletehead();
    s.display();
    
    s.deleteback();
    s.display();

    s.deletemiddle();
    s.display();


    return 0;}