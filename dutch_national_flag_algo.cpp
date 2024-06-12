// Dutch national flag algorithm
// it contains 3 sections
// low, mid, high --> 0, 1, 2
//taking three pointers
// low = 0, mid = 0, high = n - 1;
// runnig a loop from mid <= high
// if arr[mid] == 0 then swap arr[mid] with arr[low] then low++ and mid++
// if arr[mid] == 1 then mid++
// if arr[mid] ==  2 then swap arr[mid] with arr[high] then h--


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {0, 1, 2, 0, 1, 2};
    int low = 0, mid = 0, high = 5;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid++], arr[low++]);
        }
        else if(arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);
    }
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
}