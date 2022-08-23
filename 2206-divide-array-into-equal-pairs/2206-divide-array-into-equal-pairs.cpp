class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>m;
      for(int i=0;i<nums.size();i++)
      {
        m[nums[i]]++;
      }
      bool ans=true;
      for(auto it=m.begin();it!=m.end();it++)
      {
        if((it->second)%2!=0)
          return false;
      }
      return true;
    }
};