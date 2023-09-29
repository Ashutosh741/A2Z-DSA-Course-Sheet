
#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    unordered_map<long long ,int>mp;
    int n = a.size();
    int maxi =0;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        mp.insert({sum,i+1});
        if(sum == k){
            maxi = max(maxi,i+1);
            continue;
        }
        if(mp.find(sum-k) != mp.end()){
            maxi = max(maxi,i-mp[sum-k]+1);
        }
        
    }
    return maxi;
    
}


// optimal approach two pointers

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size(),i=0,j=0,maxi=0;
    long long sum = a[0];
    while(j < n){
        while(i <= j && sum > k){
            sum-=a[i++];
        }
        if(sum == k){
            maxi = max(maxi,j-i+1);
        }
        j++;
        if(j < n)sum+=a[j];
    }
    return maxi;
}
