#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <exception>
#include <stack>

class RPN
{
    private:
        std::stack<int> _stack;
        bool _ExpressionValid(std::string &e);
        int _ft_stoi(const std::string &str);

    public:
        RPN();
        RPN(const RPN &r);
        RPN &operator=(const RPN &r);
        ~RPN();

        class DivisionByZeroException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class IncompleteExpressionException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        long run(std::string &e);
};

#endif