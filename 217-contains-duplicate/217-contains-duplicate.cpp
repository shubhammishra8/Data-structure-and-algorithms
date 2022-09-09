class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     bool ans=false;
      set<int>s;
      for(int i=0;i<nums.size();i++)
      {
        if(s.count(nums[i])==0)
          s.insert(nums[i]);
        else
          ans=true;
      }
      return ans;
    }
};