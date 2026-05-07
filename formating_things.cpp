#include <iostream>
#include <string>

// For Colors >>>
// Normal Colors...
const std::string BLACK   = "\033[30m";
const std::string RED     = "\033[31m";
const std::string GREEN   = "\033[32m";
const std::string YELLOW  = "\033[33m";
const std::string BLUE    = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN    = "\033[36m";
const std::string WHITE   = "\033[37m";

// Bright Colors...
const std::string BRIGHT_BLACK   = "\033[90m";
const std::string BRIGHT_RED     = "\033[91m";
const std::string BRIGHT_GREEN   = "\033[92m";
const std::string BRIGHT_YELLOW  = "\033[93m";
const std::string BRIGHT_BLUE    = "\033[94m";
const std::string BRIGHT_MAGENTA = "\033[95m";
const std::string BRIGHT_CYAN    = "\033[96m";
const std::string BRIGHT_WHITE   = "\033[97m";

// For Reset >>>
const std::string RESET = "\033[0m";

// For Styles >>>
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";




// For BackGround Colors >>>
const std::string BG_RED    = "\033[41m";
const std::string BG_GREEN  = "\033[42m";
const std::string BG_YELLOW = "\033[43m";
const std::string BG_BLUE   = "\033[44m";
const std::string BG_MAGENTA   = "\033[45m";
const std::string BG_CYAN   = "\033[46m";
const std::string BG_WHITE   = "\033[47m";
// Example
int main()
{
    std::cout << "\n GAME OVER ";
    std::cout << BOLD << BRIGHT_CYAN << "\n GAME OVER " << RESET;
    std::cout << UNDERLINE << "\n GAME OVER " << RESET;
}








/*
Purpose	Style
Game Hub Title	BOLD + BRIGHT_CYAN
Win Message	BRIGHT_GREEN
Lose Message	BRIGHT_RED
Warning	BRIGHT_YELLOW
Scoreboard	BRIGHT_MAGENTA
Menu	BRIGHT_BLUE
Secret/Important	BOLD + YELLOW
*/