#include <iostream>
#include <windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// ================= COLORS =================
#define RED 12
#define GREEN 10
#define BLUE 9
#define YELLOW 14
#define CYAN 11
#define WHITE 15
#define MAGENTA 13

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void color(int c)
{
    SetConsoleTextAttribute(h, c);
}

// ================= GLOBAL VARIABLES =================
char board[3][3];

string player1Name;
string player2Name;

int player1Score = 0;
int player2Score = 0;
int drawScore = 0;

// ================= CLEAR SCREEN =================
void clearScreen()
{
    system("cls");
}

// ================= LOADING ANIMATION =================
void loading(string text)
{
    color(CYAN);

    cout << "\n" << text;

    for (int i = 0; i < 5; i++)
    {
        cout << ".";
        Sleep(350);
    }

    cout << "\n";

    color(WHITE);
}

// ================= GAME LOGO =================
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
    cout << "               TIC TAC TOE GAME                  \n";
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
        cout << "         ";

        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " ";

            if (j < 2)
                cout << "|";
        }

        cout << "\n";

        if (i < 2)
            cout << "        ----+----+----\n";
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

    cout << " " << player1Name << " : " << player1Score << "\n";
    cout << " " << player2Name << " : " << player2Score << "\n";
    cout << " Draw Matches : " << drawScore << "\n";

    cout << "=========================================\n";

    color(WHITE);
}

// ================= CHECK WIN =================
bool checkWin(char symbol)
{
    // ROWS
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == symbol &&
            board[i][1] == symbol &&
            board[i][2] == symbol)
            return true;
    }

    // COLUMNS
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == symbol &&
            board[1][i] == symbol &&
            board[2][i] == symbol)
            return true;
    }

    // DIAGONALS
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

// ================= COMPUTER MOVE =================
int computerMove()
{
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

// ================= FRIEND MODE =================
void playFriend()
{
    clearScreen();

    cout << "\nEnter Player 1 Name : ";
    cin >> player1Name;

    cout << "Enter Player 2 Name : ";
    cin >> player2Name;

    player1Score = 0;
    player2Score = 0;
    drawScore = 0;

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
                cout << player1Name << "'s Turn (X)\n";
            }
            else
            {
                color(RED);
                cout << player2Name << "'s Turn (O)\n";
            }

            color(WHITE);

            cout << "\nChoose Position (1-9) : ";
            cin >> pos;

            if (pos < 1 || pos > 9 || !placeMove(pos, current))
            {
                color(RED);
                cout << "\nInvalid Move!";
                color(WHITE);

                Sleep(1000);
                continue;
            }

            // WIN
            if (checkWin(current))
            {
                clearScreen();

                logo();
                printBoard();

                if (current == 'X')
                {
                    color(CYAN);
                    cout << "\n" << player1Name << " Wins The Match!\n";
                    player1Score++;
                }
                else
                {
                    color(RED);
                    cout << "\n" << player2Name << " Wins The Match!\n";
                    player2Score++;
                }

                color(WHITE);

                break;
            }

            // DRAW
            if (checkDraw())
            {
                clearScreen();

                logo();
                printBoard();

                color(YELLOW);
                cout << "\nThe Match Is Draw!\n";

                drawScore++;

                color(WHITE);

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
    cin >> player1Name;

    player2Name = "Computer";

    player1Score = 0;
    player2Score = 0;
    drawScore = 0;

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
            cout << player1Name << "'s Turn (X)\n";

            color(WHITE);

            cout << "\nChoose Position (1-9) : ";
            cin >> pos;

            if (pos < 1 || pos > 9 || !placeMove(pos, 'X'))
            {
                color(RED);
                cout << "\nInvalid Move!";
                color(WHITE);

                Sleep(1000);
                continue;
            }

            // PLAYER WIN
            if (checkWin('X'))
            {
                clearScreen();

                logo();
                printBoard();

                color(CYAN);

                cout << "\n" << player1Name << " Wins The Match!\n";

                player1Score++;

                color(WHITE);

                break;
            }

            // DRAW
            if (checkDraw())
            {
                clearScreen();

                logo();
                printBoard();

                color(YELLOW);

                cout << "\nThe Match Is Draw!\n";

                drawScore++;

                color(WHITE);

                break;
            }

            // COMPUTER MOVE
            loading("Computer Thinking");

            int compMove = computerMove();

            placeMove(compMove, 'O');

            // COMPUTER WIN
            if (checkWin('O'))
            {
                clearScreen();

                logo();
                printBoard();

                color(RED);

                cout << "\nComputer Wins The Match!\n";

                player2Score++;

                color(WHITE);

                break;
            }

            // DRAW
            if (checkDraw())
            {
                clearScreen();

                logo();
                printBoard();

                color(YELLOW);

                cout << "\nThe Match Is Draw!\n";

                drawScore++;

                color(WHITE);

                break;
            }
        }

        scoreboard();

        cout << "\nPlay Again? (y/n) : ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
}

// ================= GAME SETTINGS =================
void settings()
{
    clearScreen();

    logo();

    color(GREEN);

    cout << "\n============= GAME CONTROLS =============\n\n";

    cout << " Positions Layout:\n\n";

    cout << "         1 | 2 | 3\n";
    cout << "        ---+---+---\n";
    cout << "         4 | 5 | 6\n";
    cout << "        ---+---+---\n";
    cout << "         7 | 8 | 9\n";

    cout << "\n=========================================\n";

    color(WHITE);

    system("pause");
}

// ================= ABOUT GAME =================
void about()
{
    clearScreen();

    logo();

    color(GREEN);

    cout << "\nFEATURES INCLUDED:\n\n";

    cout << " [1] Colorful Console Interface\n";
    cout << " [2] Animated Loading Effects\n";
    cout << " [3] Friend VS Friend Mode\n";
    cout << " [4] Player VS Computer Mode\n";
    cout << " [5] Live Scoreboard\n";
    cout << " [6] Player Names System\n";
    cout << " [7] Draw Match Detection\n";
    cout << " [8] Replay Option\n";
    cout << " [9] Beautiful ASCII Logo\n";
    cout << " [10] Random AI Moves\n";

    color(WHITE);

    cout << "\nPress Any Key To Return...";
    system("pause>nul");
}

// ================= MAIN =================
int main()
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
        cout << "4. About Game\n";
        cout << "5. Exit\n";

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
            about();
            break;

        case 5:
            loading("Closing Game");

            color(CYAN);

            cout << "\nThank You For Playing!\n";

            color(WHITE);

            return 0;

        default:
            color(RED);

            cout << "\nInvalid Choice!";

            color(WHITE);

            Sleep(1000);
        }
    }

    return 0;
}