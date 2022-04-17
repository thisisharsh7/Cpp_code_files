#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"no. of rows"<<endl;
    cin>>n;
    int** pt= new int*[n];
    for(int i=0;i<n;i++){
        pt[i]=new int[i+1];
        pt[i][0]=1;
        for(int j=1;j<i;j++){
            pt[i][j]=pt[i-1][j-1]+pt[i-1][j];
        }
        pt[i][i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pt[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}