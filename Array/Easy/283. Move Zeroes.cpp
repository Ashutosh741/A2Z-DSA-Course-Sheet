class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
        while(j < n && i<=j){
            if(nums[i] == 0 && nums[j] != 0){
                swap(nums[i],nums[j]);
                i++,j++;
            }else if(nums[i] == 0 && nums[j] == 0){
                j++;
            }else if(nums[i] != 0 && nums[j] ==0){
                i++;
            }else{
                i++, j++;
            }
        }
    }
};


// updated code


vector<int> moveZeros(int n, vector<int> nums) {
    // Write your code here.
    int i=0,j=1;
    while(j < n && i < j){
        if(nums[i]==0 && nums[j] != 0){
            swap(nums[i],nums[j]);
            i++,j++;
        }else if(nums[i] == 0 && nums[j] == 0){
            j++;
        }else{
            i++,j++;
        }
    }
    return nums;

}
