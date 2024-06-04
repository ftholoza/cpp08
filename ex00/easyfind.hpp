/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:21:50 by francesco         #+#    #+#             */
/*   Updated: 2024/06/04 16:20:12 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <list>

class   ErrorNoOccurence : public std::exception
{
    public:
    const char *what() const throw ();
};

class   ErrorParam : public std::exception
{
    public:
    const char *what() const throw ();
};

template<typename T>

int *easyfind(T &container, int target)
{
    typename T::iterator it;
    
    it = std::find(container.begin(), container.end(), target);
    if (it == container.end())
        throw(ErrorNoOccurence());
    else
        return (&(*it));
}

const char *ErrorNoOccurence::what() const throw()
{
    return ((char *)"\033[1;31mError: No occurence found\33[0m");
}

const char *ErrorParam::what() const throw()
{
    return ((char *)"\033[1;31mError: Param\33[0m");
}

#endif