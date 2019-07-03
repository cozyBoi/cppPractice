#ifndef stack_hpp
#define stack_hpp

class stack{
private:
    int top;
    int contents[100];
public:
    stack();
    void push(int);
    int pop();
    int size();
};

#endif /* stack_hpp */
