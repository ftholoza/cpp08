/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:41:23 by francesco         #+#    #+#             */
/*   Updated: 2024/06/03 09:59:13 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main( void )
{
    std::vector<int> v;
    std::vector<int> f;

    for (int i = 0; i < 5; i++)
        v.push_back(i);
    try
    {
        std::cout << *(::easyfind(v, 4)) << std::endl;
        std::cout << *(::easyfind(f, 4)) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}