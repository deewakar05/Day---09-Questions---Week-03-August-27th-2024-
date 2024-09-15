#include<iostream>
#include<string>
using namespace std;

int main(){
    int a=42;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    cout<<a<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2<<endl;
}