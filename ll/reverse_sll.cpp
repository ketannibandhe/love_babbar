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

void insertathead(Node* &head){
    int d;
    cout<<"enter the element you want to insert as head\n";
    cin>>d;
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertattail(Node* &tail){
    int d;
    cout<<"enter the element you want to insert as tail\n";
    cin>>d;
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertatmiddle(Node* &tail,Node* &head){
    int element,index;
    cout<<"enter element you want to insert\n";
    cin>>element;
    cout<<"enter the index\n";
    cin>>index;
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
        
        Node* ptr=new Node(element);
        tail->next=ptr;
        tail=ptr;
        return;
    }
    Node* node1=new Node(element);
    node1->next=temp->next;
    temp->next=node1;
}

Node* revlist(Node* &node,Node* &head){
    if(node==NULL)
        return NULL;
    if(node->next==NULL){
        head=node;
        return node;
    }
    Node* nextnode=revlist(node->next,head);
    nextnode->next=node;
    node->next=NULL;
    return node;     
}

void rev(Node* &head,Node* &curr,Node* &prev){
    //base case
    if(curr==NULL){
        head=prev;
        cout<<prev->data<<" ";
        return;
    }
    Node* nextnode=curr->next;
    rev(head,nextnode,curr);
    curr->next=prev;
    cout<<prev->data<<" ";
}

void revlist(Node*head){
    Node* node=head;
    Node* curr=head;
    Node*prev= NULL;
    rev(head,curr,prev);
    cout<<head->data<<" ";
}

int main(){
    int n;
    cout<<"Enter the head value:\n";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    Node* node=head;
    
    create(tail);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    insertathead(head);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    insertattail(tail);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    insertatmiddle(tail,head);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    
    revlist(node,head);
    // revlist(head);
    printlist(head);
    return 0;}