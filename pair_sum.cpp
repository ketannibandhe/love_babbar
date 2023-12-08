#include<iostream>
using namespace std;
int main(){
    int arr[500],arr1[500],i=0,j=0,size1,sum;
    cin>>size1;
    for(i=0;i<size1;i++){
        cin>>arr[i];
    } 
    cout<<"enter the sum:\n";
    cin>>sum;
    for(i=0;i<size1;i++){
        for(j=i+1;j<size1;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[500],i,j,size,sum;
//     cin>>size;
//     cout<<"enter the desired sum\n";
//     cin>>sum;
//     for(i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<size-1;i++){
//         if(arr[i]+arr[i+1]==sum){
//             cout<<arr[i]<<" "<<arr[i+1];
//         }
//     }
    
//     return 0;}