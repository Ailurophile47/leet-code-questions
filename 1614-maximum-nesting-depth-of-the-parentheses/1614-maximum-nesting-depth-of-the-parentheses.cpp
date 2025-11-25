class Solution {
public:
    int maxDepth(string s) 
    {
        int n= s.length(),c=0,m=0;
        for(int i =0;i<n;i++)
        {
            if(s[i]=='(')
                c++;
            if(s[i]==')')
                c--;
            if(c>m)
                m=c;
        } 
        return m ;

    }
};