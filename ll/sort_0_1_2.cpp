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
        Node* temp1=new Node(num);
        tail->next=temp1;
        temp1->next=NULL;
        tail=temp1;
        cout<<"Do you want to continue?(1/0)";
        cin>>ans;
    }while(ans==1);
}

void printList(Node* &head){
    Node* temp=head;
    for(temp=head;temp!=NULL;temp=temp->next){
        cout<<temp->data<<" ";
    }
    cout<<endl;
}

//*************************************************************
Node* sortlist(Node* &head){
    int zero=0;
    int one=0;
    int two=0;

    Node *temp = head;
    while(temp !=NULL){
        if(temp->data==0)
        zero++;
        else if(temp->data==1)
        one++;
        else if(temp->data==2)
        two++;
        temp=temp->next;

    }
    temp =head;
    while(temp!=NULL){
        if(zero!=0){
            temp->data=0;
            zero--;
        }
        else if(one!=0){
            temp->data=1;
            one--; 
        }
        else if(two!=0){
            temp->data=2;
            two--;
        }
        temp=temp->next;
    }
    return head;
}
//***************************************************************
//if the condition for the question is data replacement is not allowed
Node* sortlist1(Node* &head){
    Node* zeros = new Node(101);
    Node* zerotail=zeros;
    Node* ones = new Node(101);
    Node* onetail=ones;
    Node* twos =new Node(101);
    Node* twotail=twos;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zerotail->next=temp;
            zerotail=temp;
        }
        else if(temp->data==1){
            onetail->next=temp;
            onetail=temp;
        }
        else if(temp->data==2){
            twotail->next=temp;
            twotail=temp;
        }
        temp=temp->next;
    }

    if(zeros->next!=NULL){
        if(ones->next!=NULL){
            zerotail->next=ones->next;
            if(twos->next!=NULL){
                onetail->next=twos->next;
                twotail->next=NULL;
                Node* z=zeros->next;
                delete zeros;
                delete ones;
                delete twos;
                return z;
            }
            else{
                onetail->next=NULL;
                Node* z=zeros->next;
                delete zeros;
                delete ones;
                delete twos;
                return z;
            }
        }
        else if(twos->next!=NULL){
            zerotail->next=twos->next;
            twotail->next=NULL;
            Node* z=zeros->next;
            delete zeros;
            delete ones;
            delete twos;
            return z;
        }
        else{
            zerotail->next=NULL;
            Node* z=zeros->next;
            delete zeros;
            delete ones;
            delete twos;

            return z;
        }
            
        }
    else if(ones->next!=NULL){
        if(twos->next!=NULL){
            onetail->next=twos->next;
            twotail->next=NULL;
            Node* o=ones->next;
            delete zeros;
            delete ones;
            delete twos;
            return o;
        }
        else{
            onetail->next=NULL;
            Node* o=ones->next;
            delete zeros;
            delete ones;
            delete twos;
            return o;
        }
    }
    else{
        if(twos->next!=NULL){
            twotail->next=NULL;
            Node* t=twos->next;
            delete zeros;
            delete ones;
            delete twos;
            return t;
        }
    }
    delete zeros;
    delete ones;
    delete twos;
    return NULL;
        
}


int main(){
    int n;
    cout<<"enter the value of head node:\n";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    create(tail);
    printList(head);
    Node* nn=sortlist1(head);;

    printList(nn);
    return 0;}