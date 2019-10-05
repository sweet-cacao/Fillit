//
// Created by Gynir Starvin on 05/10/2019.
//

#ifndef FILLIT2_FILLIT_H
#define FILLIT2_FILLIT_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_term
{
    int a[4];
    struct s_term *next;
}              t_term;

#endif //FILLIT2_FILLIT_H
