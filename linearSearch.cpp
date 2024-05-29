#include<bits/stdc++.h>
using namespace std;

int linearSearch(int target, int n, int arr[]){
    int found=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            found=i;
            break;
        }
    }
return found;}

int main(){
int n;
cout<<"ENTER ARRAY SIZE:";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)cin>>arr[i];
int target;
cout<<"Which element you want to search: ";
cin>>target;
int found = linearSearch(target,n,arr);
found!=-1?cout<<target<<" found in index="<<found:cout<<"Not Found";
return 0;}