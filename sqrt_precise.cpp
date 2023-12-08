#include<iostream>
#include<limits.h>
using namespace std;


long long search_sqrt(int num){
    int l=0;
    int r=num;
    int mid=l+(r-l)/2;
    int ans=-1;
    //long long int

    while(l<=r){
        long long int square=mid*mid;
        if(square==num){
            return mid;            
        }
        if(square<num){
            ans=mid;
            l=mid+1;            
        }
        else{
            r=mid-1;
        }
        mid=l+(r-l)/2;
    }
    return ans;
}

double sqrt_final(int num,int precision,int sqrt1){
    double factor=1;
    double final=sqrt1;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=final;j*j<num;j+=factor){
            final=j;
        }
    }
    return final;
}
int main(){
    int num;
    cin>>num;
    int sqrt1=search_sqrt(num);
    cout<<"square root of "<<num<<" is "<<sqrt_final(num,3,sqrt1);
    
    return 0;}