// optimal approach, logic is greater element always lead, so count find same element and decrease count when differenct 
// elment this way we get, and when cnt is zero then assign the element in the end the majority element will be assigned

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =  nums.size();
        int cnt = 0, candidate = nums[0];
        for(int i=0;i<n;i++){
            if(cnt == 0){
                candidate = nums[i];
                cnt++;
            }
            else if(candidate == nums[i])cnt++;
            else cnt--;

        }
        return candidate;
    }
};
