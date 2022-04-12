class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(intervals.begin(),intervals.end());
        temp=intervals[0];

        for(auto i : intervals){
            if(temp[1]<i[0]){
                res.push_back(temp);
                temp = i;
            }
            else{
                temp[0]=min(i[0],temp[0]);
                temp[1]=max(i[1],temp[1]);
            }
        }
        res.push_back(temp);
        return res;

    }
};
