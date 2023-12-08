#include<iostream>
using namespace std;
bool check_even(int num){
    if(num & 1){
        return 0;
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    check_even(num);
    if(check_even(num)){
        cout<<"even number"<<endl;
    }
    else
        cout<<"odd number"<<endl;
    
    return 0;}
