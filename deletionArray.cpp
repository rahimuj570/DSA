#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"ENTER ARRAY SIZE: ";
cin>>n;
int arr[n+10];
for(int i=0; i<n; i++)cin>>arr[i];

int position;
cout<<"Insert position of the element you want to delete:";
cin>>position;
position--;

//ADD
for(int i=position; i<n-1; i++){
    arr[i]=arr[i+1];
}

//PRINT
for(int i=0; i<n-1; i++)cout<<arr[i]<<' ';
return 0;}