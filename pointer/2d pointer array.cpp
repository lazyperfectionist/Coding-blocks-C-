#include<iostream>
using namespace std;
int main(){
    int r=3,c=3;
    // Declare a row array pointing towards all colums:
    int **arr = new int*[r];
    for(int i=0;i<r;i++){
        //Declaring new columns arrays:
        arr[i] = new int[c];
    }
    //Now our array is made 
    int val=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            //Taking input values for array: 
            arr[i][j] = val;
            val+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Freeing memory after use
    delete [] arr;
}
