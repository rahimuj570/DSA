#include<bits/stdc++.h>
using namespace std;

int f(int i){
    while(i<6){
        f(++i);
    }
}
int main(){
cout<<f(0);
return 0;}