class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>ans;
        int flag = 0;

        for(int i=0; i<nums.size()-1;i++){
            if(flag==0){
                for(int j=i+1; j<nums.size();j++){
                    if((nums[i] + nums[j]) == target){
                        ans.push_back(i);
                        ans.push_back(j);
                        flag = 1;
                        break;
                    }
                }
            }
            else{
                break;
            }
        }

        return ans;

    }
};
