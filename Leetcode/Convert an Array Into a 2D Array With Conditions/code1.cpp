class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        unordered_map<int, int> frequencyArray;

        for(int i=0;i<n;i++) {
            int frequency = frequencyArray[nums[i]];

            if(frequency == result.size()) {
                // adding one more row
                result.push_back({});
            }

            result[frequency].push_back(nums[i]);
            frequencyArray[nums[i]]++;
        }
        return result;
    }
};