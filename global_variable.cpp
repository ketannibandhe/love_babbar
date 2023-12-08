#include<iostream>
using namespace std;

int n1=200;

void func1(int& n){
    int a=20;//local variable cannot be acessed inside main function
    n=n+1;
}
int main(){
    int n=2;
    cout<<n<<endl;
    func1(n);
    cout<<n<<endl;
    

    return 0;}