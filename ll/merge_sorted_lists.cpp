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

Node* solve(Node* &first,Node* &second){
    Node* curr1=first;
    Node* next1=curr1->next;
    Node* curr2=second;
    Node* next2=curr2->next;


    if(first->next==NULL){
        first->next=second;
        return first;
    }

    while(next1!=NULL && curr2!=NULL){

        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            next2=curr2->next;
            curr2->next=curr1->next;
            curr1->next=curr2;
            curr1=curr2;
            curr2=next2;
            next1=next1->next;


            // curr1->next=curr2;
            // next2=curr2->next;
            // curr2->next=next1;
            // curr1=curr2;
            // curr2=next2;

        }
        else{
            //updata the pointers forward
            //go one step ahead in the first list
            curr1=curr1->next;
            next1=next1->next;

            if(next1==NULL){
                //it means list1 is ended
                curr1->next=curr2;
                return first;
            }
        }
    }
    return first;
}

Node* sort_two_lists(Node* &first,Node* &second){
    if(first==NULL)
    return second;
    
    if(second==NULL)
    return first;

    if(first->data > second->data){
        solve(second,first);
    }
    else
        solve(first,second);

}
int main(){
    int h1,h2;
    cout<<"Link list 1:\n";
    cout<<"enter head node data:\n";
    cin>>h1;
    Node* head1=new Node(h1);
    Node* tail1=head1;
    create(tail1);
    printlist(head1);
    cout<<"Linked list 2:\n";
    cout<<"Enter head node data:\n";
    cin>>h2;
    Node* head2 =new Node(h2);
    Node* tail2=head2;
    create(tail2);
    printlist(head2);

    cout<<"Link list 1:\n";
    printlist(head1);
    cout<<"Linked list 2:\n";
    printlist(head2);
    Node* sorted=sort_two_lists(head1,head2);
    printlist(sorted);
    
    return 0;}