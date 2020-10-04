#include <iostream>
using namespace std;
int main(){
    int m,n,key;
    cout<<"Enter number of rows and columns of matrix"<<endl;
    cin>>m>>n;
    int arr[m][n];

    cout<<"Enter elements"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your array is :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter key"<<endl;
    cin>>key;
    for(int i=0;i<m;i++){
    	int start = 0,end = n-1;
    	while(start<=end){
    		int mid =(start+end)/2;
    		int element = arr[i][mid];
    		if(element == key){
    			cout<<key<<" found at index "<<i<<","<<mid<<endl;
    			break;
    		}
    		else if(element > key){
    			end = mid-1;
    		}
    		else{
    			start = mid+1;
    		}
    	}
    }
}
