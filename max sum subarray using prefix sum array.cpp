#include<iostream>
using namespace std;
bool compare(int a,int b){
    return a> b;
}
int main(){
    int a[1000],len;
    int csum_arr[1000];
    int current_sum=0,maximum_sum = 0;
    int left,right;
    cout<<"Enter length of array:";
    cin>>len;
    cout<<"Enter elements of array:";
    cin>>a[0];
    csum_arr[0] = a[0];
    for(int i=1;i<len;i++){
        cin>>a[i];
        csum_arr[i] = csum_arr[i-1] + a[i];
    }
    for(int i=0;i<len;i++){
        cout<<csum_arr[i]<<" ";
    }
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            current_sum =0;
            current_sum = csum_arr[j] - csum_arr[i-1];
            if(current_sum > maximum_sum){
                maximum_sum = current_sum;
                left = i;
                right =j;
            }
        }
    }

cout<<"Maximum subarray sum is "<<maximum_sum<<endl;
cout<<"Elements of max subarray are:"<<endl;
for(int i=left;i<=right;i++){
    cout<<a[i]<<" ";
}
}
