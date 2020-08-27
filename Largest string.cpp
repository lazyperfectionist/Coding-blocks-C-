#include <iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[10000];
	int n;
	int len=0;
	int max_len=0;
	char max_arr[100000];

	cout<<"Enter number of strings";
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin.getline(arr,10000);
		len = strlen(arr);
		if(len>max_len){
			max_len = len;
			// strcpy is a function used to copy array elements 
			strcpy(max_arr,arr);
			/*for (int i = 0; i < len ; i++)
			{
				max_arr[i] = arr[i];
			}*/
		}
	}
	cout<<"max string : "<<max_arr<<" and its length is "<<max_len<<endl;
}
