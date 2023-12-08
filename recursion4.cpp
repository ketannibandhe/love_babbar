#include<iostream>
using namespace std;

void read_digit(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }

    //processing
    int rem=n%10;
    n=n/10;

    //recursive relation
    read_digit(n,arr);

    //processing or printing the number after function call
    cout<<arr[rem]<<" ";

}
int main(){
    int n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    cout<<endl<<endl;
    read_digit(n,arr);
    cout<<endl<<endl;
    
    return 0;}