#include<iostream>
using namespace std;


int main(){
    int arr[500],i,ans=0,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }  
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    for(int i=0;i<size-1;i++){
        ans^=arr[i];
    }   
    cout<<ans;   
    return 0;}