#include<iostream>
using namespace std;
class  Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        //memory free
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
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

void DeleteNode(Node* &head,Node* &tail){
    int position;
    cout<<"Enter index you want to delete:\n";
    cin>>position;
    //deleting first(head) node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;//****
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }

    else{
        //deleting node at any other place
        Node* curr=head;
        Node* pre=NULL;

        int count=1;
        while(count< position){
            pre=curr;
            curr=curr->next;
            count++;
        }

        if(curr->next==NULL){
            pre->next=curr->next;
            curr->prev=NULL;
            tail=pre;
            delete curr;
            return;
        }

        pre->next=curr->next;
        curr->next->prev=pre;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }

}

int main(){
    int num;
    cout<<"Enter the value at head node:\n";
    cin>>num;
    Node* head=new Node(num);
    Node* tail=head;
    create(tail);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    DeleteNode(head,tail);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    DeleteNode(head,tail);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    DeleteNode(head,tail);
    printlist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;}