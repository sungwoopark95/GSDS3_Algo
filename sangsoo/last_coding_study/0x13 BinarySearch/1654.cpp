//solution
// solve 함수 : 
// 길이가 x일때 랜선이 n개 이상일 수 있는 지를 계산 하는 함수
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int k, n;
int arr[10005];

bool solve(ll x){
    ll cur = 0;
    for(int i =0; i < k ; i++) cur += arr[i] /x;
    return cur >=n;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;
    for(int i = 0; i < k; i++) cin >> arr[i];
    ll st = 1;
    ll en = 0x7fffffff; // 16진법 2^31-1
    while(st<en){
        ll mid = (st+en+1)/2;
        if(solve(mid)) st = mid;
        else en = mid-1;
    }
    cout << st;
}