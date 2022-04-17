#include<iostream>
using namespace std;

int main(){
    int arr[100][100]={0};
    int m,n,k=1;
    cin>>m>>n;
    int msum=0;
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=k;
            k+=1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //bruteforce technique
    for(int l1=0;l1<m;l1++){
        for(int l2=0;l2<n;l2++){
            for(int b1=l1+1;b1<m;b1++){
                for(int b2=l2+1;b2<n;b2++){
                    for(int i=l1;i<=b1;i++){
                        for(int j=l2;j<=b2;j++){
                            sum+=arr[i][j];
                            if(sum>msum){
                                msum=sum;
                            }
                        }
                    }
                }
            }
        }
    }
cout<<"msum "<<msum<<endl;

    return 0;
}