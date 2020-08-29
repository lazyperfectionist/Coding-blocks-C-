#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows and columns of matrix"<<endl;
    cin>>m>>n;
    int arr[m][n]={0};
    int suff_arr[m][n]={0};
    cout<<"Enter elements"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // Now we have to prepare the suffix sum submatrix
    suff_arr[m-1][n-1] = arr[m-1][n-1];
    for(int i=m-2;i>=0;i--){
        suff_arr[i][n-1] = suff_arr[i+1][n-1] + arr[i][n-1];
    }
    for(int j=n-2;j>=0;j--){
        suff_arr[m-1][j] = suff_arr[m-1][j+1] + arr[m-1][j];
    }
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            suff_arr[i][j] =arr[i][j] + suff_arr[i+1][j] + suff_arr[i][j+1] - suff_arr[i+1][j+1];
        }
    }
    cout<<"Suffix array is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<suff_arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int top=0,bottom=0;
    int max = suff_arr[0][0];
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(suff_arr[i][j] > max){
                max = suff_arr[i][j];
                top=i;
                bottom=j;
            }
        }
    }
    cout<<"Maximum sum possible of this submatrix is";
    cout<<max<<endl;
    cout<<"Submattrix with maximum sum : "<<endl;
    for(int i=top;i<m;i++){
        for(int j=bottom;j<n;j++){
            cout<<suff_arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
