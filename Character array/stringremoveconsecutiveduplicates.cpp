#include<iostream>
#include<cstring>
using namespace std;
void removeduplicates(char a[]){
    int i=1,k=0;
    int n=strlen(a)-1;
    while(i<=n){
        if(a[k]!=a[i]){
            k++;
            a[k]=a[i];
        }
        i++;
    }
    a[k+1]='\0';
}
int main(){
    char a[100];
    cin>>a;
    removeduplicates(a);
    cout<<a;

    return 0;
}