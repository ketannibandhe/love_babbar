#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

class SLL{
    public:
    Node *temp,*temp1,*head;
    void create();
    void display();
    void insertmiddle();
    void inserthead();
    void insertback();
};

void SLL::create(){
    int ans;
    head=NULL;
    do{
        temp=new Node;
        cout<<"enter data\n";
        cin>>temp->data;
        temp->prev=NULL;
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else{
            temp1=head;
            while(temp1->next!=NULL){
                temp1=temp1->next;
            }
            temp1->next=temp;
            temp->prev=temp1;
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
    cout<<"Enter the data of new head\n";
    cin>>temp->data;
    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
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
    temp->prev=temp1;
    temp->next=NULL;
}

void SLL::insertmiddle(){
    int key;
    temp=new Node;
    cout<<"Enter the data of new node\n";
    cin>>temp->data;
    temp->next=NULL;
    temp->prev=NULL;
    temp1=head;
    cout<<"Enter the key";
    cin>>key;
    if(head->data==key){
        temp->next=head;
        head->prev=temp;
        temp->prev=NULL;
        head=temp;
    }
    else{
        while(temp1->data!=key){   
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next->prev=temp;
        temp->prev=temp1;
        temp1->next=temp;
    }
}

int main(){
    SLL s;
    s.create();
    s.display();
    s.inserthead();
    s.display();
    s.insertback();
    s.display();
    s.insertmiddle();
    s.display();
    s.inserthead();
    s.display();
    s.insertback();
    s.display();
    // s.insertmiddle();
    // s.display();
    return 0;}