#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int key;
    int len=5;
    cout<<"Enter key to find";
    cin>>key;
    //find(start_index,end_index,key)
    auto it =find(arr,arr+len,key);
    int index = it-arr;
    if(index==len){
        cout<<"Not present"<<endl;
    }
    else{
        cout<<"present at index"<<index;
    }
    
}
