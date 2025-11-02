class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Loop for going through each pair of numbers in array
        for(int i = 0; i<nums.size() ;i++)
        {
            for(int j = i+1; j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target) //checks if the two numbers add up to the target
                {
                    return{i,j};
                   // cout<< "[" << nums[i] << "," << nums[j] << "]"; //[i,j]
                }
            }
        }
        return{};
    }
};