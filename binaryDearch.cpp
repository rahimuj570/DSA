#include<bits/stdc++.h>
using namespace std;

int binarySearch(int start, int end, int target, int arr[]){
    int mid = (start+end)/2;
    while(start<=end){
        if(target==arr[mid])return mid;
        else if(target<arr[mid])return binarySearch(start,mid-1,target,arr);
        else return binarySearch(mid+1,end,target,arr);
    }
    return -1;
}

int main(){
cout<<"ENTER ARRAY SIZE: ";
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)cin>>arr[i];
sort(arr,arr+n);
cout<<"Which element you want to search?: ";
int target;
cin>>target;
int foundIndex = binarySearch(0, n-1, target, arr);
if(foundIndex==-1)cout<<"Not Found";
else cout<<"Found in index="<<foundIndex;
return 0;}