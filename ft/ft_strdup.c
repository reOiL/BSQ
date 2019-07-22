//
// Created by reoil on 22.07.19.
//

#include "func_prot.h"
# include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *res;

    res = malloc(ft_strlen(src));
    ft_strcpy(res, src);
    return (res);
}