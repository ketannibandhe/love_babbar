#include<iostream>
using namespace std;
bool check_palindrome(string str1,int i,int j){
    if(i>j){
        return true;
    }
    if(str1[i]!=str1[j]){
        return false;
    }
    else{
        swap(str1[i],str1[j]);
        i++;
        j--;
        check_palindrome(str1,i,j);
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter the string:\n";
    cin>>str;
    int i=0,j=str.size()-1;
    check_palindrome(str,i,j);
    if(check_palindrome(str,i,j)){
        cout<<"It is a palindrome string: "<<endl;
    }
    else{
        cout<<"Not a palindrome string"<<endl;
    }
    return 0;}
