#include<iostream>
using namespace std;
void func1(int *arr,int n){
    cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr+i<<" ";
    }
    cout<<endl;
}
void func2(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[20]={1,2,3,4,5};
    cout<<"sizeof(arr) inside main function: "<<sizeof(arr)<<endl;
    func1(arr+2,3);
    func2(arr,5);
    return 0;}