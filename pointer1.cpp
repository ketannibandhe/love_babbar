#include<iostream>
using namespace std;

void print_num(int *p){
    cout<<"Inside print_num function"<<endl;
    cout<<*p<<endl; 
}

void update(int *p){
    cout<<"inside update function"<<endl;
    *p=*p+4;
}

int main(){
    int n=2;
    int *ptr=&n;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    cout<<*ptr<<endl;
    *ptr+=1;
    cout<<*ptr<<endl;
    cout<<n<<endl;
    print_num(ptr);
    cout<<"before *ptr/n: "<<*ptr<<endl;
    update(ptr);
    cout<<"after *ptr/n: "<<*ptr<<endl;
    return 0;}