vector<int> getSecondOrderElements(int n, vector<int> a) {
  // Write your code here.
  int maxi = a[0], maxi2 = a[1];
    if(maxi < maxi2)swap(maxi2,maxi);
  for (int i = 1; i < n; i++){
      if(maxi < a[i]){
          maxi2 = maxi;
          maxi = a[i];
      }
      if(a[i] != maxi)
      maxi2 = max(maxi2,a[i]);
  }
  int mini = a[0],mini2 = a[1];
    if(mini > mini2)swap(mini2,mini);

  for(int i=1;i<n;i++){
      if(mini > a[i]){
          mini2 = mini;
          mini = a[i];
      }
      if(mini != a[i])
      mini2 = min(mini2,a[i]);
  }
  return {maxi2,mini2};

}



// single traversal

vector<int> getSecondOrderElements(int n, vector<int> a) {
  // Write your code here.
  int maxi = a[0], maxi2 = a[1];
    if(maxi < maxi2)swap(maxi2,maxi);
      int mini = a[0],mini2 = a[1];
    if(mini > mini2)swap(mini2,mini);
  for (int i = 1; i < n; i++){
      if(maxi < a[i]){
          maxi2 = maxi;
          maxi = a[i];
      }
      if(a[i] != maxi)
      maxi2 = max(maxi2,a[i]);
            if(mini > a[i]){
          mini2 = mini;
          mini = a[i];
      }
      if(mini != a[i])
      mini2 = min(mini2,a[i]);
  }

  return {maxi2,mini2};

}
