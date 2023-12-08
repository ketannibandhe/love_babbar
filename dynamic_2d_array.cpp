#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cin>>rows>>cols;

    //create 2D array int pointer 
    int**arr = new int*[cols];

    //now we are CREATING the memory
    for(int i=0;i<rows;i++){
        arr[i]=new int[cols];
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    //taking the output
    cout<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }   

    //releasing the dynamic memory in stack first 
    //by rowwise deleting every array 
    for(int i=0;i<rows;i++){
        delete [] arr[i];
    }

    //deleting the stack
    delete []arr;

    return 0;}