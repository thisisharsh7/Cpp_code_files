#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> ngor(vector<int> a){
    vector<int> nge;
    int n=a.size();
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(!s.empty() and a[i]>a[s.top()]){
            int pos=s.top();
            nge[pos]=a[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        int pos=s.top();
        nge[pos]=-1;
        s.pop();
    }
}