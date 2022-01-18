class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int k = flowerbed.size();
        if(n==0)
            return true;
        if(n==1 && k==1 && flowerbed[0]==0)
              return true;
        for(int i=0;i<k-1;i++){
            if(flowerbed[i]==0 && flowerbed[i+1]!=1 ){
                if(i==0){
                    //flowerbed[i]=1;
                     flowerbed[i]=1;
                        if(n==0){
                             return true;
                        }
                    n--;
                }else{
                    if(flowerbed[i-1]!=0){
                     continue;   
                    }
                    else{
                         flowerbed[i]=1;
                        if(n==0){
                             return true;
                        }
                    n--;
                        
                    }
                }
                
               
            }
        }
        if(flowerbed[k-1]==0 && flowerbed[k-2]==0 && n==1){
            return true;
        }
        
        if(n!=0){
            return false;
        }
        return true;
        
    }
};