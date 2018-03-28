class Solution {
public:
    string replace(char a ,char b, char c, char aa, char bb,  char cc,string s){
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]==a) res.push_back(aa);
            if(s[i]==b) res.push_back(bb);
            if(s[i]==c) res.push_back(cc);
            if(s[i]!=a&&s[i]!=b&&s[i]!=c) res.push_back(s[i]);
        }
        return res;
    }
    
    string turn10(int num){
        string res="";
        if(num<4)
            for(int i=1;i<=num;i++)
                res.push_back('I');
        if(num==4)
            res+="IV";
        
        if(num>=5&&num<9){
            res.push_back('V');
            for(int i=6;i<=num;i++)
                res.push_back('I');
        }
        if(num==9)
            res+="IX";
        return res;
    }
    
    string turn100(int num){
        string res=turn10(num/10);
        res=replace('I','V','X','X','L','C',res);
        return res;
    }
    string turn1000(int num){
        string res=turn100(num/10);
        res=replace('X','L','C','C','D','M',res);
        return res;
    }
    string turn10000(int num){
        string res=turn1000(num/10);
        res=replace('C','D','M','M','*','*',res);
        return res;
    }
    
    string intToRoman(int num) {
        string res="";
        int a=num/1000*1000;
        cout<<a;
        cout<<turn10000(a);
        int b=(num-a)/100*100;
        cout<<b;
        cout<<turn1000(b);
        int c=(num-a-b)/10*10;
        cout<<c;
        cout<<turn100(c);
        int d=(num-a-b-c);
        cout<<d;
        cout<<turn10(d);
        res+=( turn10000(a)+turn1000(b)+turn100(c)+turn10(d));
        return res;
    }
};