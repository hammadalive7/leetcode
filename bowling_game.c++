#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int isWinner(vector<int>& p1, vector<int>& p2){


        if(p1.size() == 1){
            if(p1[0] == p2[0]) return 0;
            else return p1[0] > p2[0]? 1:2;
            
        }
        int P1sum = 0, P2sum = 0;

        P1sum += p1[0];
        P2sum += p2[0];

        if(p1[0] == 10) P1sum += (2 * p1[1]);
        else P1sum += p1[1];

        if(p2[0] == 10) P2sum += (2 * p2[1]);
        else P2sum += p2[1];
    


        for(int i = 2; i < p1.size(); i++){
            if(p1[i-1] == 10|| p1[i-2] == 10){
                P1sum = P1sum + 2 * p1[i];
            }else{
                P1sum = P1sum + p1[i];
            }
        }

        for(int i = 2; i < p2.size(); i++){
            if(p2[i-1] == 10|| p2[i-2] == 10){
                P2sum = P2sum + 2 * p2[i];
            }else{
                P2sum = P2sum + p2[i];
            }
        }
      
        if(P1sum == P2sum) {
            return 0;
        }

        return P1sum > P2sum ? 1 : 2;

    }
};


int main(int argc, char** argv){

    vector<int> player1 = {4,10,7,9};
    vector<int> player2 = {6,5,2,3};

    Solution S;
    int result = S.isWinner(player1, player2);
    cout<<result<<endl;

    return 0;
}