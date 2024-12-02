class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> MapHash;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            MapHash[nums[i]] = i;

        }

        for (int i = 0; i < n; i++){
            int number = target - nums[i];
            if (MapHash.count(number) && MapHash[number] != i){
                return {i,MapHash[number]};
            }
        }
        return {};
    }
};