class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int maxFreq = 0;
        int n = nums.size();
        unordered_map<int, int> frequencyArray;
        for(int i=0;i<n;i++) {
            frequencyArray[nums[i]]++;
            maxFreq = max(maxFreq, frequencyArray[nums[i]]);
        }

        vector<vector<int>> result(maxFreq);

        for(auto frequencyElement: frequencyArray) {
            int element = frequencyElement.first;
            int frequency = frequencyElement.second;

            for(int i=0; i<frequency; i++) {
                result[i].push_back(element);
            }
        }

        return result;
    }
};