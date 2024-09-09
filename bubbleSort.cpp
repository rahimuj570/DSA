#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    bool flag = true;
    while(flag){
        flag = false;
        for(int i=0; i<size-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
    }
}

int main(){
    int arr[]={1,8,5,6,9,3,10};
    bubbleSort(arr, 7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<' ';
    }
return 0;}