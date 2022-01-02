class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       vector<int> mp(60,0); int n = time.size();
       // int res=0;
        for(int i=0;i<n;i++){
            time[i]=time[i]%60;
            mp[time[i]]++;
        }
        int tempZero = ((mp[0])*(mp[0]-1))/2;
        int tempThirty = ((mp[30]) *(mp[30]-1) )/2;
        int res = tempZero+tempThirty;
        for(int i=1;i<=29;i++){
           res = res +((mp[i])*(mp[60-i]));
        }
        return res;
    }
};