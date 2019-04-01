class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin() , num1.end());
        reverse(num2.begin() , num2.end());
        while(num1.size() > num2.size())
        {
            num2 += '0';
        }
        while(num1.size() < num2.size())
        {
            num1 += '0';
        }
        
        int plus = 0;
        for(int i = 0 ; i < num1.size() ; i++)
        {
            int n1 = num1[i] - 48;
            int n2 = num2[i] - 48;
            int sum = n1 + n2 + plus;
            plus = sum/10;            
            num1[i] = (char)(sum%10+48);
        }
        if(plus > 0) { num1 += (char)(plus+48); }
        reverse(num1.begin() , num1.end());
        return num1;
    }
};
