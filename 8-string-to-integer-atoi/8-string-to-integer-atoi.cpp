class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        // spaces solve
       while(i<s.size() && s[i]==' '){
           i++;
       }
        bool pos=true;
      
        int res=0;
      
        if(i<s.size() && s[i]=='+'){
            pos=true;
            i++;
        }else if(i<s.size() && s[i]=='-'){
            pos=false;
            i++;
        }
        
        
        while(i<s.size() && isdigit(s[i])){
            int dig = s[i]-'0';
                  if(res>INT_MAX/10 ||(res==INT_MAX/10 && dig>INT_MAX%10)){
                      if(pos==true){
                          return INT_MAX;
                      }else{
                          return INT_MIN;
                      }
                  }      
            res=res*10+dig;
            
            i++;
        }
        
        if(pos==false){
            return -1*res;
        }
        
        return res;
    }
};