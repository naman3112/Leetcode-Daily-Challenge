class Solution {
public:
    string addBinary(string a, string b) {
        string c="" ; 
        int check=min(a.size(),b.size());
        int alen=a.size()-1, blen=b.size()-1;
          int carry=0;
        while(alen>=0 || blen>=0){
             
                int anum=alen>=0?a[alen]-'0':0;
                int bnum=blen>=0?b[blen]-'0':0;
              int tempans=anum+bnum+carry;
                int ans = (anum+bnum+carry)%2;

           // tempans=tempans|carry;
                            cout<<"tempans is "<<tempans<<endl;
                carry=(tempans)/2;
                c = to_string(ans)+c;
                cout<<"c at this step is "<<c<<endl;
            alen--; blen--;
            }
        if(carry>0){
            c=to_string(1)+c;
        }
return c;
        
    }
};