#include <bits/stdc++.h>
using namespace std;
int N, cnt;
string str;
map<string, int> mp;

int main(){
    cin >> N;

    while(N--){
        cin >> str >> cnt;
        mp[str] += cnt;
    }

    bool found = false;

    for(auto it = mp.begin(); it != mp.end(); it++){
        if (it -> second == 5) found = true;
    }

    if(found) cout << "YES";
    else cout << "NO";
}