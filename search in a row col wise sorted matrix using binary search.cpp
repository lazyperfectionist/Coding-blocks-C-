#include<iostream>
using namespace std;
int main(){
    int row,col;
    row=3;
    col = 3;
    int key = 7;
    int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        int start = 0;
        int end=col-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[i][mid]==key){
                cout<<"found at index "<<i<<" "<<mid<<endl;
                break;
            }
            else if(arr[i][mid] <key){
                start++;
            }
            else{
                end--;
            }

        }
    }
}
