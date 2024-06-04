/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:13:21 by francesco         #+#    #+#             */
/*   Updated: 2024/06/03 15:34:50 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iomanip>
# include  <iterator>
# include <stack>
# include <algorithm>
# include <deque>

template <typename T, class Container = std::deque< T > >

class MutantStack: public std::stack<T, Container>
{
    private:
           
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &to_copy)
        {
            *this = to_copy;
            std::cout << "\033[1;32mSPAN COPY CONSTRUCTOR\033[0m" << std::endl;
            return ;
        }
        
        MutantStack &operator=(const MutantStack &to_copy)
        {
            std::stack<T, Container>::operator=(to_copy);
            return (*this);
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin()
        {
            return (std::stack<T, Container>::c.begin());
        }
        iterator    end()
        {
            return (std::stack<T, Container>::c.end());
        }
};

# endif