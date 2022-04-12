class Solution {
public:
    int majorityElement(vector<int>& nums) {
	int result=nums[0];
	int count=0;
	for(int i=0;i<nums.size();i++){

		if(nums[i]==result){
			count++;
}

else if(nums[i]!=result){
			count--;
}
if(count==0) result=nums[i+1];
}
return result;

 }

};
