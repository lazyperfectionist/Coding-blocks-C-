#include<iostream>
using namespace std;
int insertion_sort(int a[],int len)
{
    for(int i=1;i<len;i++){
        int j=i-1;
        int temp=a[i];
        while((j>=0) && (a[j]>temp)){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }


    cout<<"Sorted array is:"<<endl;
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[1000],len;
    cout<<"Enter length of array:";
    cin>>len;
    cout<<"Enter elements of array:";
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
    insertion_sort(a,len);
}
