#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "data_base.hpp"

int  main()
{

    data_base data_base;
    int y;
    int id;
    id = 0;
    std::string mystr;
    while (1)
    {
        std::cout << "\nCOMMAND : " ;
        std::getline (std::cin, mystr);
        for (y = 0; mystr[y] != 0; y++)
        {
            mystr[y] = (char)std::toupper(mystr[y]);
        }
        if (mystr == "ADD")
        {
			data_base.add();
        }
        if (mystr == "SEARCH")
        {
			data_base.search();
        }
        if (mystr == "EXIT")
        {
			data_base.ft_exit();
        }
    }
}