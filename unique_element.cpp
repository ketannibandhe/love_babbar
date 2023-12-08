#include<iostream>
using namespace std;

int find_unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
            ans^=arr[i];
        }
    return ans;
}
int main(){
    int arr[500],i,j,size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int unique=find_unique(arr,size);
    cout<<unique;
    return 0;}