#include<bits/stdc++.h>
using namespace std;
        #define ll long long int
        #define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        #define bdb(x) cout<<bitset<10>(x)<<endl;
        #define db(x) cout<<(x)<<endl;
        #define pb push_back;

long long int dp[100][100];
ll maxProfit(long long int wt[], long long int val[], long long int n, long long int c){
        if(dp[n][c]!=-1)return dp[n][c];
        if(c<=0)return 0;
        if(n<0)return 0;
        long long int cost=0;
        if(wt[n]>c)return maxProfit(wt,val,n-1,c);
        
        cost = max(cost,maxProfit(wt,val,n-1,c-wt[n]))+val[n];
        cost =max(cost,maxProfit(wt,val,n-1,c));
        return dp[n][c]=cost;
}


int main(){
fast;
        #ifndef ONLINE_JUDGE
        freopen("inputf.in","r",stdin);
        freopen("outputf.out","w",stdout);
        #endif
        //////////////////////////////////
        memset(dp,-1,sizeof(dp));
        long long int n,c;
        cin>>n>>c;
        long long int wt[n];
        long long int val[n];
        for(long long int i=0; i<n; i++){
                cin>>wt[i]>>val[i];
        }
        cout<<maxProfit(wt,val,n-1,c);

return 0;}
