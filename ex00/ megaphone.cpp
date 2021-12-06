/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    megaphone.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedelfos <jedelfos@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 08:52:34 by jedelfos          #+#    #+#             */
/*   Updated: 2021/12/02 08:52:37 by jedelfos         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc , char *argv[])
{
    int i;
    int y;

    for (i = 1; i < argc; i++)
    {
        for (y = 0; argv[i][y] != 0; y++)
        {
            std::cout << (char)std::toupper(argv[i][y]);
        }
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}