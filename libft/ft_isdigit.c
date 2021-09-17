/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:08:15 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/14 13:12:20 by jvigneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ecrire une fct qui reproduit a lidentique la fct isdigit

int ft_isdigit(int c);

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57 )
        return (1);
    return (0);
}