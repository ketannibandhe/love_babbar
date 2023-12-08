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


bool check_circular(Node* &head,Node* tail){
    
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return false;
    Node* temp=head;//or it can be Node* temp=head->next;
    while(temp->next!=NULL&&temp->next!=head){
        temp=temp->next;
    }
    if(temp->next==NULL)
        return false;
    else
        return true;

}


Node* floyed_cycle_detection(Node* &head){
    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        /*
        yacha artha loop jar banqat asel tar process slow ==fast hoi 
        paryant continuoues chalu rahnar
        */
        slow=slow->next;
        if(slow==fast){
            cout<<"loop ended on "<<slow->data<<endl;
            return slow;
        }
    }

    cout<<"sorry"<<endl;
    return NULL;
}

Node* getstartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floyed_cycle_detection(head);
    if(intersection==NULL){
        return NULL;
    }
    Node* slow=head;
    while(slow!=intersection){
        slow =slow->next;
        intersection=intersection->next;
    }
    return slow;
}


void removeloop(Node* head){
    if(head==NULL){
        return;
    }
    Node* start_of_loop=getstartingNode(head);
    if(start_of_loop==NULL){
        start_of_loop=head;
        return ;
    }
    Node *temp=start_of_loop;
    while(temp->next!=start_of_loop){
        temp=temp->next;
    }
    temp->next= NULL;
}


int main(){
    int n;
    cout<<"Enter the head value:\n";
    cin>>n;
    Node* head=new Node(n);
    Node* tail=head;
    Node* node=head;
    // create(tail);
    // printlist(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // insertathead(head);
    // printlist(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // insertattail(tail);
    // printlist(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // insertatmiddle(tail,head);
    // printlist(head);
    // cout<<head->data<<endl;
    // cout<<tail->data<<endl;

    // if(check_circular(head,tail)){
    //     cout<<"it is circular link list"<<endl;
    // }
    // else
    //     cout<<"it is not";

    insertattail(tail);
    insertattail(tail);
    insertattail(tail);
    insertattail(tail);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    insertattail(tail);
    tail->next=head->next;
    // insertattail(tail);
    // insertattail(tail);
    // insertattail(tail);
    // insertattail(tail);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    // printlist(head);
    if(floyed_cycle_detection(head) !=NULL){
        cout<<"loop is present"<<endl;
    }
    else
        cout<<"loop is not present"<<endl;

    Node* loop=getstartingNode(head);
    cout<<"Loop started at "<<loop->data<<endl;

    removeloop(head);

    printlist(head);
    return 0;}