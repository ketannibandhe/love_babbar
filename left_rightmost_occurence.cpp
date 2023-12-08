#include<iostream>
using namespace std;
void get_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int leftmost(int arr[],int size,int num){
    int l=0,r=size-1,mid,ans1=-1;
    // mid=l+((r-l)/2);
    while(l<=r){
        mid=l+((r-l)/2);
        //formula is written like this so as to reject the negative terms
        if(arr[mid]==num){
            ans1=mid;
            r=mid-1;
        }
        else if(num>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }

    }
    return ans1;
}

int rightmost(int arr[],int size,int num){
    int l=0,r=size-1,mid,ans2=-1;
    
    while(l<=r){
        mid=l+((r-l)/2);
        //formula is written like this so as to reject the negative terms
        if(arr[mid]==num){
            ans2=mid;
            l=mid+1;
        }
        else if(num>arr[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans2;
}

int main(){
    int arr[500],i,j,size,num,number;
    cin>>size;
    get_array(arr,size);
    cin>>num;
    cout<<"first occurence of "<<num<<" is at index "<<leftmost(arr,size,num)<<endl;
    cout<<"last occurence of "<<num<<" is at index "<<rightmost(arr,size,num);
    return 0;
    }

//exceptional case check what is wrong
// 5
// 1 2 3 2 2
// 2
// first occurence of 2 is at index 1
// last occurence of 2 is at index 1