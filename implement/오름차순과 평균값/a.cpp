#include <bits/stdc++.h>
using namespace std;
int N;
double avg;
int main(){
    cin >> N;

    vector<int> numbers(N);
    for(int i=0; i<N; i++){
        cin >> numbers[i];
    }

    // 배열 오름차순
    sort(numbers.begin(), numbers.end());

    // 합산
    int sum = 0;
    for(int i=0; i<N; i++){
        sum += numbers[i];
    }

    // 평균
    avg = (double) sum / N;

    // 정렬된 배열 출력
    for(int i=0; i<N; i++){
        cout << numbers[i] << " ";
    }
    cout << '\n';

    // 평균값 출력
    cout << fixed << setprecision(2) << avg << '\n';
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for(int& num : numbers) {
        cin >> num; // &num를 사용하여 직접 참조로 입력
    }

    // 배열 오름차순 정렬
    sort(numbers.begin(), numbers.end());

    // 합산 및 평균 계산
    double sum = accumulate(numbers.begin(), numbers.end(), 0);
    double avg = sum / N;

    // 정렬된 배열 출력
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << '\n';

    // 평균값 출력
    cout << fixed << setprecision(2) << avg << '\n';

    return 0;
}
*/