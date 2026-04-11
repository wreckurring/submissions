class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int counter = 0;
        int maxCount = 0;

        for(auto it: nums) {
            mp[it]++;
        }

        for(int i = 0;i<nums.size();i++) {
            if(mp.count(nums[i]-1)==0) {
                counter = 1;
                
                while(mp.count(nums[i]+counter)>0) {
                    counter++;
                }
                maxCount = max(counter,maxCount);
            }
        }

        return maxCount;
    }
};