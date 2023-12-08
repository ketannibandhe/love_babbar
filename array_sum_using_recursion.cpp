// #include<iostream>
// using namespace std;
// int find_sum(int arr[],int n){
//     int sum=0;
//     if(n==0){
//         return 0;
//     }
//     sum=find_sum(arr,n-1)+arr[n-1];
//     return sum;
// }

// int main(){
//     int size;
//     int arr[5]={1,2,3,4,5};
//     cout<<"sum of array elements: "<<find_sum(arr,5);
//     return 0;}


#include<iostream>
using namespace std;
int find_sum(int arr[],int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    if(n==1){
        //jar size 1 asel tar sum pan tich asnar mhanun
        return arr[0];
    }
    sum=find_sum(arr+1,n-1)+arr[0];
    return sum;
}

int main(){
    int size;
    int arr[5]={1,2,3,4,5};
    cout<<"sum of array elements: "<<find_sum(arr,5);
    return 0;}
