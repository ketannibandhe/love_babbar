#include<iostream>
using namespace std;
void get_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void display_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }   
}

int search_binary(int arr[],int size,int num){
    int l=0,r=size-1,mid;
    while(l<=r){
        mid=l+((r-l)/2);
        //formula is written like this so as to reject the negative terms
        if(arr[mid]==num){
            return mid;
        }
        else if(num>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        mid=l+(r-l)/2;
    }
    return -1;
}

int main(){
    int arr[500],i,j,size,num,number;
    cin>>size;
    get_array(arr,size);
    cin>>num;
    number=search_binary(arr,size,num);
    cout<<num<<" found at position "<<number;
    return 0;
    }