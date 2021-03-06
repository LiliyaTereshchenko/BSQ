/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:39:46 by kkihn             #+#    #+#             */
/*   Updated: 2018/11/06 19:42:51 by kkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void 	ft_finder(int **arr, int len, int width)
{
	int j;
	int i;
	int min;
	int I;
	int J;
	
	i = 0;
	j = 0;
	min = 0;
	I = 0;
	J = 0;
	
	i = len - 1;
	while (i >= 0)
	{                                               //main block
		j = width - 1;
		while (j >= 0)
		{	if (arr[i][j] != 0)
			{
				min = arr[i][j + 1];
				if (arr[i + 1][j] < min)
					min = arr[i + 1][j];
				if (arr[i + 1][j + 1] < min)
					min = arr[i + 1][j + 1];
				arr[i][j] = min + arr[i][j];
            	if (arr[i][j] >= arr[I][J])
            	{
            		I = i;
                	J = j;
            	}
            }
			j--;
		}
		i--;
	}
	printf("MAX = %d a[%d][%d]\n\n", arr[I][J], I, J);
//---------------------------------------------------------------------------
}
