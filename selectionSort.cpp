#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"ENTER ARRAY SIZE: ";
cin>>n;
int arr[n];
for(int i=0; i<n; i++)cin>>arr[i];

//Selection Sort
for(int i=0; i<n-1; i++){
    int min = i; int j=0;
    for(j=i+1; j<n; j++){
        if(arr[min]>arr[j])min=j;
    }
    swap(arr[i],arr[min]);
}

//PRINT
for(int i=0; i<n; i++)cout<<arr[i];
return 0;}