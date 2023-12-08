#include<iostream>
using namespace std;
void get_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int leftmost(int arr[],int size,int num){
    int l=0,r=size-1,mid,ans=-1;
    mid=l+((r-l)/2);
    while(l<=r){
        
        //formula is written like this so as to reject the negative terms
        if(arr[mid]==num){
            ans=mid;
            r=mid-1;
        }
        else if(num>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        mid=l+(r-l)/2;
    }
    return ans;
}

int rightmost(int arr[],int size,int num){
    int l=0,r=size-1,mid,ans=-1;
    mid=l+((r-l)/2);
    while(l<=r){

        //formula is written like this so as to reject the negative terms
        if(arr[mid]==num){
            ans=mid;
            l=mid+1;
        }
        else if(num>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
        mid=l+(r-l)/2;
    }
    return ans;
}

int main(){
    int arr[500],i,j,size,num,number;
    cin>>size;
    get_array(arr,size);
    cin>>num;
    cout<<"Total number of occurences of "<<num<<" : "<<rightmost(arr,size,num)-leftmost(arr,size,num)+1<<endl;
    return 0;
    }

//check what is wrong in this test case
//5
// 1 2 3 2 2 
// 2
// Total number of occurences of 2 : 1