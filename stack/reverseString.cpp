#include<iostream>
using namespace std;
string reverse(string s,int i){
    if(i==s.length()){
        return "";
    }
    char ch=s[i];
    return reverse(s,i+1)+ch;

}


int main(){
    string str="backer";
    cout<<reverse(str,0);
    

    return 0;
}