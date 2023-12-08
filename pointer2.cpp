#include<iostream>
using namespace std;
void print_num(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    p+=1;
    cout<<"address inside update function: "<<p<<endl;
}
int main(){
    int n=2;
    int *ptr=&n;
    print_num(ptr);
    cout<<"befor update ptr: "<<ptr<<endl;
    update(ptr);
    cout<<"after update ptr: "<<ptr<<endl;
    return 0;}