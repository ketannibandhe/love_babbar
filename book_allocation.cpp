#include<iostream>
using namespace std;
bool ispossible(int arr[],int size,int students,int mid){
    int stdcount=1;
    int pagesum=0;
    for(int i=0;i<size;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            stdcount++;
            if(stdcount>students||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];

        }
    }
    return true;
}
int main(){
    int arr[500],size,s=0,e,sum=0,num,students;
    cout<<"enter the size of array\n";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"enter the number of students\n";
    cin>>students;
    e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,size,students,mid)){
            ans=mid;
            e=mid-1;
            cout<<"inside if"<<mid<<endl;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
        cout<<"after else "<<mid<<endl;
    }
    cout<<"outside while"<<mid<<endl;
    return 0;}