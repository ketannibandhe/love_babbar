#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void CreateList(Node* &tail){
    int n,ans;
    do{
        cout<<"enter the number:\n";
        cin>>n;
        // InsertAtHead(head,n);
        Node *temp= new Node(n);
        tail->next=temp;
        tail=temp;
        cout<<"Do you want to continue?(1/0)\n";
        cin>>ans;
    }while(ans==1);
}

void InsertAtHead(Node* &head,int data){
    Node *temp= new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int n){
    Node *temp= new Node(n);
    tail->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* &tail,Node* &head){
    int element,index;
    cout<<"Enter the element you want to insert"<<endl;
    cin>>element;
    cout<<"Enter the index\n";
    cin>>index;

    //inserting at start
    if(index==1){
        Node* temp=new Node(element);
        temp->next=head;
        head=temp;
        return;
    }

    Node* temp=head;
    int count=1;
    while(count<index-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        Node* newnode=new Node(element);
        tail->next=newnode;
        tail=newnode;
        return;
    }
    Node* target=new Node(element);
    target->next=temp->next;
    temp->next=target;
     
}

void PrintList(Node* &head){
    Node* temp = head;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    for(temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}


Node* floyed_cycle_detection(Node* &head){
    if(head==NULL){
        return NULL;
    }
    
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"loop ended on "<<slow->data<<endl;
            return slow;
        }
    }

    cout<<"sorry"<<endl;
    return NULL;
}

int main(){
    int n,element,index;
    cout<<"enter the starting head node:\n";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    CreateList(tail);
    PrintList(head);
    InsertAtHead(head,n);
    
    cout<<head->data<<endl;

    // // cout<<head->data<<endl;
    // // cout<<tail->data<<endl<<endl;

    // // InsertAtHead(head,1000);
    // // PrintList(head);

    // // InsertAtTail(tail,2000); 
    // // PrintList(head);
    // cout<<tail->data<<endl;

    // // InsertAtTail(tail,2500);
    // // PrintList(head);
    // // cout<<tail->data<<endl;

    // InsertAtPosition(tail,head);
    // PrintList(head);
    // cout<<tail->data<<endl;

    // // cout<<"inserttail function"<<endl;
    // // InsertAtTail(tail,888);
    // // PrintList(head);
    // // cout<<tail->data<<endl;

    // InsertAtPosition(tail,head);
    // PrintList(head);
    // cout<<tail->data<<endl;
    // // InsertAtTail(tail,25000);
    // // PrintList(head);
    // // cout<<tail->data<<endl;

    if(floyed_cycle_detection(head) !=NULL){
        cout<<"loop is present"<<endl;
    }
    else
        cout<<"loop is not present"<<endl;
    return 0;}