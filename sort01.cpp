#include<iostream>
using namespace std;

void sortone(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1&& left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

}

int main(){
    int arr[500],i,j,size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }

    sortone(arr,size);
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;}