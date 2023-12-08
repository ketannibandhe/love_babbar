// #include<iostream>
// using namespace std;
// int main(){
//     int arr[500],arr1[500],i,j,size1,size2;
//     cin>>size1;
//     for(i=0;i<size1;i++){
//         cin>>arr[i];
//     } 
//     cin>>size2;
//     for(i=0;i<size2;i++){
//         cin>>arr1[i];
//     } 

//     for(i=0;i<size1;i++){
//         for(j=0;j<size2;j++){
//             if(arr[i]<arr1[j]){
//                 break;
//             }
//             if (arr[i]==arr1[j]){
//                 cout<<arr[i]<<" ";
//                 arr1[j]=-123;
//             }

//         }
//     }
//     return 0;}


#include<iostream>
using namespace std;
int main(){
    int arr[500],arr1[500],i=0,j=0,size1,size2;
    cin>>size1;
    for(i=0;i<size1;i++){
        cin>>arr[i];
    } 
    cin>>size2;
    for(i=0;i<size2;i++){
        cin>>arr1[i];
    } 
    i=0,j=0;
    while(i<size1 && j<size2){
        if (arr[i]==arr1[j]){
            cout<<arr[i]<<" ";
            arr1[j]=-123;
            i++;
            j++;
        }
        else if(arr[j]<arr1[j]){
            i++;
        }
        else
            j++;
    }
    return 0;}