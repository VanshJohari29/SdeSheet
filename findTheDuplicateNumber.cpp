// using sort function 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};
//using map
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m1;
        int duplicate = 0;
        for(auto i= 0; i<nums.size(); i++)
      m1[nums[i]]++;
        
        for(auto i : m1)
        {
            if(i.second > 1)
            {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
};
