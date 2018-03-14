class Solution {
public:
    int ret(char a){
        return (a=='X')?0:1;
    }
    bool validTicTacToe(vector<string>& board) {
        int xx=0;
        int oo=0;
        for(int i =0; i<3; i++)
            for(int j=0; j<3; j++){
                if(board[i][j]=='X')
                    xx++;
                if(board[i][j]=='O')
                    oo++;
            }
        
        if(!(xx-oo==0 || xx-oo==1))
            return false;
        
        int ss[2];
        ss[0]=ss[1]=0;
        for(int i=0; i<3; i++)
            if(board[i][1]==board[i][2]
              && board[i][2]==board[i][0]
              && board[i][1]!=' ')
                ss[ret(board[i][1])]++;
        for(int i=0; i<3; i++)
            if(board[1][i]==board[2][i]
              && board[2][i]==board[0][i]
              && board[1][i]!=' ')
                ss[ret(board[1][i])]++;
        if(board[1][1]==board[2][2]
              && board[2][2]==board[0][0]
              && board[1][1]!=' ')
                ss[ret(board[1][1])]++;
        
        if(board[1][1]==board[2][0]
              && board[2][0]==board[0][2]
              && board[1][1]!=' ')
                ss[ret(board[1][1])]++;
        
        if(ss[0]>0 && ss[1]>0)
            return false;
        if(ss[0]>ss[1] && xx==oo)
            return false;
        if(ss[0]<ss[1] && xx!=oo)
            return false;
        return true;
    }
};