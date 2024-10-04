// 입력 9개를 받아 배열에 저장 arr[]
// 배열을 오름차순으로 정렬 sort(arr, arr + 9)
// 순열: 9개 중에 7개를 합하여 100 출력 do while(next_permutation(arr, arr + 9))

#include <bits/stdc++.h>
using namespace std;
int arr[9];

int main(){
    // 입력을 받아 배열에 저장
    for(int i=0; i<9; i++) cin >> arr[i];

    // 배열을 오름차순
    sort(arr, arr + 9);

    do{
        int sum = 0; // 각 순열마다 합산을 초기화를 위해 do 안에 넣어야 함
        for(int i=0; i<7; i++) sum += arr[i]; // 배열에 있는 값들을 7개를 합산
        if(sum == 100) break; // 합산한 값이 100이면 do ~ while 문 종료
    }while(next_permutation(arr, arr + 9)); // 순열
    for(int i=0; i<7; i++) cout << arr[i] << '\n';
    
    return 0;
}