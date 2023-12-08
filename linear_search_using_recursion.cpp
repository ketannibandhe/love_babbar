#include<iostream>
using namespace std;

bool search(int arr[],int size,int target){
    if(size==0){
        return 0;
    }
    if(arr[0]==target){
        return true;
    }
    else{
        bool ans=search(arr+1,size-1,target);
        return ans;
    }
}

int main(){
    int arr[5]={2,5,1,9,12},target;
    cout<<"Enter number to check:\n";
    cin>>target;
    search(arr,5,target);
    if(search(arr,5,target)){
        cout<<"Number found"<<endl;
    }
    else{
        cout<<"Number not found"<<endl;
    }
    
    return 0;}