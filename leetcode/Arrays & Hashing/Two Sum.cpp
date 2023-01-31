class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();++i){
          mp[nums[i]]=i;
      }
      bool isdone=0;
      vector<int>res;
      for(int i=0;i<nums.size();i++){
          int comp=target-nums[i];
      if(mp.find(comp)!=mp.end()&&mp[comp]!=i){
          res.push_back(mp[comp]);
          res.push_back(i);
          isdone=1;
      }
      if(isdone)break;
      }
      return res;
    }
};