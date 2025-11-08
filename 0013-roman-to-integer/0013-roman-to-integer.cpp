class Solution { 
public:
    int romanToInt(string s) {
        int res = 0;
        int len = s.length();
        
        for (int i = 0; i < len; i++) {
            int val = 0;
            
            if (s[i] == 'I') val = 1;
            else if (s[i] == 'V') val = 5;
            else if (s[i] == 'X') val = 10;
            else if (s[i] == 'L') val = 50;
            else if (s[i] == 'C') val = 100;
            else if (s[i] == 'D') val = 500;
            else if (s[i] == 'M') val = 1000;
            
            // If next symbol is larger, subtract current value
            if (i + 1 < len) {
                int nextVal = 0;
                if (s[i+1] == 'I') nextVal = 1;
                else if (s[i+1] == 'V') nextVal = 5;
                else if (s[i+1] == 'X') nextVal = 10;
                else if (s[i+1] == 'L') nextVal = 50;
                else if (s[i+1] == 'C') nextVal = 100;
                else if (s[i+1] == 'D') nextVal = 500;
                else if (s[i+1] == 'M') nextVal = 1000;
                
                if (val < nextVal)
                    res -= val;
                else
                    res += val;
            } else {
                res += val;
            }
        }
        return res;
    }
};