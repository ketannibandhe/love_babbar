#include<iostream>
using namespace std;
void show_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={2,3,4,5,6,7};
    show_array(arr,5);
    
    return 0;}