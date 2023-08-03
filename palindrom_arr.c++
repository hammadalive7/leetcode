#include<iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(int arr[], int size) {
        int j = size -1;
        int len = size;
        bool result;
        for(int i = 0; i < len; i++){
            if(arr[i] == arr[j]){
                if(i == j){
                    return result;
                }
                result = true;
                j--;

            }else{
                result = false;
                return result;
            }
        }
        return result;   
    }
};

int main(int argc, char *argv[]){
    Solution S;
    int arr[6] = {1,2,3,1,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool result = S.isPalindrome(arr, size);
    if(result == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}