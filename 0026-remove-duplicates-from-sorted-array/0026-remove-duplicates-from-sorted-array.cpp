//solved
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        int low = 0;
        int high = 1;

        if(nums.empty()){
            return 0;
        }

        while(high < nums.size()){
            if(nums[low] != nums[high]){
                low++;
                nums[low] = nums[high];
            }
            high++;
        }

        return low + 1;

    }
};