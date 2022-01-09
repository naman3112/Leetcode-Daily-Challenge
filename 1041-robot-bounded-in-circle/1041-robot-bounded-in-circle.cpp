class Solution {
public:
    bool isRobotBounded(string instructions) {
        vector<vector<int>> dir = {{0,1}, {-1, 0}, {0, -1}, {1,0}};
        int x=0,y=0,i=0;// i is or maintaing directions
        
        for(int s=0;s<instructions.size();s++){
            if(instructions[s]=='L'){
                       i=(i+1)%4;           //Dry run an xample (i%4) IS FOR for checking on left turns and not more
            }else if(instructions[s]=='R'){// than 4 as our direction array has size not greater than that
                i=(i+3)%4;
            }else{
                  x=x+dir[i][0];
                  y=y+dir[i][1];
            }
        }
        
        return x==0&&y==0||i!=0;
    }
};