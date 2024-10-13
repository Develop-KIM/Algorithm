// N : 도감에 있는 포켓몬의 개수 1부터시작
// M : 맞춰야 하는 포켓몬의 개수
// 포켓몬을 입력받을 때 부터 숫자와 같이 담기
// M개만큼 도감에 있는지 돌려야함 for
// 입력받은 게 숫자인지 문자인지 확인
// 문자로 오면 숫자로 숫자로 오면 문자로 변환 atoi(str.c_str())

#include <bits/stdc++.h>
using namespace std;
int N, M;
string str, arr[100004];
map<string, int> mp;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;

    // 포켓몬 이름과 숫자를 저장
    for(int i=1; i<=N; i++){
        cin >> str;
        mp[str] = i;
        arr[i] = str;
    }

    for(int i=1; i<=M; i++){
        cin >> str;

        if(atoi(str.c_str()) == 0) cout << mp[str] << '\n';
        else cout << arr[atoi(str.c_str())] << '\n';
    }
}
