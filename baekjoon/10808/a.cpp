#include <bits/stdc++.h>
using namespace std;
int cnt[26];
string str;
int main(){
    cin >> str;
    for(char i : str) cnt[i - 'a']++;
    for(int i=0; i<26; i++) cout << cnt[i] << ' ';
}