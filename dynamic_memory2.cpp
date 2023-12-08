#include<iostream>
using namespace std;
void update(int& n){
    n+=100;
}
int main(){
    int n=2;
    cout<<"before: "<<n<<endl;
    update(n);
    cout<<"after: "<<n<<endl;
    return 0;}