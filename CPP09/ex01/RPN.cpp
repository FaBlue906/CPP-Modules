#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &r)
{
    *this = r;
}

RPN &RPN::operator=(const RPN &r)
{
    this->_stack = r._stack;
    return (*this);
}

RPN::~RPN() {}

bool RPN::_ExpressionValid(std::string &e)
{
    int operands = 0, operators = 0;
    for (size_t i = 0; i < e.size(); i++)
    {
        bool isOperand = std::isdigit(e.at(i));
        bool isOperator = (e.at(i) == '+' || e.at(i) == '-' || e.at(i) == '*' || e.at(i) == '/');
        
        if (e.at(i) == ' ')
            continue;
        if (isOperand)
            operands++;
        else if (isOperator)
            operators++;
        else
            return (false);
    }
    return (operators = operands - 1);
}

int RPN::_ft_stoi(const std::string &str)
{
    int num;
    std::stringstream ss(str);

    ss >> num;
    return (num);
}

long RPN::run(std::string &e)
{
    int res;

    if (!_ExpressionValid(e))
        throw RPN::IncompleteExpressionException();
    for (size_t i = 0; i < e.size(); i++)
    {
        bool isOperand = std::isdigit(e.at(i));
        bool isOperator = (e.at(i) == '+' || e.at(i) == '-' || e.at(i) == '*' || e.at(i) == '/');
        
        if (e.at(i) == ' ')
            continue;
        if (isOperator)
        {
            if (this->_stack.size() < 2)
                throw RPN::IncompleteExpressionException();
            int right = this->_stack.top();
            
            this->_stack.pop();
    
            int left = this->_stack.top();
            
            this->_stack.pop();

            switch (e.at(i))
            {
            case '+':
                res = left + right;
                break;

            case '-':
                res = left - right;
                break;
            
            case '*':
                res = left * right;
                break;
            
            case '/':
                if (right == 0)
                    throw RPN::DivisionByZeroException();
                res = left / right;
                break;

            default:
                break;
            }
            this->_stack.push(res);
        }
        else if (isOperand)
        {
            int num = _ft_stoi(&e.at(i));
            
            if (num > 9)
                throw RPN::IncompleteExpressionException();
            this->_stack.push(num);
        }
    }
    res = this->_stack.top();
    return (res);
}

const char* RPN::DivisionByZeroException::what() const throw()
{
    return ("Division by 0 is impossible.");
}

const char* RPN::IncompleteExpressionException::what() const throw()
{
    return ("Calculation expression is invalid.");
}