#include <iostream>
using namespace std;
//implementation of getline fucntion
void readline(char arr[],int maxlen){
    int i=0;
    char ch=cin.get();
    while(ch !='\n'){
        arr[i] = ch;
        i++;
        if(i==(maxlen)-1)
        {
            break;
        }
        ch=cin.get();
    }
    arr[i]='\0';
    return;
}
int main(){
    char arr[1000];
    cin.getline(arr,1000,'$');
    cout<<arr<<endl;
}
