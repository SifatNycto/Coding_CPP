// #include <iostream>
// #include <thread>
// #include <chrono>

// using namespace std;

// int main() {

//     for(int i = 1; i <= 5; i++) {

//         cout << "Hello Sifat!" << endl;

//         // wait for 2 seconds
//         this_thread::sleep_for(chrono::seconds(2));
//     }

//     return 0;
// }





// #include <iostream>
// #include <thread>
// #include <chrono>

// using namespace std;

// int main() {

//     cout << "Loading";
//     for(int i = 1; i <= 5; i++) {

//         cout << ".";

//         // wait for 0.5 seconds
//         this_thread::sleep_for(chrono::milliseconds(200));
//     }

//     return 0;
// }




// #include <iostream>
// #include <thread>
// #include <chrono>

// using namespace std;
// using namespace chrono_literals;
// // s - seconds
// // min - minutes
// // ms - miliseconds
// // h - hours

// int main() {

//     cout << "Wait..." << endl;

//     this_thread::sleep_for(2s);

//     cout << "Finished!" << endl;
// }








// #include <iostream>
// #include <thread>
// #include <chrono>

// int main()
// {
//     int i = 5;
//     std::cout << "Loading";
//     while(i--)
//     {
//         std::this_thread::sleep_for(std::chrono::milliseconds(300));
//         std::cout << ".";
//     }
//     return 0;
// }



// #include <iostream>
// #include <thread>
// #include <chrono>

// using namespace std;
// using namespace chrono_literals;

// int main()
// {
//     int i = 5;
//     cout << "Loading";
//     while(i--)
//     {
//         this_thread::sleep_for(300ms);
//         cout << ".";

//     }
// }








#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono_literals;

int main()
{
    int i = 5;
    std::cout << "Loading";
    while(i--)
    {
        this_thread::sleep_for(300ms);
        std::cout << ".";

    }
}


// #include <iostream>
// #include <thread>
// #include <chrono>

// using namespace std::chrono_literals;

// int main()
// {
//     int i = 5;

//     std::cout << "Loading";

//     while(i--)
//     {
//         std::this_thread::sleep_for(300ms);

//         std::cout << "." << std::endl;
//     }

//     return 0;
// }