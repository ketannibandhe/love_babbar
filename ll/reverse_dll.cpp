#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void Create(Node* &tail,Node* &head){
    int ans,num;
    do{
        cout<<"Enter data\n";
        cin>>num;
        Node* temp=new Node(num);
        if(tail==NULL){
            tail=temp;
            head=temp;
        }
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        cout<<"Do you want to contiue?(1/0)\n";
        cin>>ans;
    }while(ans==1);
}

void PrintList(Node *&head){
    Node* temp=head;
    for(temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

int getlength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void InsertAtHead(Node* &head,Node* &tail){
    int n;
    cout<<"Enter the number to add:\n";
    cin>>n;
    
    //empty list
    if(head==NULL){
        Node* temp=new Node(n);
        head=temp;
        tail=temp;
    }

    else{
        Node* temp=new Node(n);
        temp->next=head;
        head->prev=temp;
        head=temp;
    } 
}

void InsertAtTail(Node* &tail,Node* &head){
    int n1;
    cout<<"Enter the number to add at tail:\n";
    cin>>n1;

    if(tail==NULL){
        Node* temp =new Node(n1);
        tail=temp;
        head=temp;
    }
    Node* temp=new Node(n1);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void InsertAtPosition(Node* &head,Node* &tail){
    int index,element;
    cout<<"Enter the element:\n";
    cin>>element;
    cout<<"Enter the index to insert:\n";
    cin>>index;
    

    //empty list
    if(head==NULL){
        Node* temp=new Node(element);
        head=temp;
        tail=temp;
    }

    //inserting at start
    if(index==1){
        Node* temp=new Node(element);
        temp->next=head;
        head->prev=temp;
        head=temp;
        return;
    }
    int count=1;
    Node* temp=head;
    while(count<index-1){
        temp=temp->next;
        count++;
    }

    //inserting at the end
    if(temp->next==NULL){
        Node* temp2=new Node(element);
        tail->next=temp2;
        temp2->prev=tail;
        tail=temp2;
        return;
    }
    Node* node1=new Node(element);
    node1->next=temp->next;
    node1->prev=temp;
    temp->next=node1;
    temp->next->prev=node1;
}

Node* revlist(Node* head){
    Node* node=head;
    if(!node)
        return NULL;
    Node* temp=node->next;
    node->next=node->prev;
    node->prev=temp;

    if(!node->prev){
        return node;
    }
    return revlist(node->prev);
}


int main(){
    int n;
    cout<<"Enter the head element";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    Node* node=head;
    Create(tail,head);
    PrintList(head);

    InsertAtHead(head,tail);
    PrintList(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    InsertAtTail(tail,head);
    PrintList(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    InsertAtPosition(head,tail);
    PrintList(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    head=revlist(head);
    PrintList(head);
    return 0;
}