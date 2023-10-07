class Solution {
public:
    void reverse(int i,int j,vector<int>&nums){
        while(i < j){
            swap(nums[i],nums[j]);
            i++,j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),breakpoint = -1;
        for(int i=n-1;i>=1;i--){
            if(nums[i] > nums[i-1]){
                breakpoint = i-1;
                break;
            }
        }
        if(breakpoint != -1){
        for(int i=n-1;i>breakpoint;i--){
            if(nums[breakpoint] < nums[i]){
                swap(nums[breakpoint],nums[i]);
                break;
            }
        }
        cout<<"point"<<breakpoint<<endl;;
        reverse(breakpoint+1,n-1,nums);
        }else{
            reverse(0,n-1,nums);
        }
    }
};
