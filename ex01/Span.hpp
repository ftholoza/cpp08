/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:10:08 by francesco         #+#    #+#             */
/*   Updated: 2024/05/21 17:34:07 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <iostream>

class Span
{
    private:
        std::vector<int>    v;
        unsigned    int     max;
    public:
        Span();
        Span(Span &to_copy);
        Span(unsigned int   max_int);
        ~Span();
        
        Span &operator=(Span &to_copy);
        
        void    addNumber(int nb);
        int     shortestSpan();
        int     longestSpan();
        
        class   ErrorNotEnoughElements : public std::exception
        {
            public:
                const char *what() const throw ();
        };
};

#endif