#include<iostream>
using namespace std;

void print_array(int arr[],int s,int e){
    if(s==e){
        cout<<arr[s];
    }
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
}

bool binary_search(int arr[],int s,int e,int target){
    print_array(arr,s,e);
    //false condition
    if(s>e){
        return false;
    }

    //defination of mid
    int mid=s+(e-s)/2;
    cout<<endl<<"mid: "<<arr[mid]<<endl;

    //number found
    if(arr[mid]==target){
        return true;
    }

    //shift left
    else if(arr[mid]>target){
        binary_search(arr,s,mid-1,target);
    }

    //shift right
    else{
        binary_search(arr,mid+1,e,target);
    }
}

int main(){
    int arr[6]={2,7,11,23,29,31},target;
    cout<<"Enter element you want to search:\n";
    cin>>target;
    bool ans=binary_search(arr,0,6,target);
    if(ans){
        cout<<"number found";
    }
    else
        cout<<"number not found";
    return 0;}