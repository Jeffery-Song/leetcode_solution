class Solution {
public:
    int romanToInt(string s) {
        if(s.size()==0)return 0;
        string ss=s;
        int a=0;
        int b=0;
        int res=0;
        
        if(ss.find("M")!=ss.npos){
            b=ss.find("M");
            int rec=b+1;
            res+=1000;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='M'){res+=1000;
                rec++;}
                else break;
            }
            res-=100*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("M")!=ss.npos){
            a=0;
            b=ss.find("M");
            int rec=b+1;
            cout<<"111"<<b;
            res+=1000;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='M'){res+=1000;
                rec++;}
                else break;
            }
            res-=100*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("D")!=ss.npos){
            a=0;
            b=ss.find("D");
            int rec=b+1;
            res+=500;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='D'){res+=500;
                rec++;}
                else break;
            }
            res-=100*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("D")!=ss.npos){
            a=0;
            b=ss.find("D");
            int rec=b+1;
            res+=500;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='D'){res+=500;
                rec++;}
                else break;
            }
            res-=100*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        cout<<res<<" "<<ss<<endl;
        if(ss.find("C")!=ss.npos){
            a=0;
            b=ss.find("C");
            cout<<b<<"\n";
            int rec=b+1;
            res+=100;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='C'){res+=100;
                rec++;}
                else break;
            }
            res-=10*(b-a);
            a=rec;
            cout<<rec<<"\n";
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("C")!=ss.npos){
            a=0;
            b=ss.find("C");
            cout<<b<<"\n";
            int rec=b+1;
            res+=100;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='C'){res+=100;
                rec++;}
                else break;
            }
            res-=10*(b-a);
            a=rec;
            cout<<rec<<"\n";
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        cout<<res<<" "<<ss<<endl;
        if(ss.find("L")!=ss.npos){
            a=0;
            b=ss.find("L");
            int rec=b+1;
            res+=50;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='L'){res+=50;
                rec++;}
                else break;
            }
            res-=10*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("L")!=ss.npos){
            a=0;
            b=ss.find("L");
            int rec=b+1;
            res+=50;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='L'){res+=50;
                rec++;}
                else break;
            }
            res-=10*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        cout<<res<<" "<<ss<<endl;
        if(ss.find("X")!=ss.npos){
            a=0;
            b=ss.find("X");
            int rec=b+1;
            res+=10;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='X'){res+=10;
                rec++;}
                else break;
            }
            res-=1*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("X")!=ss.npos){
            a=0;
            b=ss.find("X");
            int rec=b+1;
            res+=10;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='X'){res+=10;
                rec++;}
                else break;
            }
            res-=1*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        cout<<res<<" "<<ss<<endl;
        if(ss.find("V")!=ss.npos){
            a=0;
            b=ss.find("V");
            int rec=b+1;
            res+=5;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='V'){res+=5;
                rec++;}
                else break;
            }
            res-=1*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("V")!=ss.npos){
            a=0;
            b=ss.find("V");
            int rec=b+1;
            res+=5;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='V'){res+=5;
                rec++;}
                else break;
            }
            res-=1*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        cout<<res<<" "<<ss<<endl;
        if(ss.find("I")!=ss.npos){
            a=0;
            b=ss.find("I");
            int rec=b+1;
            res+=1;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='I'){res+=1;
                rec++;}
                else break;
            }
            res-=1*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        if(ss.find("I")!=ss.npos){
            a=0;
            b=ss.find("I");
            int rec=b+1;
            res+=1;
            for(int i=b+1;i<ss.size();i++){
                if(ss[i]=='I'){res+=1;
                rec++;}
                else break;
            }
            res-=1*(b-a);
            a=rec;
            if(rec>=ss.size())
                return res;
            else ss=ss.substr(a);
        }
        
        return res;
    }
};