#include<bits/stdc++.h>
using namespace std;


int isPossible(int arr[], int targetSum, int n){
    if(n<0)return false;
    bool isOk = isPossible(arr,targetSum,n-1);
    isOk |=isPossible(arr,targetSum,n);
    return isOk;
}

int main(){
    int n,targetSum;
    cin>>n>>targetSum;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
        cout<<isPossible(arr,targetSum, n-1);
return 0;}