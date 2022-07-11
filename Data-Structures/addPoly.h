#ifndef __ADD_POLY_H__
#define __ADD_POLY_H__

#define TRUE        1
#define FALSE       0

typedef struct poly{
    int poly[20][20];
} Poly;

void addPoly(Poly A, Poly B);

#endif