class Solution {
public:
    int reverse(int x) {
        int minus=0;
        long long xx=x;
        if(xx<0){
            xx*=-1;
            minus=1;
        }
        cout<<xx<<endl;
        long long a=0x7fffffff;
        cout<<a<<endl;
        if(xx>a)
            return 0;
        queue<int> t;
        while(xx!=0){
            int tt=xx%10;
            xx/=10;
            t.push(tt);
        }
        long long res=0;
        while(!t.empty()) {
            res*=10;
            res+=t.front();
            t.pop();
        }
        if(res>a)
            return 0;
        if(minus)
            res*=-1;
        return res;
    }
};