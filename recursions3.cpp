#include<iostream>
using namespace std;

void func(int s,int e){

    //base case
    if(s==e){
        cout<<"reached destination"<<endl;
        return;
    }

    //processing
    cout<<"step "<<++s<<endl;

    //recursive relation
    func(s,e);
}

int main(){
    int steps,current=0;
    cin>>steps;
    func(current,steps);
    
    return 0;}