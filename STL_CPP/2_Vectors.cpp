#include <bits/stdc++.h>

int main()
{
    std::vector<int> v;  //creates empty container
    v.push_back(1);
    v.emplace_back(2);  //faster than push_back

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    std::vector<std::pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    std::vector<int> v(5, 100); // {100, 100, 100, 100, 100}

    std::vector<int> v(5);  // {0, 0, 0, 0, 0} filled with zeros || garbeg values

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    std::vector<int> v1(5, 20);  // {20, 20, 20, 20, 20}
    std::vector<int> v2(v1);    //copy of v1 || another container
    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>





    //ITERATOR >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   

    std::vector<int>::iterator it = v.begin();  //.begin() points the memory address of the 1st element
    it++;   //shifts the position to 2nd element
    std::cout << *(it) << " ";  // * -> it points the value of the elements 

    it = it + 2;
    std::cout << *(it) << " ";

    std::vector<int>::iterator it = v.end();    //end means the next position after the last element
    // std::vector<int>::iterator it = v.rend();   //reverse end
    // std::vector<int>::iterator it = v.rbegin(); //reverse begin

    // for accessing >>>>>>>>>>>>>
    std::cout << v[0] << " " << v.at(0);        //.at() is not used in current time widely
                                                // v[0] prints the element like array


    std::cout << v.back() << " ";       // .back() means the last element

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    //  {10, 20, 30} for printing elements from first to last without i
    //  here 10 = .begin() and 30 = .end()
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *(it) << " ";
    
    // Shorter syntax >>>>>>>>>>
    for (auto it = v.begin(); it != v.end(); it++)  // automatically set itself to vector irerator

    // auto >> define the datatype of the data
    // int a = 5;
    // auto a = 5; are same || as the auto assigning the datatype of the data
    // std::string a = "nycto";
    // auto a = "nycto";

    // anothor shortest form for printing all elements of vector
    //  FOR EACH LOOP >>>>>>>>>>>>
    for (auto it : v)
        std::cout << it << " ";
    
    
    
    
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    // DELETION of a vector







}