
void reverse(vector<int>&arr,int i,int j){
    while(j>=0 && i<arr.size() && i <= j){
        // int temp = arr[j];
        // arr[j] = arr[i];
        // arr[i] = temp;
        swap(arr[i],arr[j]);
        i++,j--;
    }
}

// 6
// 1 3 6 11 12 17
// 4

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    return arr;
}
