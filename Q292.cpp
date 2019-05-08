class Solution {
public:
    bool canWinNim(int n) {
        
        if(n%4==0)              //multiples of 4 always win the game
            return false;
        return true;
    }
};
