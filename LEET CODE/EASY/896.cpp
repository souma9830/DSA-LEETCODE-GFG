class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isdec=true;
        bool isinc=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                isdec=false;
            }
            if(nums[i]<nums[i-1]){
                isinc=false;
            }
        }
        if(isdec || isinc){
            return true;
        }
        else{
            return false;
        }
        
    }
};