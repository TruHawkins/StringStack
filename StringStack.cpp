#include "StringStack.h"

#include <string>
#include <vector>

StringStack::StringStack()
{
    std::vector<std::string> myStack;
}

std::string StringStack::pop()
{
    std::string s = myStack.back();
    myStack.erase(myStack.begin() + myStack.size());
    return s;
}

void StringStack::push(std::string newString)
{
    myStack.push_back(newString);
}

bool StringStack::isEmpty()
{
    return myStack.empty();
}