/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rowleft.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lsigayre <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 14:37:47 by lsigayre     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 16:41:16 by lsigayre    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		*ft_rowleft(int *a)
{
	int i;
	static int rowleft[5];

	i = 9;
	*rowleft = 0;
	while (i < 13)
	{
		rowleft[i] = a[i];
		i++;
	}
	return (rowleft);
}
