// #include <iostream>
// #include <string>

// int main()
// {
//     std::string s;
    
//     std::cout << "Enter a string: ";
//     std::getline(std::cin, s);

//     std::cout << "Your entered: " << s << std::endl;

//     s.push_back('X');

//     std::cout << "After push back: " << s << std::endl;


//     while (s.size() != 0)
//     {
//         s.pop_back();

//         std::cout << "After pop back: " << s << std::endl;
//     }

//     return 0;
// }












#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <conio.h>

using namespace std;

// ================= COLORS =================
enum Colors
{
    RED = 12,
    GREEN = 10,
    BLUE = 9,
    YELLOW = 14,
    CYAN = 11,
    WHITE = 15,
    MAGENTA = 13
};

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void color(int c)
{
    SetConsoleTextAttribute(h, c);
}

// ================= CLASS =================
class TicTacToe
{
private:
    char board[3][3];

    string player1;
    string player2;

    int player1Score = 0;
    int player2Score = 0;
    int drawScore = 0;

    vector<string> history;

public:

    // ================= CLEAR SCREEN =================
    void clearScreen()
    {
        system("cls");
    }

    // ================= LOADING =================
    void loading(string text)
    {
        color(CYAN);

        cout << "\n" << text;

        for (int i = 0; i < 5; i++)
        {
            cout << ".";
            Sleep(250);
        }

        cout << "\n";

        color(WHITE);
    }

    // ================= LOGO =================
    void logo()
    {
        color(BLUE);

        cout << R"(

TTTTTTTT  IIIII   CCCCC        TTTTTTTT   AAAAA    CCCCC
   TT       I    CC              TT      AA   AA  CC
   TT       I    CC              TT      AAAAAAA  CC
   TT       I    CC              TT      AA   AA  CC
   TT     IIIII   CCCCC          TT      AA   AA   CCCCC

TTTTTTTT   OOOOO   EEEEE
   TT     OO   OO  EE
   TT     OO   OO  EEEE
   TT     OO   OO  EE
   TT      OOOOO   EEEEE

)";

        color(CYAN);

        cout << "=================================================\n";
        cout << "              ADVANCED TIC TAC TOE               \n";
        cout << "=================================================\n";

