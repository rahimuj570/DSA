#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

int dp[100][1000];
bool isPossible(int arr[], int targetSum, int n){
        if(dp[n][targetSum]!=-1)return dp[n][targetSum]==1?true:false;
        if(n<0)return false;
        if(targetSum<0)return false;
        if(targetSum==0)return true;
        bool isOk=false;

        if(targetSum-arr[n]>=0)
        isOk = isPossible(arr,targetSum-arr[n],n-1);
        isOk |=isPossible(arr,targetSum,n-1);
        
        dp[n][targetSum]=isOk?1:0;
    return isOk;
}

int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
        
        memset(dp,-1,sizeof(dp));
    int n,targetSum;
    cin>>n>>targetSum;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
        cout<<isPossible(arr,targetSum, n-1);

return 0;}
