#include<iostream>
using namespace std;
int main(){
    int arr[500],i,j,size,sum;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the desired sum:\n";
    cin>>sum;
    for(i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            for(int k=0;k<size-2;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    
    
    
    return 0;}