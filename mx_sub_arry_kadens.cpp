#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int st = 0, end = 0;
    int curSub = 0, maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        curSub += arr[i];
        if(curSub >= maxi){
            end = i;
            maxi = max(maxi, curSub);
        }
        if(curSub < 0){
            st = i + 1;
            curSub = 0;
        }
    }
    for(int i = st; i <= end; i++){
        cout << arr[i] <<" ";2
    }
}