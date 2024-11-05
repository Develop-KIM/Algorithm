#include <bits/stdc++.h>
using namespace std;

int N, M, T;
string song;
char a[7];
unordered_map<string, string> um;

string getKey() {
    return string(a, a + 3); 
}

int main() {
    cin >> N >> M;

    while (N--) {
        cin >> song;
        for (char &c : a) cin >> c; 
        
        string key = getKey();
        if (um.find(key) == um.end()) um[key] = song;
        else um[key] = "?";
    }

    while (M--) {
        for (int i = 0; i < 3; i++) cin >> a[i];
        
        string key = getKey();
        cout << (um.count(key) ? um[key] : "!") << '\n';
    }

    return 0;
}
