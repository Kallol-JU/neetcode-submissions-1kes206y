class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ansArr;
        int n = numbers.size();

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(numbers[i] + numbers[j] == target){
                    ansArr.push_back(i+1);
                    ansArr.push_back(j+1);
                    return ansArr;
                }
            }
        }
        return ansArr;
    }
};
