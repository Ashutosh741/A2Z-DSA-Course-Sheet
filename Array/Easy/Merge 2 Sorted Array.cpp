vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n = a.size(), m = b.size();
    int i=0,j=0;
    vector<int>ans;
    while(i < n  && j < m){
        while(i-1< n && a[i] == a[i+1])i++;
        while(j-1 < m && b[j] == b[j+1])j++;
        if(a[i] > b[j]){
            ans.push_back(b[j]);
            j++;
        }else if(a[i] == b[j]){
            j++;
        }
        else {
            ans.push_back(a[i]);
            i++;
        }
    }
    while( i < n){
        ans.push_back(a[i++]);
    }
    while( j < m){
        ans.push_back(b[j++]);
    }
    // for(auto it : ans)cout<<"ans"<<it;
    // cout<<endl;
    a =ans;
    b.clear();
    return a;
}
