/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:51:41 by francesco         #+#    #+#             */
/*   Updated: 2024/06/04 16:25:24 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"


Span::Span(): max(0)
{
    std::cout << "\033[1;32mDEFAULT SPAN CONSTRUCTOR\033[0m" << std::endl;
}

Span::Span(const Span &to_copy): max(to_copy.max)
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
        
Span &Span::operator=(const Span &to_copy)
{
    this->max = to_copy.max;
    this->v = to_copy.v;
    return (*this);
}
        
void    Span::addNumber(int nb)
{
    if (this->v.size() >= this->max)
        throw ErrorNotEnoughSpace();
    else
        this->v.push_back(nb);
    return ;
}

void    Span::addNumbers(const std::vector<int>::iterator begin, const std::vector<int>::iterator end)
{
    int range_size;
    std::vector<int>::iterator it;

    it = this->v.begin();
    range_size = std::distance(begin, end);
    if (this->v.size() + range_size > this->max)
        throw (ErrorNotEnoughSpace());
    this->v.insert(it + this->v.size(), begin, end);
}

int     Span::shortestSpan()
{
    int shortest = this->longestSpan();
    std::vector<int>    copy(this->v);
    std::vector<int>::iterator it;
    std::vector<int>::iterator itc;
    if (this->v.size() <= 1)
        throw (ErrorNotEnoughElements());
    std::stable_sort(copy.begin(), copy.end());
    it = copy.begin();
    while (it != copy.end() - 1)
    {
        itc = it + 1;
        if (std::abs(*it - *itc) < shortest)
            shortest = *itc - *it;
        it++;
    }
    return (shortest);
}

void    Span::show()
{
    std::vector<int>::iterator  it;
    
    it = this->v.begin();
    while (it != this->v.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
}

int     Span::longestSpan()
{
    int min;
    int max;

    if (this->v.size() <= 1)
        throw (ErrorNotEnoughElements());
    min = *std::min_element(this->v.begin(), this->v.end());
    max = *std::max_element(this->v.begin(), this->v.end());
    return (max - min);
}

const char *Span::ErrorNotEnoughElements::what() const throw()
{
    return ((char *)"\033[1;31mError: Need at least 2 elements to use this function\33[0m");
}

const char *Span::ErrorNotEnoughSpace::what() const throw()
{
    return ((char *)"\033[1;31mError: Cannot add element, Span is Full\33[0m");
}