#include<iostream>
using namespace std;
int main(){
    int a[1000],len;
    cout<<"Enter length of array:";
    cin>>len;
    cout<<"Enter elements of array:";
    for(int i=0;i<len;i++){
        cin>>a[i];
    }
    int max_sum=0;
    int left,right;
    //Generate subarays:
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            if(sum>max_sum){
                max_sum=sum;
                left=i;
                right=j;
            }
        }
    }
cout<<"Maximum sum is: "<<max_sum<<endl;
for(int i=left;i<=right;i++){
    cout<<a[i]<<",";
}
}
