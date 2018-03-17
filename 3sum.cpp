class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(unsigned int i=0;i<nums.size();++i){
            int first=-nums[i];
            unsigned int begin=i+1;
            unsigned int end=nums.size()-1;
            while(begin<end){
                if(nums[begin]+nums[end]<first){
                    begin++;
                }
                else if(nums[begin]+nums[end]>first)
                    end--;
                else{
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[begin]);
                    temp.push_back(nums[end]);
                    result.push_back(temp);
                    break;
                }
            }
            
        }
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
};
