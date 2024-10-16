#include <bits/stdc++.h>
using namespace std;
int N, M, arr[15001], cnt;

int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++) cin >> arr[i];

    if(M > 20000) cout << 0 << '\n';
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i] + arr[j] == M) cnt++;
        }
    }
    cout << cnt << '\n';
}