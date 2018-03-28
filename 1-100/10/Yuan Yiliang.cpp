class Solution {
public:
    string ss,pp;
    bool check(string s, string p, int a){
        for(int i=0;i<=a;i++){
            if(i>=s.size() || i>=p.size() || (s[i]!=p[i] &&p[i]!='.') )
                return false;
        }
        return true;
    }
    
    bool isMatch(string s, string p) {
        //cout<<s<<" "<<p<<endl;
        int id1=0,id2=0;
        int k=p.find("*");
        if(k==p.npos){
            if(s.size()!=p.size())return false;
            return check(s,p,p.size()-1);
        }
        else{
            
            if(!check(s,p,k-2))
                return false;
            if(s.size()==0)
                return isMatch(s,p.substr(k+1));
            
            char c=s[k-1];
            if(c!=p[k-1] && p[k-1]!='.'){
                //cout<<k;
                //cout<<s.substr(k-1)<<"\n"<<p.substr(k+1)<<endl;
                return isMatch(s.substr(k-1),p.substr(k+1));
            }
            int i=k-1;
            if(p[k-1]=='.')
                for(int kk=k-1;kk<=s.size();kk++)
                    if(isMatch(s.substr(kk),p.substr(k+1))==true)
                        return true;
            while(i<s.size() && c==s[i]) i++;
            i--;//k-1~i same
           // cout<<"i:"<<i<<"k:"<<k<<endl;
           // cout<<s<<" "<<p<<endl;
            for(int kk=k-1;kk<=i+1;kk++)
                if(isMatch(s.substr(kk),p.substr(k+1))==true)
                    return true;
            return false;
            
        }
        
    }
};