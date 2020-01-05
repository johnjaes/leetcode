class Solution {
public:
    bool isNumber(string s) {               
        regex check("\\s*[+-]?(\\d+\\.?|(\\.\\d+))\\d*(e[+-]?\\d+)?\\s*");        
        return regex_match(s, check);        
    }
};
