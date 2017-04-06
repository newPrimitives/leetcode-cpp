/**
 * 155. Min Stack
 * 
 * Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 *
 * Problem URL: https://leetcode.com/problems/min-stack/
 */

#include <iostream>
#include <vector>
using namespace std;

class MinStack {
private:
    vector<int> elements;
    vector<int> min;

public:
    /** Initialize some default value here. */
    MinStack() {
        min.push_back(INT_MAX);
    }   

    /** 
     * Push x into elements vector and check if previous value in min is less than current x. If yes, 
     * push X into min, else duplicate the last min value, to have the same number of elements in both stack.
    */
    void push(int x) {
        elements.push_back(x);
        if (x < min.back()) {
            min.push_back(x);
        } else {
            min.push_back(min.back());
        }
    }
    
    /**
     * Simply removes top elements in both vectors.
     */
    void pop() {
        elements.pop_back();
        min.pop_back();
    }
    
    /**
     * Returns the top element of the stack 
     * @return Integer, top stack element. 
     */
    int top() {
        return elements.back();
    }
    
    /**
     * Returns the minimum element from the stack. 
     * @return Integer, top stack element. 
     */
    int getMin() {
        return min.back();
    }
};

/**
 * Do not include this when submiting to Leetcode 
 */
int main() { 
   MinStack min;
   min.push(1);
   min.pop();
   int param1 = min.top();
   int param2 = min.getMin();

   return 0;
}