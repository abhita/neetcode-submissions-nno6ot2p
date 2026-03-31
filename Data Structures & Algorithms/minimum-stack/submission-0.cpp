class MinStack {
public:
    vector<pair<int,int>> stackElements;

    MinStack() {
        stackElements = {};
        
    }
    
    void push(int val) {
        int min = stackElements.size() > 0 && stackElements.back().second < val ? stackElements.back().second : val ;
        stackElements.push_back({val,min});
    }
    
    void pop() {
        if(stackElements.size() > 0){
            stackElements.pop_back();
        }
    }
    
    int top() {
        return stackElements.back().first;
    }
    
    int getMin() {
        return stackElements.back().second;
    }
};
