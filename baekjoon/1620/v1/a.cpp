// N : 포켓몬의 개수 
// M : 맞춰야 하는 문제의 개수
// 입력을 받고 저장 -> map을 두개 생성? 
// 문자 <-> 숫자 변환 atoi()
// 만약 문자로 찾았을 때 첫글자가 소문자면 toupper

#include <bits/stdc++.h>
using namespace std;
int N, M;
string str;
map<string, int> mapStr;
map<int, string> mapInt;

int main(){
    
    cin >> N >> M;

    //포켓몬을 입력받고 각 map에 저장 
    // ex) mapStr -> <pikachu, 1>;
    // ex) mapInt -> <1, pikachu>
    for(int i=1; i<=N; i++){
        cin >> str;
        mapStr[str] = i;
        mapInt[i] = str;
    }

    // 입력받은 숫자나 문자를 변환해서 출력
    for(int i=1; i<=M; i++){
        cin >> str;
        if(atoi(str.c_str()) == 0){
            if(islower(str[0])) {
                str[0] = toupper(str[0]);
            }
            cout << mapStr[str] << '\n'; // 문자를 받았을 때 숫자
        } 
        else cout << mapInt[atoi(str.c_str())] << '\n'; // 숫자를 받았을 때 문자
    }
}