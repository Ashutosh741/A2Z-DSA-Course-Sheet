#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

// recursive approach


#include <bits/stdc++.h> 
int maximum(vector<int> &arr, int n,int ind,int maxi){
        if(ind >= n){
        return 0;
    }
    if(maxi < arr[ind]){
        maxi =arr[ind];
        // return maxi;
    }

    int greatest = maximum(arr,n,ind+1,maxi);
    return max(maxi,greatest);
}
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi=0;
    return maximum(arr,n,0,maxi);
}

