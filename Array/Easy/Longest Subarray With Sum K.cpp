
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
