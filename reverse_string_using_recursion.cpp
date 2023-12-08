#include<iostream>
using namespace std;
void reverse_string(string& str1,int i,int j){
    if(i>j){
        return ;
    }
    swap(str1[i],str1[j]);
    i++;
    j--;
    reverse_string(str1,i,j);
}

int main(){
    string str;
    cout<<"Enter the string:\n";
    cin>>str;
    int i=0,j=str.size()-1;
    reverse_string(str,i,j);
    cout<<"reversed string : "<<str<<endl;
    return 0;}