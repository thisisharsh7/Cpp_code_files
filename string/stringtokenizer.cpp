#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100]="My-name-is-Harsh.";
    char* ptr=strtok(a,"-");
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr=strtok(NULL,"-");
        cout<<ptr<<endl;
    }

    return 0;
}