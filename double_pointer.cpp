#include<iostream>
using namespace std;

void update(int **p2){
    // p2+=1;
    *p2+=1;
    // **p2+=1;
}

int main(){
    int i=2;
    int* ptr=&i;
    int** ptr2=&ptr;

    cout<<endl<<i<<endl;
    cout<<"&i"<<&i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    cout<<endl;
    
    update(ptr2);
    cout<<endl<<i<<endl;
    cout<<"&i"<<&i<<endl;
    cout<<ptr<<endl;
    cout<<ptr2<<endl;
    cout<<endl;
    return 0;}