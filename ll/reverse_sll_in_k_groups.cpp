#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void create(Node* &tail){
    int num,ans;
    do{
        cout<<"Enter data:\n";
        cin>>num;
        Node* temp=new Node(num);
        tail->next=temp;
        temp->next=NULL;
        tail=temp;
        cout<<"do you want to continue?(1/0)\n";
        cin>>ans;
    }while(ans==1);

}
void printlist(Node* &head){
    Node* temp=head;
    for(temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

Node* kreverse(Node* &head,int k){
    //base case
    if(head==NULL)
        return NULL;

    //step1 reverse first k nodes
    Node* nextnode=NULL;
    Node* curr=head;
    Node* prevnode =NULL;
    int count=0;
    
    while(curr!=NULL && count<k){
        nextnode=curr->next;
        curr->next=prevnode;
        prevnode=curr;
        curr=nextnode;
        count++;
    }

    //step 2 Recurssion
    if(nextnode!=NULL){
        head->next= kreverse(nextnode,k);
    }
    return prevnode;
}

int main(){
    int n;
    cout<<"Enter the head value:\n";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    create(tail);
    printlist(head);
    Node* newhead=kreverse(head,3);
    printlist(newhead);
    return 0;}