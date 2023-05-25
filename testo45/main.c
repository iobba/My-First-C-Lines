#include<stdio.h>
#include<stdlib.h>
#include "./ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);
int main(int ac, char **av)
{
	t_stock_str *par = ft_strs_to_tab(ac - 1, av + 1);
	ft_show_tab(par);
}
