#ifndef STRINGSTACK_H
#define STRINGSTACK_H

#include "TrueStack.h"
#include<string>
#include<vector>

class StringStack : TrueStack
{
    public:
        StringStack();
        std::string pop();
        void push(std::string newString);
        bool isEmpty();
        
    private:
        std::vector<std::string> myStack;
    
};
#endif