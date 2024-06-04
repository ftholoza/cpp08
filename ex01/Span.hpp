/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:10:08 by francesco         #+#    #+#             */
/*   Updated: 2024/06/04 16:24:33 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <iterator>



class Span
{
    private:
        std::vector<int>    v;
        unsigned    int     max;
        Span();
    public:
        Span(const Span &to_copy);
        Span(unsigned int   max_int);
        ~Span();
        
        Span& operator=(const Span &to_copy);
        
        void    addNumber(int nb);
        void    show();
        int     shortestSpan();
        int     longestSpan();
        void    addNumbers(const std::vector<int>::iterator begin, const std::vector<int>::iterator end);
        
        class   ErrorNotEnoughElements : public std::exception
        {
            public:
                const char *what() const throw ();
        };
        class   ErrorNotEnoughSpace : public std::exception
        {
            public:
                const char *what() const throw ();
        };
};

#endif