#include<iostream>
using namespace std;
int main(){
    int val=1;
    int arr[5][5] = {0};
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            arr[row][col]=val;
            val +=1;
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Accesssing random values
    int row=3;
    int col=4;
    cout<<arr[row-1][col-1]<<endl;
}
