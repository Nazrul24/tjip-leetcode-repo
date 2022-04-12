class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        long long int len = nums.size();
        long long int index=0;
        for(long long int i=0;i<len;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[index]);
                index++;
            }
        }

    }
};
