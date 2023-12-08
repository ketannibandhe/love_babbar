#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class SLL{
    public:
    Node *temp,*temp1,*head;
    void create();
    void display();
    void deletemiddle();
    void deletehead();
    void deleteback();
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

void SLL::deletehead(){
    temp=new Node;
    temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void SLL::deleteback(){
    temp=new Node;
    temp=NULL;
    temp1=head;
    while(temp1->next!=NULL){
        temp=temp1;
        temp1=temp1->next;
    }

    temp->next=temp1->next;
    temp1->next=NULL;
    delete temp1;
}

void SLL::deletemiddle(){
    int key;
    temp=new Node;
    temp=NULL;
    temp1=head;
    cout<<"Enter the element to delete\n";
    cin>>key;
    while(temp1->data!=key){
        temp=temp1;
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=NULL;
    delete temp1;
}

int main(){
    SLL s;
    s.create();
    s.display();
    s.deletehead();
    s.deletemiddle();
    s.display();
    return 0;}