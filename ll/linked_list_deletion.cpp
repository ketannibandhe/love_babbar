#include<iostream>
using namespace std;
class  Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
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
        head=head->next;

        //making the memory of start node free
        temp->next=NULL;
        delete temp;
    }

    else{
        //deleting node at any other place
        Node* curr=head;
        Node* prev=NULL;

        int count=1;
        while(count< position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        tail=prev;
        curr->next=NULL;
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

    return 0;}