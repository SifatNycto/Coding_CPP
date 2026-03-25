#include <bits/stdc++.h>

// PAIRS are from <utility> library >>>>>>>>>>>>>>>>>



// int main()
// {
//     std::pair<int, int> p = {1,2};
//     std::cout << p.first << " " << p.second;

//     return 0;
// }



// int main()
// {
//     std::pair<int, std::pair<int, std::pair<int, int>>> s = {1, {2, {3, 4}}};
//     std::cout << std::endl << s.first;
//     std::cout << std::endl << s.second.first;
//     std::cout << std::endl << s.second.second.first;
//     std::cout << std::endl << s.second.second.second;

//     return 0;
// }




int main()
{
    std::pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};

    for (int i = 0; i < 3; i++)
        std::cout << arr[i].first << " " << arr[i].second << " ";

    return 0;
}