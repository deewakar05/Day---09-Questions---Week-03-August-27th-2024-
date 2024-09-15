#include<iostream>
#include<string>
using namespace std;
int countCharacter(string &str, char ch){
    int n=str.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]==ch) count++;
    }
    return count;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int *ptr=arr;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;

}