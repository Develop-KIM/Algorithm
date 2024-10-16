#include <bits/stdc++.h>
using namespace std;
int N, M;

int main(){
    cin >> N >> M;
    vector<int> materials(N);


    for(int i=0; i<N; i++){
        cin >> materials[i];
    }

    sort(materials.begin(), materials.end());
    int left = 0; int right = N - 1;
    int ret = 0;

    while(left < right){
        int sum = materials[left] + materials[right];

        if(sum == M){
            ret++;
            left++;
            right--;
        } else if(sum < M){
            left++;
        } else {
            right--;
        }
    }
    cout << ret;
}