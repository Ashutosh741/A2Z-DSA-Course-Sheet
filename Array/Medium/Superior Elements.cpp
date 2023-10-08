vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n = a.size(),maxi= INT_MIN;
    vector<int>ans;
    for(int i = n-1;i>=0;i--){
        if(maxi < a[i]){
            maxi = a[i];
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
