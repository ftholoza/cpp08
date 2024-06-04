/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:21:50 by francesco         #+#    #+#             */
/*   Updated: 2024/06/03 09:50:40 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <vector>

class   ErrorNoOccurence : public std::exception
{
    public:
    const char *what() const throw ();
};

template<typename T>

int *easyfind(T &container, int target)
{
    typename T::iterator it = container.begin();
    while (it < container.end())
    {
        if (*it == target)
            return (&(*it));
        it++;
    }
    throw(ErrorNoOccurence());
    return (NULL);
}

const char *ErrorNoOccurence::what() const throw()
{
    return ((char *)"\033[1;31mError: No occurence found\33[0m");
}

#endif