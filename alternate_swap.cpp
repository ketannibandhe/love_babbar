#include<iostream>
using namespace std;

void swaparray(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
}
int main(){
    int arr[500],i,j,size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    swaparray(arr,size);
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;}