#include<iostream>
#include<limits.h>
using namespace std;

// int search_sqrt(int num){
//     int l=0;
//     int r=num;
//     int mid=l+(r-l)/2;
//     int ans=-1;
//     //long long int

//     while(l<=r && r<INT_MAX ){
//         if(mid*mid==num){
//             return mid;            
//         }
//         if(mid*mid<num){
//             ans=mid;
//             l=mid+1;            
//         }
//         else{
//             r=mid-1;
//         }
//         mid=l+(r-l)/2;
//     }
//     return ans;
// }



int find_square(int num){
    int l=0;
    int r=num;
    int mid=l+(r-l)/2;
    int ans=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid<num){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[500],num,i;
    cout<<"enter the number to find the square root\n";
    cin>>num;
    // for(i=0;i<=num;i++){
    //     arr[i]=i+1;
    // }
    cout<<"Square root of "<<num<<" is "<<find_square(num);

    return 0;}