#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaining = is_sorted(arr+1,n-1);
        return true;
    }
    
}


int main(){
    
    int arr[5]={11,15,19,23,30};
    int size =5;
    is_sorted(arr,size);
    return 0;}