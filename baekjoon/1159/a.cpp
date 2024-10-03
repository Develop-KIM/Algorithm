#include <bits/stdc++.h>
using namespace std;
int N, cnt[26];
string str, ret;

int main(){
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> str;
        cnt[str[0] - 'a']++;
    }
    
    for(int i=0; i<26; i++) if(cnt[i] >= 5) ret += i + 'a';
    if(ret.size()) cout << ret << '\n';
    else cout << "PREDAJA" << '\n';
}