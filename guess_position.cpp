#include<iostream>
using namespace std;

int guess_position(int arr[],int size,int num){
    int l=0;
    int r=size-1;
    int index=size-1;
    while(l<=r){
        int mid=l+(r-l)/2;

        if(arr[mid]==num){
            return mid;
            break;
        }
        else if(arr[mid]<num){
            l=mid+1;
        }
        else if(arr[mid]>num){
            index=mid;
            r=mid-1;
        }
    }
    return index;
}
int main(){
    int arr[100],size,num;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter number for guessing the position\n";
    cin>>num;
    cout<<guess_position(arr,size,num);

    return 0;}