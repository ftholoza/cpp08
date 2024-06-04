/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:41:23 by francesco         #+#    #+#             */
/*   Updated: 2024/06/04 14:21:37 by ftholoza         ###   ########.fr       */
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
    try
    {
        std::list<int> s;

        for (int i = 0; i < 10; i++)
            s.push_back(i);
        std::cout << *(::easyfind(s, 7)) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}