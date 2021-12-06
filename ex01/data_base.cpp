#include "data_base.hpp"

data_base::data_base()
{
	nb_user = 0;
}

int data_base::add()
{
    if (nb_user == 8)
    {
        std::cout << "Le repertoire et plein\n";
    }
    else
    {
        user[nb_user].add(nb_user);
    	nb_user ++;
    }
	return 0;
}

int data_base::search()
{
	std::string mystr;
	int y;
	y = 0;
	if (nb_user != 0)
		std::cout << "     index|first name| last name|  nickname\n";
	while(y < nb_user)
	{
		user[y].name();
		y++;
	}
	y = 0;
	if (nb_user > 0)
	{
		std::cout << "quelle index ? : ";
		std::getline (std::cin, mystr);
		if (mystr.find_first_not_of("0123456789") != 0)
		{
			if (mystr.size() > 1)
				std::cout << "ce repertoire et vide\n" ;
			else
			{
				y = std::stoi(mystr);
				if ((y < 9 && y > 0) && y < nb_user + 1)
					user[y - 1].search();
				else 
					std::cout << "ce repertoire et vide\n" ;
			}
		}
		else
			std::cout << "entrer incorecte\n" ;
	}
	else 
		std::cout << "le repertoire et vide\n" ;
	return 0;
}

void data_base::ft_exit()
{
	exit(0);
}