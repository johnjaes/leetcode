class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> main_s;
    MinStack() {
        
    }
    
    void push(int x) {
        main_s.push_back(x);
    }
    
    void pop() {
        main_s.erase(main_s.begin() + main_s.size() - 1);
    }
    
    int top() {
        return main_s[main_s.size() - 1];
    }
    
    int getMin() {
        if(main_s.size() == 0) { return 0; }
        int min_n = main_s[0];
        for(int i = 1 ; i < main_s.size() ; i++)
        {
            min_n = min(min_n , main_s[i]);
        }
        return min_n;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
