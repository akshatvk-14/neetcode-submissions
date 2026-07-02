class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        //GEMINI CODE
        unordered_set<int> seen;

        for (int num : nums) {
            // Agar element pehle se set mein hai, matlab duplicate mil gaya
            if (seen.find(num) != seen.end()) {
                return true;
            }
            // Agar nahi hai, toh set mein daal do
            seen.insert(num);
        }

        return false;
        
        
        /* MY CODE
        map<int,int>mp;
        int flag = 0;

        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]==1){
                flag=1;
                break;
            }
            else{
                mp[nums[i]]++;
            }
        }

        if(flag==1){
            return true;
        }
        return false;
        */ 
    }
};