#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[500],i,ans=0,size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }  
    for(i=0;i<size;i++){
        ans=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                ans++;
            }
            }
            if (ans==2){
                cout<<arr[i]<<" ";
                arr[i]=INT_MIN;
            }
        }
        return 0;
    }

    