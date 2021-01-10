#include<iostream>
using namespace std;
//implementation of lower bound
int first_occurence(int a[],int n,int key){
    int s=0,e=n-1,ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]== key){
            ans = mid;
            e = mid-1;
        }
        else if(a[mid]>key){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
//implementation of upper bound: 
int last_occurence(int a[],int n,int key){
    int s=0,e=n-1,ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]== key){
            ans = mid;
            s= mid+1;
        }
        else if(a[mid]>key){
            e = mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    int a[1000],n,key;
    cout<<"enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter element to search ";
    cin>>key;
    
    cout<<"First occurence : "<<first_occurence(a,n,key)<<endl;
   	cout<<"Last occurence : "<<last_occurence(a,n,key)<<endl;

}
