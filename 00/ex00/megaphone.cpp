/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 02:43:20 by jode-vri          #+#    #+#             */
/*   Updated: 2021/11/29 02:52:59 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av) {
    if (ac == 1) {
        std::cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (--ac)
    {
        av++;
        for (size_t i = 0; i < strlen(*av); i++)
            (*av)[i] = std::toupper((*av)[i]);
        std::cout << *av << " ";
    }
    std::cout << std::endl;
    return (0);
}