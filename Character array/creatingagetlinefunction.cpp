#include<iostream>
#include<cstring>
using namespace std;

void readline(char a[],int n,char b){
    int i=0;
    char ch=cin.get();//take input a single character
    while(ch!=b && i!=n){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
    return;
}

int main(){
    char a[100];
    readline(a,100,'*');
    cout<<a;
    char b[100];
    cin.getline(b,100,'&');//take input a whole line
    cout<<b;

   return 0;
}