// 입력 9개를 받아 배열에 저장 arr[9] 및 배열의 전체합을 계산
// 9개 중에 2개를 뽑아서 배열의 전체 합산을 뺀 값이 100을 찾는다.
// 찾으면 새로운 배열에 2개를 빼고 저장 후 오름차순

#include <bits/stdc++.h>
using namespace std;
int arr[9], sum;
pair<int, int> ret;
vector<int> v;

// 전체 합 배열 안에 있는 2개를 뺐을 때 100을 찾아 ret에 저장하는 함수
void solve(){
    for(int i=0; i<9; i++){
        for(int j=0; j<i; i++){
            if(sum - arr[i] - arr[j] == 100) ret = {i, j};
        }
    }
}

int main(){
    // 9개를 입력받고 입력받은 수를 합산
    for(int i=0; i<9; i++){
        cin >> arr[i]; sum += arr[i];
    }
    // 함수 호출
    solve();

    // 저장된 ret의 첫 번째 수와 두 번째 수가 같을 경우 통과
    // 저장된 수가 다를 경우 새로운 배열에 저장
    for(int i=0; i<9; i++){
        if(ret.first == i || ret.second == i) continue;
        v.push_back(arr[i]);
    }
    // 오름차순
    sort(v.begin(), v.end());
    for(int i : v) cout << i << '\n';

    return 0;
}