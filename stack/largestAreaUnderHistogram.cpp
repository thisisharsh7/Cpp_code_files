#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> rb(heights.size());
        vector<int> lb(heights.size());
        stack<int> st;
        st.push(heights.size()-1);
        rb[heights.size()-1]=heights.size();
        for(int i=heights.size()-1;i>=0;i--){
            while(!st.empty() and heights[i]<heights[st.top()]){
                st.pop();
            }
            if(st.empty()){
                rb[i]=heights.size();
            }else{
                rb[i]=st.top();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        st.push(0);
        lb[0]=-1;
        for(int i=1;i<heights.size();i++){
            while(!st.empty() and heights[i]<heights[st.top()]){
                st.pop();
            }
            if(st.empty()){
                lb[i]=-1;
            }else{
                lb[i]=st.top();
            }
        }
        int maxArea=0;
        for(int i=0;i<heights.size();i++){
            int width=rb[i]-lb[i]-1;
            int area=heights[i]*width;
            if(area>maxArea){
                maxArea=area;
            }
        }
        return maxArea;
    }
};

int main(){


    return 0;
}