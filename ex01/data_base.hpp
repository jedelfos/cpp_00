#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "user.hpp"

class data_base
{
private:
    user user[8];
	int nb_user;
public:
	data_base(/* args */);
	int add();
	int search();
	void ft_exit();
};
