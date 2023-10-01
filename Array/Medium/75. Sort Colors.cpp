class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one = 0,two = 0, zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0)zero++;
            else if(nums[i] == 1)one++;
            else if(nums[i] == 2)two++;
        }
        for(int i=0;i<zero;i++){
            nums[i] = 0;
        }
        for(int i=0;i<one;i++){
            nums[zero++] = 1;
        }
        for(int i=0;i<two;i++){
            nums[zero++] = 2;
        }
    }
};
