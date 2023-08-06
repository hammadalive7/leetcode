#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        return num%9 == 0? 9 : num%9;
    }
};

int main(int argc, char* argv[]){        
    int num = 299;                                         
    Solution S;                    
    int r = S.addDigits(num);  
    cout<<"result: "<<r<<endl;     

    return 0;                       
}