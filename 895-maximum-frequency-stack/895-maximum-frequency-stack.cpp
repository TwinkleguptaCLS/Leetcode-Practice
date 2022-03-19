class FreqStack {
public:
    int max_freq = INT_MIN;
    unordered_map<int,int>freq_mp;
    map<int,stack<int>>setMap;
    FreqStack() {
        
    }
    
    void push(int val) {
        int freq = freq_mp[val]+1;
        freq_mp[val] = freq;
        if(freq>max_freq)
        {
            max_freq=freq;
        }
        setMap[freq].push(val);
    }
    
    int pop() {
        int top = setMap[max_freq].top();
        setMap[max_freq].pop();
        freq_mp[top]--;
        
        if(setMap[max_freq].size() == 0)
            --max_freq;
        return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */ 