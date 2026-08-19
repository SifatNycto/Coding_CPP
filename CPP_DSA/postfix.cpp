// #include <iostream>
// #include <stack>
// #include <string>
// #include <cctype>

// class InfixToPostfix {
//     public:
//         std::stack<char> st;

//         int precedence(char op)
//         {
//             if (op == '^') return 3;
//             if (op == '*' || op == '/' || op == '%') return 2;
//             if (op == '+' || op == '-') return 1;

//             return 0;
//         }

//         std::string convert(std::string infix)
//         {
//             std::string postfix = "";

//             for (char ch : infix)
//             {
//                 if (isalnum(ch))
//                 {
                    
//                 }
//             }
//         }
// };







































#include <iostream>
#include <string>
#include <stack>
#include <cctype>


class InfixToPostfix {
    public:
        std::stack<char> st;

        int precedence(char op)
        {
            if (op == '^')
                return 3;
            if (op == '*' || op == '/')
                return 2;
            if (op == '+' || op == '-')
                return 1;
            return 0;
        }

        std::string convert(std::string infix)
        {
            std::string postfix = "";

            for (char ch : infix)
            {
                if (isalnum(ch))  
                {
                    postfix += ch;
                }
                else if (ch == '(')
                {
                    st.push(ch);
                }
                else if (ch == ')')
                {
                    while (!st.empty() && st.top() != '(')
                    {
                        postfix += st.top();
                        st.pop();
                    }
                    if (!st.empty())
                        st.pop();
                }

                else
                {
                    while (!st.empty() &&
                        precedence(st.top()) >= precedence(ch))
                    {
                        postfix += st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
            }

            while (!st.empty())
            {
                postfix += st.top();
                st.pop();
            }

            return postfix;
        }
};

int main()
{
    InfixToPostfix obj;
    std::string infix;

    std::cout << "Enter Infix Expression: ";
    std::cin >> infix;

    std::cout << "Postfix Expression: " << obj.convert(infix) << std::endl;

    return 0;
}