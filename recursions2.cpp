//compare the output with recursions1.cpp
#include<iostream>
using namespace std;
void print(int n){
    cout<<"inside (print "<<n<<")"<<endl;
    if(n==0){
        cout<<"returning"<<endl;
        return;
    }
    cout<<n<<"\n";
    print(n-1);
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
//     cout<<n<<" ";
//     print(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }