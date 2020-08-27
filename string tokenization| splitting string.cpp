#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[1000];
    cin.getline(arr,1000);
    //strtok(string,dlim)  for first time only string to be passed furhther NULL will be passed: 
    char *ptr = strtok(arr," ");
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
}
