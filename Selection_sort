#include<iostream>
using namespace std;
int selection_sort(int a[],int len)
{
    int temp;
    for(int i=0;i<len;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<len;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }
        }
        temp=a[i];
        a[i]=a[min_idx];
        a[min_idx]=temp;
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
    selection_sort(a,len);
}
