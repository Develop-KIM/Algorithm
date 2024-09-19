#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main() {
    vector<int> v{2, 2, 1, 1, 3, 3, 4, 4};
    for (int i : v) {
        if(mp[i]) {
            continue; // 이미 mp에 존재하는 숫자는 처리하지 않고 넘어감
        } else {
            mp[i] = 1; // 처음 등장하는 숫자는 mp에 저장 (value로 1을 할당)
        }
    }
    vector<int> ret;
    for(auto it : mp) {
        ret.push_back(it.first);
    }
    for(int i : ret) cout << i << "\n";
}