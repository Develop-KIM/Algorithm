#include <bits/stdc++.h>
using namespace std;
int arr[9];
int n = 9, r = 7;

void print(){
    int sum = 0;
    for(int i=0; i<r; i++){
        sum += arr[i];
    }

    if(sum == 100){
        sort(arr, arr+7);
        for(int i=0; i<r; i++) cout << arr[i] << '\n';
        exit(0);
    }
}

void makePermutation(int n, int r, int depth){
    if(r == depth){
        print();
        return;
    }

    for(int i=depth; i<n; i++){
        swap(arr[i], arr[depth]);
        makePermutation(n, r, depth+1);
        swap(arr[i], arr[depth]);
    }
    return;
}

int main(){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    makePermutation(n, r, 0);
    return 0;
}

