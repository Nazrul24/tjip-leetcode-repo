class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Can it be solved with time complexity O(m+n) and without using extra memory?
        vector<int> arr;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }
            else{
                arr.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            arr.push_back(nums1[i]);
            i++;
        }

        while(j<n){
            arr.push_back(nums2[j]);
            j++;
        }

        for(int i=0;i<arr.size();i++){
            nums1[i]=arr[i];
        }

    }
};