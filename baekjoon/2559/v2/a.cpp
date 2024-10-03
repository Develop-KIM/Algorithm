// N : 2 ~ 10만 이하
// K : 1 ~ 10만 사이 -1
// 온도는 -100 * 10만 -1  -> 최악 = -100000004
// 최대값을 구하라 : prefix sum psum[i] = psum[i - 1] + arr[i];

#include <bits/stdc++.h>
using namespace std;
int N, K, temp, psum[1000001], ret = -10000004;

int main(){
    cin >> N >> K;

    for(int i=1; i<=N; i++){
        cin >> temp;
        psum[i] = psum[i - 1] + temp;
    }

    for(int i=K; i<=N; i++){
        ret = max(ret, psum[i] - psum[i - K]);
    }
    cout << ret << '\n';
}
