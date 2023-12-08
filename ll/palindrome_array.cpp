#include<iostream>
using namespace std;
int main(){
    int arr[500],i,j,n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0,j=n-1;i<=j;i++,j--){
        if(arr[i]!=arr[j])
        cout<<"not pallindrome array"<<endl;
        break;
    }
    cout<<"it is a palindrome array"<<endl;
    return 0;}