#include <iostream>
#include<cstring>
using namespace std;
void removeDuplicates(char arr[]){
	int len;
	len=strlen(arr);
	if(len==0 or len==1){
		return;
	}
	int prev=0;
	for(int cc=1;cc<len;cc++){
		if(arr[cc]!=arr[prev]){
			prev++;
			arr[prev]=arr[cc];
		}
	}
	arr[prev+1] = '\0';
}


int main(){
	char arr[100];
	cin.getline(arr,1000);
	removeDuplicates(arr);
	cout<<arr;
}
