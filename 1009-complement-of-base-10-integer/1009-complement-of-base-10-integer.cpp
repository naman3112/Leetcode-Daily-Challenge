class Solution {
public:
    int bitwiseComplement(int N) {
       if(N==0)
            return 1;
        
        //<< left shifft product
        // >> right shifft divide by 2
        int ans=N;
        int cool=0;
        while(N>0){
         cool= cool<<1;
        cool=cool|1;
           N= N>>1;
            }
        return cool-ans; 
    }
};