//compare the output with recursions2.cpp
#include<iostream>
using namespace std;
void print(int n){
    cout<<"inside (print "<<n<<")"<<endl;

    //base case
    if(n==0){
        cout<<"returning"<<endl;
        return;
    }

    //recursie relation
    print(n-1);

    //processing
    cout<<n<<"\n";
    cout<<"(print "<<n<<") function ends"<<endl;
}

int main(){
    int n;
    cin>>n;
    print(n);
    
    return 0;}


// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
    
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
    
//     return 0;}