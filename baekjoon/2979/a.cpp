#include <bits/stdc++.h>
using namespace std;
int A, B, C, a, b, cnt[104], ret;
int main(){
    cin >> A >> B >> C;

    //트럭 3대의 출입 시간 입력 및 주차장 이용 시간
    for(int i=0; i<3; i++){
        cin >> a >> b;
        for(int j=a; j<b; j++) cnt[j]++;
    }

    //시간 별로 주차된 트럭 수에 따라 요금 계산
    for(int j=1; j<100; j++){
        if(cnt[j]){
            if(cnt[j]==1) ret += A;
            else if(cnt[j]==2) ret += B * 2;
            else if(cnt[j]==3) ret += C * 2;
        }
    }
    
    cout << ret << '\n';
    return 0;
}