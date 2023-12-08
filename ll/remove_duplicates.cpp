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

Node* r(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        Node* curr=temp;
        while(curr->next!=NULL){
            if(curr->next->data==temp->data){
                Node* next_next=curr->next->next;
                Node* delnode=curr->next;
                delete delnode;
                curr->next=next_next;
            }
            else{
                curr=curr->next;
            }
        }
    temp=temp->next;
}
return head;
}

Node* remove_duplicates(Node* &head){
    Node* temp=head;
    // if(head==NULL)
    // return NULL;
    // if(head->next==NULL)
    // return head;
    // while(temp!=NULL){
    //     if((temp->next!=NULL) && temp->data==temp->next->data){
    //         Node* next_next=temp->next->next;
    //         Node* delnode=temp->next;
    //         delete delnode;
    //         temp->next=next_next;
    //     }
    //     else{
    //         temp=temp->next;
    //     }
    // }
    return head;
}


Node* r1(Node* &head){
    Node* temp=head;
    map<Node*,bool>visited;
    Node* curr=NULL;
    curr->next=temp;
    while(temp->next!=NULL||temp!=NULL){
        if(visited[temp]==true){
            Node* next_next=temp->next;
            delete temp;
            curr->next=next_next;
        }
        visited[temp]=true;
        curr=temp;
        temp=temp->next;
    }
    return head;
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
    // Node* newhead=remove_duplicates(head);
    Node* nn=r1(head);
    // printlist(newhead);
    printlist(nn);
    
    return 0;}