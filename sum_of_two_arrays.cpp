#include<iostream>
#include"vector"
using namespace std;

void cal_sum(int arr1[],int n1,int arr2[],int n2){
    vector<int>result;
    int digit,sum,carry=0,i=n1-1,j=n2-1;
    while(i>=0 ||j>=0 || carry!=0){
        int val1=0;
        if(i>=0)
        val1=arr1[i];

        int val2=0;
        if(j>=0)
        val2=arr2[j];


        int sum=val1+val2+carry;
        digit=sum%10;
        result.push_back(digit);
        carry=sum/10;
        i--;
        j--;
    }
    for(int i=0,j=result.size()-1;i<j;i++,j--){
        swap(result[i],result[j]);
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}

int main(){
    
    int arr1[500],arr2[500],s1,s2;
    cout<<"enter the size of array1:\n";
    cin>>s1;
    for(int i=0;i<s1;i++){
        cin>>arr1[i];
    }
    cout<<"enter the size of array2:\n";
    cin>>s2;
    for(int i=0;i<s2;i++){
        cin>>arr2[i];
    }
    cout<<"the sum of two arrays is :\n";
    cal_sum(arr1,s1,arr2,s2);
    
    
    return 0;}