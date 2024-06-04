/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:51:41 by francesco         #+#    #+#             */
/*   Updated: 2024/05/21 17:38:43 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"


Span::Span(): max(0)
{
    std::cout << "\033[1;32mDEFAULT SPAN CONSTRUCTOR\033[0m" << std::endl;
}

Span::Span(Span &to_copy): max(to_copy.max)
{
    std::cout << "\033[1;32mSPAN COPY CONSTRUCTOR\033[0m" << std::endl;
    this->v = to_copy.v;
}

Span::Span(unsigned int   max_int): max(max_int)
{
    std::cout << "\033[1;32mDEFAULT SPAN CONSTRUCTOR\033[0m" << std::endl;
}

Span::~Span()
{
    std::cout << "\033[1;31mFORM DESTRUCTOR: \033[0m" << std::endl;
}
        
Span &Span::operator=(Span &to_copy)
{
    this->max = to_copy.max;
    this->v = to_copy.v;
    return (*this);
}
        
void    Span::addNumber(int nb)
{
    if (this->v.size() >= this->max)
        throw ErrorNotEnoughElements();
    else
        this->v.push_back(nb);
    return ;
}

int     Span::shortestSpan()
{
    int temp;

    if (this->v.size() <= 1)
        throw ErrorNotEnoughElements();
    std::vector<int>::iterator it = this->v.begin();
    temp = *it;
    while (it != this->v.end())
    {
        if (temp > *it)
            temp = *it;
        it++;
    }
    return (temp);
}

int     Span::longestSpan()
{
    int temp;

    if (this->v.size() <= 1)
        throw ErrorNotEnoughElements();
    std::vector<int>::iterator it = this->v.begin();
    temp = *it;
    while (it != this->v.end())
    {
        if (temp < *it)
            temp = *it;
        it++;
    }
    return (temp);
}

const char *Span::ErrorNotEnoughElements::what() const throw()
{
    return ((char *)"\033[1;31mError: Need at least 2 elements to use this function\33[0m");
}