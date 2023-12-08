//normal solution

#include<iostream>
using namespace std;
int main(){
    int arr[500],i,j,size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(j=1;j<size-1;j++){
        if((arr[j]>arr[j-1]) && (arr[j]>arr[j+1])){
            cout<<"Peak element in the given mountain array:"<<arr[j]<<endl;
            break;
        }
    }

    return 0;}
 


