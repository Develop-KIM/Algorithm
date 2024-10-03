#include <bits/stdc++.h>
using namespace std;
int N, K, ret, sum = 0;

int main(){
    cin >> N >> K;

    vector<int> arr(N);
    
    // 배열에 담기
    for(int i=0; i<N; i++) cin >> arr[i];
    
    // 첫 구간 합
    for(int i=0; i<K; i++) sum += arr[i];
    
    // 첫 구간 비교대상 초기화
    ret = sum;

    for(int i=K; i<N; i++){
        sum += arr[i] - arr[i - K]; // 새로운 값을 더하고 이전 값 빼기
        ret = max(ret, sum); // 구간별 비교하여 최대수 선별
    }
    cout << ret << "\n";
    return 0;
}
