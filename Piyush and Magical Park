#include<iostream>
using namespace std;

void piyush(char arr[][1000],int m,int n,int s,int k){  
    bool success = true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            if(s<k){
                success = false;
                break;
            }
            if(arr[i][j]=='.')
            {
                s-=2;
            }
            else if(arr[i][j]=='*')
            {
                s+=5;
            }
            else
            {
                break;
            }
            if(j != n-1){
                s--;
            }
        }
    }
    if(success==true){
        cout<<"Yes"<<endl;
        cout<<s;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main() {
	char arr[1000][1000] ={0};
	int m,n,k,s;
	cin>>m>>n>>k>>s;
	for(int i=0;i<m;i++)
    {
		for(int j=0;j<n;j++)
        {
			cin>>arr[i][j];
		}
    }
    piyush(arr,m,n,s,k);
	return 0;
}
