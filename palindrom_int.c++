#include<iostream>
using namespace std;



class Solution {
public:
    bool isPalindrome(int x) {

        int reversed = 0, original, reminder;
        original = x;

        if(x >0 ){
            while(x != 0){
            reminder = x % 10;
            reversed = reversed * 10 + reminder;
            x/= 10;

        }
        }
        cout<<reversed<<" "<<original<<endl;
        
        if (original == reversed)
            return true;
        else
            return false;
        
    }
};

int main(int argc, char){

    Solution S;
    int x= -121;
    bool result = S.isPalindrome(x);
    if(result == true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }    

    return 0;
}