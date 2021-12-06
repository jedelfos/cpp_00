#include "user.hpp"

    std::string user::print(std::string str)
    {
        if (str.size() > 10)
        {
            str[9] = '.';
            str.resize(10);
        }
        return (str);
    }
    void user::name()
    {
        std::cout << std::setw(10) << this->index << "|" <<  std::setw(10) << print(this->first) << "|" <<  std::setw(10) << print(this->last) <<  "|" << std::setw(10) << print(this->nickname) << '\n';
        return;
    }
    void user::add(int id)
    {
        this->index = id + 1;
        std::cout << "first name : ";
        std::getline (std::cin, this->first);
        std::cout << "last name : ";
        std::getline (std::cin, this->last);
        std::cout << "nickname : ";
        std::getline (std::cin, this->nickname);
        std::cout << "login : ";
        std::getline (std::cin, this->login);
        std::cout << "postal address : ";
        std::getline (std::cin, this->postal);
        std::cout << "email address : ";
        std::getline (std::cin, this->email);
        std::cout << "phone number : ";
        std::getline (std::cin, this->phone);
        std::cout << "birthday date : ";
        std::getline (std::cin, this->birthday);
        std::cout << "favorite meal : ";
        std::getline (std::cin, this->meal);
        std::cout << "underwear color : ";
        std::getline (std::cin, this->color);
        std::cout << "darkest secret : ";
        std::getline (std::cin, this->secret);
        std::cout << "contact ajouter\n";
        return;
    }

    void user::search()
    {                
        std::cout << "\nfirst name : " << this->first << "\nlast name : " << this->last << "\nnickname : " << this->nickname << "\nlogin : " << this->login << "\npostal address : " << this->postal << "\nemail address : " << this->email << "\nphone number : " << this->phone << "\nbirthday date : " << this->birthday << "\nfavorite meal : " << this->meal << "\nunderwear color : " << this->color << "\ndarkest secret : " << this->secret << "\n";
        return;
    }