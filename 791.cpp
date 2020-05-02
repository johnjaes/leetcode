class Solution {
public:
    string customSortString(string S, string T) {
        map<char, int> letter_order;
        for(int i = 0 ; i < S.length() ; i++)
        {
            letter_order[S[i]] = i; 
        }
        for(int i = 0 ; i < T.length() ; i++)
        {
            if(letter_order.find(T[i]) == letter_order.end() ) { continue; }
            for(int j = i ; j < T.length() ; j++)
            {
                if(letter_order.find(T[j]) == letter_order.end() ) { continue; }
                if(letter_order[T[i]] > letter_order[T[j]] )
                {
                    char temp = T[i];
                    T[i] = T[j];
                    T[j] = temp;
                }
            }
        }
        
        return T;
    }
};
