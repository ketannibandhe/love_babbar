#include<iostream>
using namespace std;
int fib(int num){
    if(num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    else{
    return num=fib(num-1)+fib(num-2);
    }
}
int main(){
    int first=0,second=1,third,n;
    cout<<"enter the limit for fibonacci series"<<endl;
    cin>>n;
    cout<<"First:"<<first<<endl;
    cout<<"second:"<<second<<endl;
    cout<<fib(n);
    return 0;
}