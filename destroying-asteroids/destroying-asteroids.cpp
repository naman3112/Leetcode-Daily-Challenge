class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
      sort(ast.begin(), ast.end()); int n = ast.size();
        long long res=mass;
        for(int i=0;i<n;i++){
            if(ast[i]>res){
                return false;
            }
            res+=ast[i];
        }
        return true;
    }
};