#include <stack>

class MyQueue {
private:
    std::stack<int> inputStack;
    std::stack<int> outputStack;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inputStack.push(x);
    }
    
    int pop() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        
        if (!outputStack.empty()) {
            int frontElement = outputStack.top();
            outputStack.pop();
            return frontElement;
        }
        
        return -1;
    }
    
    int peek() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
        
        if (!outputStack.empty()) {
            return outputStack.top();
        }
        
        return -1;
    }
    
    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }
};
