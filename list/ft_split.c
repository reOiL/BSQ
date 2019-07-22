//
// Created by reoil on 22.07.19.
//

#include "../ft/func_prot.h"
#include "ft_list.h"

t_list  *ft_split(char *str)
{
    t_list  *ret;
    int     i;
    int     j;

    ret = 0;
    i = 0;
    j = 0;
    while (str[i])
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            ft_list_push_back(&ret, ft_strdup(&str[j]));
            j = i + 1;
        }
        i++;
    }
    return (ret);
}