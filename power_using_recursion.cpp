#include<iostream>
using namespace std;

int find_power(int n,int p){
    if(p==0){
        return 1;
    }
    int ans=find_power(n,p/2);
    if(p%2==0)
    return ans*ans;
    else
    return n*ans*ans;

}

int main(){
    int num,p;
    cout<<"Enter the number and its power: "<<endl;
    cin>>num>>p;
    cout<<find_power(num,p)<<endl;
    return 0;}