#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};


void create(Node* &tail){
    int n,element,ans;
    do{
        cout<<"Enter the element:\n";
        cin>>n;
        Node* temp=new Node(n);
        temp->next=tail->next;
        tail->next=temp;
        tail=temp;
        cout<<"Do you want to continue?(1/0)\n";
        cin>>ans;
    }while(ans==1);
}


void insertnode(Node* &head,Node* &tail){
    int d,element;
    cout<<"Enter element you want to insert:\n";
    cin>>d;
    cout<<"Enter the Target element:\n";
    cin>>element;
    if(head==NULL){
        Node* newnode=new Node(d);
        head=newnode;
        newnode->next=newnode;
    }

    else{
        Node* curr=head;
        while(curr->data!=element){
            curr=curr->next;
        }

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
    Node*temp2=head;
    while(temp2->next!=head){
        temp2=temp2->next;
    }
    tail=temp2;
}

void PrintList(Node* &tail){
     Node *temp=tail;
     
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

     }while(temp!=tail);
     cout<<endl;
}

void reverse(Node* &tail,Node* &head){
    Node* prevnode;
    Node* currnode=tail->next;
    Node* nextnode=currnode->next;
    if(tail==NULL){
        cout<<"The list is empty\n";
        return;
    }
    while(currnode!=tail){
        prevnode=currnode;
        currnode=nextnode;
        nextnode=currnode->next;
        currnode->next=prevnode;
    }
    nextnode->next=tail;
    head=currnode;
    tail=nextnode;

}
bool check_circular(Node* head,Node* tail){
    
    if(head==NULL)
        return true;
    if(head->next==NULL)
        return false;
    Node* temp=head->next;
    while(temp->next!=NULL&&temp->next!=head){
        temp=temp->next;
    }
    if(temp->next==NULL)
        return false;
    else
        return true;
}


// bool check_loop(Node* head){
//     if(head==NULL){
//         return false;
//     }
//     Node* temp= head;
//     map<Node*,bool>visited;
//     while(temp!=NULL){
//         if(visited[temp]==true){
//             cout<<"there is a loop in the list\n";
//             return 1;
//         }
//         visited[temp]=true;
//         temp=temp->next;
//     }
//     cout<<"No cycle detected."<<endl;
//     return false;
// }

Node* floyed_cycle_detection(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;
        slow=slow->next;
    }
    if(slow==fast){
        cout<<"loop ended on"<<slow->data<<endl;
        return slow;
    }
    else
    cout<<"sorry"<<endl;
    return NULL;
}

int main(){
    int n;
    cout<<"Enter the first Node value:\n";
    cin>>n;
    Node* tail=new Node(n);
    Node* head=tail;
    tail->next=tail;
    create(tail);
    PrintList(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    // insertnode(head,tail);
    // PrintList(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // insertnode(head,tail);
    // PrintList(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // insertnode(head,tail);
    // PrintList(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // reverse(tail,head);
    // PrintList(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;


    if(check_circular(head,tail)){
        cout<<"it is circular link list"<<endl;
    }
    else
        cout<<"it is not";

    // check_loop(head);

    if(floyed_cycle_detection(head)!=NULL){
        cout<<"loop is present"<<endl;
    }
    else
        cout<<"loop is not present"<<endl;
    return 0;
}