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
    for(int col=0;col<5;col++)
    {
        if(col%2==0){
            //Top to bottom
            for(int row=0;row<5;row++){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
        else{
            //Bottom's up
            for(int row=4;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
    }
}
