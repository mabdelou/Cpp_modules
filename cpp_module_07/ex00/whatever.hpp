/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:53:38 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/16 14:16:26 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H__
# define WHATEVER_H__

# include <iostream>
# include <string>

template <class swapi>
void swap(swapi &a, swapi &b)
{
    swapi c;
    c = a;
    a = b;
    b = c;
}

template <class mini>
mini &min(mini &a, mini &b)
{
    if(a == b)
        return (b);
    return (a<b?a:b);
}

template <class maxi>
maxi &max(maxi &a, maxi &b)
{
    if(a == b)
        return (b);
    return (a>b?a:b);
}

#endif