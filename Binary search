#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]== key){
            return mid;
        }
        else if(a[mid]>key){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}


int main(){
    int a[1000],n,key;
    cout<<"enter number of elements: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element no "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"Enter element to search ";
    cin>>key;
    
    cout<<binary_search(a,n,key);
}
