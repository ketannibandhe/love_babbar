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


//*********************************************************************
//general solution
int getlen(Node* head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;  
}
int getmiddle(Node* &head){
    int len=getlen(head);
    int mid=len/2+1;
    int count=1;
    Node*temp=head;
    while(count!=mid){
        temp=temp->next;
        count++;
    }
    return temp->data;
}
//*********************************************************************

//optimised solution obtained by only half traversal of linklist
int getmiddle1(Node* &head){
    if(head==NULL||head->next==NULL)
        return head->data;
    Node* slow=head;
    Node* fast=head->next;


    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

//belo is the alternate loop try that also

    // while(fast!=NULL){
    //     //remember the condition for fast
    //     fast=fast->next;
    //     if(fast!=NULL){
    //         fast=fast->next;
    //     }
    //     slow=slow->next;
    // }
    return slow->data;
    }

//*********************************************************************


int main(){
    int n;
    cout<<"Enter the head value:\n";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    
    create(tail);
    printlist(head);
    cout<<"the mid element of link list: "<<getmiddle1(head);
    // printlist(head);
    return 0;
}