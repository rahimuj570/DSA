#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"ENTER ARRAY SIZE: ";
cin>>n;
int arr[n+10];
for(int i=0; i<n; i++)cin>>arr[i];

int position,elem;
cout<<"Which element you want to add: ";
cin>>elem;
cout<<"Insert position you want to insert new element:";
cin>>position;
position--;

//ADD
for(int i=n+1; i>=0; i--){
    if(i!=position){
    arr[i]=arr[i-1];
    }else{
        arr[i]=elem;
        break;
    }
}

//PRINT
for(int i=0; i<n+1; i++)cout<<arr[i]<<' ';
return 0;}