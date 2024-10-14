// 의상의 수를 입력
// 가진 의상의 이름과 의상의 종류를 입력 받는데 공백기준으로 나뉘어지고 같은 종류의 의상은 하나만 입을 수 있다.
// 아무것도 입지 않은경우는 없다 마지막에서 -1
// 며칠동안 밖을 돌아다닐 수 있는지 출력 

#include <bits/stdc++.h>
using namespace std;
int N, K;
string item, category;
map<string, int> mp;

int main(){
    cin >> N;

    while(N--){
        cin >> K;

        while(K--){
            cin >> item >> category;
            mp[category]++;
        }

        int cnt = 1;
        for(auto it = mp.begin(); it != mp.end(); ++it) {
            cnt *= (it->second + 1);
            cout << "Current cnt: " << cnt << '\n';  // cnt 값 출력
        }
        
        cnt -= 1;
        cout << "Final count (after subtracting 1): " << cnt << '\n';  // 최종 결과 출력
        
        cout << cnt << '\n';
        mp.clear();
    }
}