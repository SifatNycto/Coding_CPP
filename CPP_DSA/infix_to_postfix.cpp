#include <iostream>
#include <string>
// #include <stack>

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
int main()
{
    std::string init_stack;
    std::string operator_stack;
    std::string pf_stack;

    std::cin >> init_stack;

    // A+B/C*D-E/(F+G)  initial
    // ABC/D*+EFG+/-    final

    char op = '(';
    char cp = ')';
    char exp = '^';     // 3
    char ast = '*';     // 2
    char div = '/';     // 2
    char mod = '%';     // 2
    char sum = '+';     // 1
    char sub = '-';


    
    for (int i = 0; i < init_stack.size(); i++)
    {
        if (init_stack[i] != op && init_stack[i] != cp && init_stack[i] != exp && init_stack[i] != ast && init_stack[i] != div && init_stack[i] != mod && init_stack[i] != sum && init_stack[i] != sub)
        {
            pf_stack.push_back(init_stack[i]);
        }
        else 
        {
            operator_stack.push_back(init_stack[i]);

            for (int j = 0; j < operator_stack.size(); j++)
            {

            }
        }
    }


    std::cout << pf_stack;
    std::cout << operator_stack;


    return 0;
}




