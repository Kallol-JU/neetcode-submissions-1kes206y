class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ansArr ; 
        int n  = nums.size();


        for(int i=0; i<n-1; i++){
           for(int j=i+1; j<n;j++){
            if(nums[i] + nums[j] == target){
                ansArr.push_back(i);
                ansArr.push_back(j);
                return ansArr;
            }
          }
        }

        return ansArr;

    }
};
