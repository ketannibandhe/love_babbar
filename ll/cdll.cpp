#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void create(Node* &head,Node* &tail){
    int n,ans;

    do{
        cout<<"enter the data\n";
        cin>>n;
        Node* temp=new Node(n);
        if(head==NULL){
            head=temp;
            head->next=head;
            head->prev=head;
            tail=temp;

        }
        else{
            
            Node*  temp1=head;
            while(temp1->next!=head){
                temp1=temp1->next;
            }

            temp->next=temp1->next;
            tail->next=temp1;
            temp1->prev=tail;
            head->prev=temp1;
            tail=temp;
        }
        cout<<head->data<<endl;
        cout<<tail->data<<endl;
        cout<<"DO you want to continue:\n";
        cin>>ans;
    }while(ans==1);

}

void printlist(Node* &head){
    Node* temp2=head;
    do{
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }while (temp2->next!=head);
    cout<<endl;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    create(head,tail);
    printlist(head);

    
    return 0;}