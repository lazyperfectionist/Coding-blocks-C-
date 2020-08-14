#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,10,11,12,13};
    int sum=23;
    int i=0;
    int j=sizeof(arr)/sizeof(int)-1;
    while(i<j){
        int cs=arr[i]+arr[j];
        if(cs>sum){
            j--;
        }
        else if(cs<sum){
            i++;
        }
        else if(cs==sum){
            cout<<arr[i]<<" and "<<arr[j]<<endl;
            i++;
            j--;
        }
    }
}
