#include <iostream>
using namespace std;
int main() {
    int m,n,sum=0;
    //rows and cols of array
    cin>>m>>n;
    int arr[m][n]={0};
    //taking elements as input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        //multiplying element with the nuber of their occurences
        /*  int x=(i+1)*(j+1);
        x is the number of elements occuring in top left can be calculated by multiplying i+1 and j+1
        y is the number of elements occuring in bottom right can be calculated by multiplying m-i and n-j
            int y=(m-i)*(n-j);
            sum += arr[i][j] * (x*y);
        */
            sum += arr[i][j] * (((i+1)*(j+1)) * ((m-i)*(m-j)));
        }
    }
    cout<<sum;
    return 0;
}
