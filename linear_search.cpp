#include<iostream>
using namespace std;
int main(){
    int arr[500],i,j,size,num;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to search\n";
    cin>>num;
    for(i=0;i<size;i++){
        if(arr[i]==num){
            break;
        }
    }
    cout<<num<<" found at position "<<i<<endl;
    return 0;}