#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

