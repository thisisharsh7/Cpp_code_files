#include<iostream>
#include<climits>
using namespace std;
int maxWater_optimized(int arr[], int n)
{
int water = 0; // To store the final ans
int left_max = 0; // Which stores the current max height of the left side
int right_max = 0; // Which stores the current max height of the right side
int lo = 0; // Counter to traverse from the left_side
int hi = n - 1; // Counter to traverse from the right_side
while (lo <= hi)
{
if (arr[lo] < arr[hi])
{
if (arr[lo] > left_max)
{
left_max = arr[lo]; // Updating left_max
}
else
{
water += left_max - arr[lo]; // Calculating the ans
}
lo++;
}
else
{
if (arr[hi] > right_max)
{
right_max = arr[hi]; // Updating right_max
}
else
{
water += right_max - arr[hi]; // Calculating the ans
}
hi--;
}
}
return water;
}

int main(){
    int arr[]={3,0,0,2,0,4};
    int n=sizeof(arr)/sizeof(int);
    int water=maxWater_optimized(arr,n);
    cout<<water;

    return 0;
}