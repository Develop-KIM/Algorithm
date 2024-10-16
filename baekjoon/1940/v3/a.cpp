#include <bits/stdc++.h>
using namespace std;
int N, M, arr[15001], cnt;
void combi(int idx, vector<int> & v){
    if(v.size() == 2){
        int b = arr[v[0]];
        int c = arr[v[1]];
        if(b + c == M) cnt++;
        return;
    }
    for(int i=idx+1; i<N; i++){
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
}
int main(){
    cin >> N >> M;
    for(int i=0; i<N; i++) cin >> arr[i];
    vector<int> v;
    combi(-1, v);
    cout << cnt << '\n';
}