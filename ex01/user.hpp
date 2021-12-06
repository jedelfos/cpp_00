#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class user
{
private:
    int index;
    std::string first;
    std::string last;
    std::string nickname;
    std::string login;
    std::string postal;
    std::string email;
    std::string phone;
    std::string birthday;
    std::string meal;
    std::string color;
    std::string secret;

    std::string print(std::string str);


public:
    void name();
    void add(int id);
    void search();
};