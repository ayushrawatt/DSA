class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int result = nums[0] + nums[1] + nums[2];

        for(int i = 0; i <= nums.size() - 2; i++){
            int low = i + 1;
            int high = nums.size() - 1;

            while( low < high){
                int sum = nums[i] + nums[low] + nums[high];

                if(abs(target - sum) < abs(target - result)){
                    result = sum;
                }

                if(sum == target){
                    return target;
                }else if(sum < target){
                    low++;
                }else{
                    high--;
                }
            }
        }
        return result;
    }
};