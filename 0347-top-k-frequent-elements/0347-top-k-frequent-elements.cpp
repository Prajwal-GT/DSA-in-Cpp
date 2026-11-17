class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int n : nums) {
            count[n]++;
        }
        priority_queue<pair<int, int>> maxHeap;
        for (auto& [num, freq] : count) {
            maxHeap.push({freq, num});
        }
        vector<int> ans;
        while (k--) {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};