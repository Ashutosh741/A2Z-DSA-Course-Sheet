#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int i=0,j=1;
    int first = arr[0];
    int last = arr[n-1];
    for(;j<n && i < n;){
        arr[i] = arr[j];
        i++,j++;
    }
    arr[n-1] = first;
    return arr;
}
