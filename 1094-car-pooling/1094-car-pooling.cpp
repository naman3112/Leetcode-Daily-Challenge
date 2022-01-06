class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> mp(10001,0);
        for(int i=0;i<trips.size();i++){
            mp[trips[i][1]]+=trips[i][0];
            mp[trips[i][2]]-=trips[i][0];    
        }
        //int sum 
        for(int i=0;i<10001;i++){
            capacity-=mp[i];
            if(capacity<0){
                return false;
            }
        }
        return true;
    }
};