        color(WHITE);
    }

    // ================= RESET BOARD =================
    void resetBoard()
    {
        char ch = '1';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = ch++;
            }
        }
    }

    // ================= PRINT BOARD =================
    void printBoard()
    {
        color(YELLOW);

        cout << "\n";

        for (int i = 0; i < 3; i++)
        {
            cout << "        ";

            for (int j = 0; j < 3; j++)
            {
                cout << " " << board[i][j] << " ";

                if (j < 2)
                    cout << "|";
            }

            cout << "\n";

            if (i < 2)
                cout << "        ---+---+---\n";
        }

        cout << "\n";

        color(WHITE);
    }

    // ================= SCOREBOARD =================
    void scoreboard()
    {
        color(MAGENTA);

        cout << "\n=========================================\n";
        cout << "               SCOREBOARD                \n";
        cout << "=========================================\n";

        cout << " " << player1 << " : " << player1Score << "\n";
        cout << " " << player2 << " : " << player2Score << "\n";
        cout << " Draw Matches : " << drawScore << "\n";

        cout << "=========================================\n";

        color(WHITE);
    }

    // ================= CHECK WIN =================
    bool checkWin(char symbol)
    {
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == symbol &&
                board[i][1] == symbol &&
                board[i][2] == symbol)
                return true;
        }

        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == symbol &&
                board[1][i] == symbol &&
                board[2][i] == symbol)
                return true;
        }

        if (board[0][0] == symbol &&
            board[1][1] == symbol &&
            board[2][2] == symbol)
            return true;

        if (board[0][2] == symbol &&
            board[1][1] == symbol &&
            board[2][0] == symbol)
            return true;

        return false;
    }

    // ================= CHECK DRAW =================
    bool checkDraw()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != 'X' &&
                    board[i][j] != 'O')
                {
                    return false;
                }
            }
        }

        return true;
    }

    // ================= PLACE MOVE =================
    bool placeMove(int pos, char symbol)
    {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;

        if (board[row][col] != 'X' &&
            board[row][col] != 'O')
        {
            board[row][col] = symbol;
            return true;
        }

        return false;
    }

    // ================= SMART AI =================
    int smartMove()
    {
        // WINNING MOVE
        for (int i = 1; i <= 9; i++)
        {
            int row = (i - 1) / 3;
            int col = (i - 1) % 3;

            if (board[row][col] != 'X' &&
                board[row][col] != 'O')
            {
                char temp = board[row][col];
                board[row][col] = 'O';

                if (checkWin('O'))
                {
                    board[row][col] = temp;
                    return i;
                }

                board[row][col] = temp;
            }
        }

        // BLOCK PLAYER
        for (int i = 1; i <= 9; i++)
        {
            int row = (i - 1) / 3;
            int col = (i - 1) % 3;

            if (board[row][col] != 'X' &&
                board[row][col] != 'O')
            {
                char temp = board[row][col];
                board[row][col] = 'X';

                if (checkWin('X'))
                {
                    board[row][col] = temp;
                    return i;
                }

                board[row][col] = temp;
            }
        }

        // RANDOM MOVE
        vector<int> available;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != 'X' &&
                    board[i][j] != 'O')
                {
                    available.push_back(board[i][j] - '0');
                }
            }
        }

        int randomIndex = rand() % available.size();

        return available[randomIndex];
    }

    // ================= SAVE SCORES =================
    void saveGame()
    {
        ofstream file("scores.txt");

        file << player1 << " " << player1Score << endl;
        file << player2 << " " << player2Score << endl;
        file << drawScore << endl;

        file.close();
    }

    // ================= HISTORY =================
    void showHistory()
    {
        clearScreen();

        logo();

        color(GREEN);

        cout << "\n============= MATCH HISTORY =============\n\n";

        if (history.empty())
        {
            cout << " No Matches Played Yet.\n";
        }
        else
        {
            for (int i = 0; i < history.size(); i++)
            {
                cout << " " << i + 1 << ". " << history[i] << endl;
            }
        }

        color(WHITE);

        system("pause");
    }

    // ================= FRIEND MODE =================
    void playFriend()
    {
        clearScreen();

        cout << "\nEnter Player 1 Name : ";
        cin >> player1;

        cout << "Enter Player 2 Name : ";
        cin >> player2;

        char again;

        do
        {
            resetBoard();

            char current = 'X';

            while (true)
            {
                clearScreen();

                logo();
                scoreboard();
                printBoard();

                int pos;

                if (current == 'X')
                {
                    color(CYAN);
                    cout << player1 << "'s Turn (X)\n";
                }
                else
                {
                    color(RED);
                    cout << player2 << "'s Turn (O)\n";
                }

                color(WHITE);

                cout << "\nChoose Position (1-9) : ";

                while (!(cin >> pos))
                {
                    cin.clear();
                    cin.ignore(1000, '\n');

                    color(RED);
                    cout << "\nInvalid Input! Enter Number : ";
                    color(WHITE);
                }

                if (pos < 1 || pos > 9 || !placeMove(pos, current))
                {
                    color(RED);

                    cout << "\nInvalid Move!";

                    color(WHITE);

                    Sleep(1000);

                    continue;
                }

                if (checkWin(current))
                {
                    clearScreen();

                    logo();
                    printBoard();

                    if (current == 'X')
                    {
                        color(CYAN);

                        cout << "\n" << player1 << " Wins The Match!\n";

                        player1Score++;

                        history.push_back(player1 + " Won");
                    }
                    else
                    {
                        color(RED);

                        cout << "\n" << player2 << " Wins The Match!\n";

                        player2Score++;

                        history.push_back(player2 + " Won");
                    }

                    color(WHITE);

                    saveGame();

                    break;
                }

                if (checkDraw())
                {
                    clearScreen();

                    logo();
                    printBoard();

                    color(YELLOW);

                    cout << "\nThe Match Is Draw!\n";

                    drawScore++;

                    history.push_back("Match Draw");

                    color(WHITE);

                    saveGame();

                    break;
                }

                current = (current == 'X') ? 'O' : 'X';
            }

            scoreboard();

            cout << "\nPlay Again? (y/n) : ";
            cin >> again;

        } while (again == 'y' || again == 'Y');
    }

    // ================= COMPUTER MODE =================
    void playComputer()
    {
        clearScreen();

        cout << "\nEnter Your Name : ";
        cin >> player1;

        player2 = "Computer";

        char again;

        do
        {
            resetBoard();

            while (true)
            {
                clearScreen();

                logo();
                scoreboard();
                printBoard();

                int pos;

                color(CYAN);

                cout << player1 << "'s Turn (X)\n";

                color(WHITE);

                cout << "\nChoose Position (1-9) : ";

                while (!(cin >> pos))
                {
                    cin.clear();
                    cin.ignore(1000, '\n');

                    color(RED);
                    cout << "\nInvalid Input! Enter Number : ";
                    color(WHITE);
                }

                if (pos < 1 || pos > 9 || !placeMove(pos, 'X'))
                {
                    color(RED);

                    cout << "\nInvalid Move!";

                    color(WHITE);

                    Sleep(1000);

                    continue;
                }

                if (checkWin('X'))
                {
                    clearScreen();

                    logo();
                    printBoard();

                    color(CYAN);

                    cout << "\n" << player1 << " Wins The Match!\n";

                    player1Score++;

                    history.push_back(player1 + " Beat Computer");

                    color(WHITE);

                    saveGame();

                    break;
                }

                if (checkDraw())
                {
                    clearScreen();

                    logo();
                    printBoard();

                    color(YELLOW);

                    cout << "\nThe Match Is Draw!\n";

                    drawScore++;

                    history.push_back("Draw Against Computer");

                    color(WHITE);

                    saveGame();

                    break;
                }

                loading("Computer Thinking");

                int compMove = smartMove();

                placeMove(compMove, 'O');

                if (checkWin('O'))
                {
                    clearScreen();

                    logo();
                    printBoard();

                    color(RED);

                    cout << "\nComputer Wins The Match!\n";

                    player2Score++;

                    history.push_back("Computer Won");

                    color(WHITE);

                    saveGame();

                    break;
                }

                if (checkDraw())
                {
                    clearScreen();

                    logo();
                    printBoard();

                    color(YELLOW);

                    cout << "\nThe Match Is Draw!\n";

                    drawScore++;

                    history.push_back("Draw Against Computer");

                    color(WHITE);

                    saveGame();

                    break;
                }
            }

            scoreboard();

            cout << "\nPlay Again? (y/n) : ";
            cin >> again;

        } while (again == 'y' || again == 'Y');
    }

    // ================= SETTINGS =================
    void settings()
    {
        clearScreen();

        logo();

        color(GREEN);

        cout << "\n============= GAME CONTROLS =============\n\n";

        cout << "         1 | 2 | 3\n";
        cout << "        ---+---+---\n";
        cout << "         4 | 5 | 6\n";
        cout << "        ---+---+---\n";
        cout << "         7 | 8 | 9\n";

        cout << "\n=========================================\n";

        color(WHITE);

        system("pause");
    }

    // ================= ABOUT =================
    void about()
    {
        clearScreen();

        logo();

        color(GREEN);

        cout << "\n============= FEATURES =============\n\n";

        cout << " [1] Smart AI System\n";
        cout << " [2] Match History\n";
        cout << " [3] Save Score System\n";
        cout << " [4] Animated Loading\n";
        cout << " [5] Input Validation\n";
        cout << " [6] Beautiful Console UI\n";
        cout << " [7] Scoreboard System\n";
        cout << " [8] Replay Option\n";
        cout << " [9] Advanced Board Design\n";
        cout << " [10] OOP Based Structure\n";

        color(WHITE);

        cout << "\nPress Any Key To Return...";
        system("pause>nul");
    }

    // ================= MAIN MENU =================
    void menu()
    {
        srand(time(0));

        while (true)
        {
            clearScreen();

            logo();

            color(GREEN);

            cout << "\n1. Play With Friend\n";
            cout << "2. Play With Computer\n";
            cout << "3. Game Controls\n";
            cout << "4. Match History\n";
            cout << "5. About Game\n";
            cout << "6. Exit\n";

            color(WHITE);

            int choice;

            cout << "\nEnter Choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                loading("Starting Friend Mode");
                playFriend();
                break;

            case 2:
                loading("Starting Computer Mode");
                playComputer();
                break;

            case 3:
                settings();
                break;

            case 4:
                showHistory();
                break;

            case 5:
                about();
                break;

            case 6:
                loading("Closing Game");

                color(CYAN);

                cout << "\nThank You For Playing!\n";

                color(WHITE);

                return;

            default:
                color(RED);

                cout << "\nInvalid Choice!";

                color(WHITE);

                Sleep(1000);
            }
        }
    }
};

// ================= MAIN =================
int main()
{
    TicTacToe game;

    game.menu();

    return 0;
}