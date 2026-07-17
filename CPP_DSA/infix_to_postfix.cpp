#include <iostream>
#include <string>
#include <stack>

// For Alphabets

    // (        4
    // ^        3
    // * / %    2
    // + -      1

    // 3 conditions
    /*
        1. two operators of same precedence can't stay together, last one will pop
        2. highest priority operator will not stay when lowest will come, highest will 
        3. if ')' found then pop all operators between '(' and ')'
    */

namespace opM {
    char op  = '(';
    char cp  = ')';
    char exp = '^';     // 3
    char ast = '*';     // 2
    char div = '/';     // 2
    char mod = '%';     // 2
    char sum = '+';     // 1
    char sub = '-';
}

namespace opV {
    int op  = 4;
    int cp  = 4;
    int exp = 3;
    int ast = 2;
    int div = 2;
    int mod = 2;
    int sum = 1;
    int sub = 1;
}

int main()
{
    std::string init_stack;
    std::string operator_stack;
    std::string postfix_stack;

    std::cin >> init_stack;

    // A+B/C*D-E/(F+G)  initial
    // ABC/D*+EFG+/-    final

    
    for (int i = 0; i < init_stack.size(); i++)
    {
        if (init_stack[i] != opM::op && 
            init_stack[i] != opM::cp && 
            init_stack[i] != opM::exp && 
            init_stack[i] != opM::ast && 
            init_stack[i] != opM::div && 
            init_stack[i] != opM::mod && 
            init_stack[i] != opM::sum && 
            init_stack[i] != opM::sub)
        {
            postfix_stack.push_back(init_stack[i]);
        }
        else 
        {
            operator_stack.push_back(init_stack[i]);
            for (int j = operator_stack.size() - 1; j >= 0; j--)
            {   
                // rule 3
                // (......) ')'
                if (operator_stack[j] == opM::cp)
                    for (int k = operator_stack.size() - 2; k >= 0; k--)
                    {
                        while (!operator_stack[opM::op])
                            postfix_stack.push_back(operator_stack[k]);
                    }
                // rule 1
                // ^ ^
                if (operator_stack[j] == opM::exp && operator_stack[j-1] == opM::exp)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // * *
                else if (operator_stack[j] == opM::ast && operator_stack[j-1] == opM::ast)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // * /
                else if (operator_stack[j-1] == opM::ast && operator_stack[j] == opM::div)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // * %
                else if (operator_stack[j-1] == opM::ast && operator_stack[j] == opM::mod)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();    
                // / *
                else if (operator_stack[j-1] == opM::div && operator_stack[j] == opM::ast)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // / %
                else if (operator_stack[j-1] == opM::div && operator_stack[j] == opM::mod)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // / /
                else if (operator_stack[j-1] == opM::div && operator_stack[j] == opM::div)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // % *
                else if (operator_stack[j-1] == opM::mod && operator_stack[j] == opM::ast)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // % /
                else if (operator_stack[j-1] == opM::mod && operator_stack[j] == opM::div)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // % %
                else if (operator_stack[j-1] == opM::mod && operator_stack[j] == opM::mod)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // + +
                else if (operator_stack[j-1] == opM::sum && operator_stack[j] == opM::sum)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // + -
                else if (operator_stack[j-1] == opM::sum && operator_stack[j] == opM::sub)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // - -
                else if (operator_stack[j-1] == opM::sub && operator_stack[j] == opM::sub)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                // - +
                else if (operator_stack[j-1] == opM::sub && operator_stack[j] == opM::sum)
                    postfix_stack.push_back(operator_stack[j]), operator_stack.pop_back();
                

                // rule 2
                // ^ *
                else if (operator_stack[j-1] == opM::exp && operator_stack[j] == opM::ast)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // ^ /
                else if (operator_stack[j-1] == opM::exp && operator_stack[j] == opM::div)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // ^ %
                else if (operator_stack[j-1] == opM::exp && operator_stack[j] == opM::mod)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // ^ +
                else if (operator_stack[j-1] == opM::exp && operator_stack[j] == opM::sum)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // ^ -
                else if (operator_stack[j-1] == opM::exp && operator_stack[j] == opM::sub)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // * +
                else if (operator_stack[j-1] == opM::ast && operator_stack[j] == opM::sum)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // * -
                else if (operator_stack[j-1] == opM::ast && operator_stack[j] == opM::sub)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // / +
                else if (operator_stack[j-1] == opM::div && operator_stack[j] == opM::sum)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // / -
                else if (operator_stack[j-1] == opM::div && operator_stack[j] == opM::sub)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // % +
                else if (operator_stack[j-1] == opM::mod && operator_stack[j] == opM::sum)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                // % -
                else if (operator_stack[j-1] == opM::mod && operator_stack[j] == opM::sub)
                    postfix_stack.push_back(operator_stack[j-1]), operator_stack.pop_back();
                


            }
            
        }
    }


    std::cout << postfix_stack;
    std::cout << operator_stack;


    return 0;
}




