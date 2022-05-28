#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> slidingWindow(vector<int> &nums,int k){
    int n=nums.size();
    vector<int> nge(n);
    stack<int> st;
    st.push(n-1);
    nge[n-1]=n;
    for(int i=n-2;i>=0;i++){
        while(!st.empty() and nums[i]>nums[st.top()]){
            st.pop();
        }
        if(st.empty()){
            nge[i]=n;
        }else{
            nge[i]=st.top();
        }
    }
    vector<int> ans;
    int j=0;
    for(int i=0;i<=n-k;i++){
        if(j<i){
            j=i;
        }
        while(nge[j]<i+k){
            j=nge[j];
        }
        ans.push_back(nums[j]);
    }
    return ans;

}

int main(){



    return 0;
}