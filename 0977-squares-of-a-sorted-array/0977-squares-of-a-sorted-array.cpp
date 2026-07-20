//solved 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int low = 0;
        int high = nums.size() - 1;

        for(int i = high; i >= 0; i--){
            if(abs(nums[low]) < abs(nums[high])){
                res[i] = nums[high] * nums[high];
                high--;
            }
            else{
                res[i] = nums[low] * nums[low];
                low++;
            }
        }
        return res;
    }
};