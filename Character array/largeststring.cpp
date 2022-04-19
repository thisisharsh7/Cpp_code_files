#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1000];
    char b[1000];
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        if(strlen(a)>strlen(b)){
            strcpy(b,a);
        }
        
    }
    cout<<b;



    return 0;
}