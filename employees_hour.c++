#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {

        int len = hours.size();
        int count = 0;
        for(int i = 0; i < len+1; i++){
            if(hours[i] >= target)
                count++;
        }
        return count;
    }
};


int main(int argc, char* argv[]){

    vector<int> emp_hour = {3,6,2,8,4};
    int target_hour = 4;

    Solution S;
    int result = S.numberOfEmployeesWhoMetTarget(emp_hour, target_hour);
    cout<<result<<endl;

    return 0;
}