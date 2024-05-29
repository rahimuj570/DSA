#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"ENTER ARRAY SIZE: ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)cin>>arr[i];

//Insertion Sort
for(int i=1; i<n; i++){
    int key = arr[i]; int j=0;
    for(j=i-1; j>=0 && key<arr[j]; j--){
        arr[j+1]=arr[j];
    }
    arr[j+1]=key;
}

for(int i=0; i<n; i++)cout<<arr[i];
return 0;}