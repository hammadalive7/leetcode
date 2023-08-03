#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sum;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                sum = nums[i] + nums[j];
                if(sum == target){
                    result.push_back(i);
                    result.push_back(j);
                
                    return result;
                }
            }
        }

        
        
    }
};


int main(int argc, char *argv[]){
    Solution S;

    vector<int> nums = {2,3,6,4};
    int target = 10;


    vector<int> result = S.twoSum(nums, target);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << endl;
    }

    return 0;
}