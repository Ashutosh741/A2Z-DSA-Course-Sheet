class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int len = n;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                len--;
                nums[i-1] = INT_MAX;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] == -1){
                int j = i+1;
                while(j<n && nums[j] != -1){
                    j++;
                }                
            swap(nums[i],nums[j-1]);
            }

        }
        sort(nums.begin(),nums.end());
        return len;
    }
};



// optimal approach --> two pointers

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        for(;j<n;){
            if(nums[i] != nums[j]){
                swap(nums[i+1],nums[j]);
                i++;j++;
            }else{
                j++;
            }
        }
        return i+1;
    }
};
