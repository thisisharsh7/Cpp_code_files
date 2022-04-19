#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char a[]){
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char a[100];
    cin.getline(a,100);
    if(isPalindrome(a)){
        cout<<"It is a palindromic string";
    }else{
        cout<<"It is not a palindrom..";
    }

    return 0;
}