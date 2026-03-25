#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was the C++ created?", 
                             "2. Who invented C++?", 
                             "3. What is the predecessor of C++?", 
                             "4. Is the Earth flat?"};
    
    std::string options[][4] = {{"a. 1969", "b. 1975", "c. 1985", "d. 1989"}, 
                                {"a. Guido van Rossum", "b. Bjarn Stroustrup", "c. Jhon Carmack", "d. Mark Zuckerburg"},
                                {"a. C", "b. C+", "c. C--", "d. B++"},
                                {"a. Yes", "b. No", "c. Sometimes", "d. What is Earth?"}};
    
    char answer[] = {'c', 'b', 'a', 'b'};

    int size_question = sizeof(questions) / sizeof(questions[0]);
    int size_option = sizeof(options[0]) / sizeof(options[0][0]);

    char choice;
    int points = 0;

    for (int i = 0; i < size_question; i++)
    {
        std::cout << std::endl << std::endl << "+----------------------------------+";
        std::cout << std::endl << questions[i];
        std::cout << std::endl << "+----------------------------------+";
        std::cout << std::endl;

        for (int j = 0; j < size_option; j++)
        {
            std::cout << std::endl << options[i][j];
        }

        std::cout << std::endl << "choise: ";
        std::cin >> choice;
        choice = tolower(choice);

        if (choice == answer[i])
        {
            points++;
        }
        else
        {
            std::cout << "wrong";
            std::cout << std::endl << "answer: " << answer[i];
        }
    }

    std::cout << std::endl;

    std::cout << std::endl << "+------------------------------+";
    std::cout << std::endl << "|       >> Results <<";
    std::cout << std::endl << "|   Correct Answers: " << points;
    std::cout << std::endl << "|   Number Of Questions: " << size_question;
    std::cout << std::endl << "|   Your Score: " << (points / (float)size_question) * 100 << "%";
    std::cout << std::endl << "+------------------------------+";
    return 0;
}