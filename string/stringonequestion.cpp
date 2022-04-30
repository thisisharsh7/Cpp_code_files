#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
//extracting string
string extractStringAtKey(string str,int key){
    char *s=strtok((char*)str.c_str()," ");//converting string to char*
    while(key>1){
        s=strtok(NULL," ");
        key--;
    }
    return (string)s;
}
//conversion to int
int convertToInt(string s){
    int ans=0;
    int p=1;
    for(int i=s.length()-1;i>=0;i--){
        ans+=((s[i]-'0')*p);
        p=p*10;
    }
    return ans;
}
//numeric compare
bool numericcompare(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return convertToInt(key1)<convertToInt(key2);
}
//lexicographic compare
bool lexicocompare(pair<string,string> s1,pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}

int main(){
    string s[100];
    string reverse,order;
    int n,key;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    cin>>key>>reverse>>order;
    //making a pair of string
    pair<string,string> strpair[100];
    for(int i=0;i<n;i++){
        strpair[i].first=s[i];
        strpair[i].second=extractStringAtKey(s[i],key);//extracting the second element of string
    }
    //sorting on the basis of order
    if(order=="numeric"){
        sort(strpair,strpair+n,numericcompare);
    }else{
        sort(strpair,strpair+n,lexicocompare);
    }
    //reversing the pair
    if(reverse=="true"){
        for(int i=0;i<n/2;i++){
            swap(strpair[i],strpair[n-i-1]);
        }
    }
    //answer
    for(int i=0;i<n;i++){
        cout<<strpair[i].first<<endl;
    }

    
    return 0;
}