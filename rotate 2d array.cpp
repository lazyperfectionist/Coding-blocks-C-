#include<iostream>
using namespace std;
int main(){
    int arr[1000][1000];
    int m,n;
    cin>>m;
    n=m;
    // Take array as input: 
    for(int i=0;i<=m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int row=0;row<n;row++){
        int start_col = 0;
        int end_col=n-1;
        while(start_col<end_col){
            swap(arr[row][start_col],arr[row][end_col]);
            start_col++;
            end_col--;
        }
    }
   

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            if(i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
