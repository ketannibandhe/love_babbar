#include<iostream>
using namespace std;
int main(){
    int i=5;
    int& j=i;
    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;
    i++;
    cout<<"i: "<<i<<endl;
    j++;
    cout<<"j: "<<j<<endl;
    
    
    return 0;}