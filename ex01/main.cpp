/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:29:25 by francesco         #+#    #+#             */
/*   Updated: 2024/06/04 13:09:15 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void )
{
    try
    {
        Span    a(4);
        Span    b(20000);
        Span    c(4);
    
        a.addNumber(3);
        a.addNumber(4);
        a.addNumber(5);
        a.addNumber(6);
        c.addNumber(1);
        std::cout << "longest span: " <<  a.longestSpan() << std::endl;
        std::cout <<  "shortest span: " << a.shortestSpan() << std::endl;
        for (int i = 0; i < 20000; i++)
        {
            b.addNumber(i);
        }
        std::cout << "0 and 19999" << std::endl;
        std::cout << "longest span: " << b.longestSpan() << std::endl;
        std::cout << "shortest span: " <<  b.shortestSpan() << std::endl;
        c.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span    d(1);

        d.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Span    e(1);
        e.addNumber(2);
        e.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Span test(5);
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}