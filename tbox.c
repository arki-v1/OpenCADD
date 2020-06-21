//
// Created by arrank on 20/06/20.
//

#include "tbox.h"
#include <stdlib.h>

typedef struct l
{
    int centre[2];
    int length;
    int angle;
    struct l  *next;
} line;

typedef struct r
{
    int centre[2];
    int height;
    int width;
    struct r  *next;
} rect;

typedef struct t
{
    int centre[2];
    int height;
    int bwidth;
    struct t  *next;
} tri;

typedef struct ri
{
    int centre[2];
    int height;
    int bwidth;
    struct ri  *next;
} rtri;

typedef struct i
{
    int point1[2];
    int point2[2];
    int point3[2];
    struct i  *next;
} itri;

typedef struct a
{
    int startp[2];
    int centre[2];
    int radius;
    int angle;
    struct a *next;
} arc;

typedef struct c
{
    int centre[2];
    int radius;
    int angle;
    struct c *next;
} circ;

int add_line(line *prev, int cntr[], int len, int ang)
{
    line *p = (line*) malloc(sizeof(line));
    if(p == NULL)
    {
        return 1;
    }
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->length = len;
    p->angle = ang;
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

int add_rect(rect *prev, int *cntr, int hei, int wid)
{
    rect *p = (rect*) malloc(sizeof(rect));
    if(p == NULL)
    {
        return 1;
    }
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->height = hei;
    p->width = wid;
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

int add_itri(itri *prev, int p1[], int p2[], int p3[])
{
    itri *p = (itri*) malloc(sizeof(itri));
    if(p == NULL)
    {
        return 1;
    }
    p->point1[0] = p1[0];
    p->point1[1] = p1[1];
    p->point2[0] = p2[0];
    p->point2[1] = p2[1];
    p->point3[0] = p3[0];
    p->point3[1] = p3[1];
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

int add_rtri(rtri *prev, int cntr[], int hei, int bw)
{
    rtri *p = (rtri*) malloc(sizeof(rtri));
    if(p == NULL)
    {
        return 1;
    }
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->height = hei;
    p->bwidth = bw;
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

int add_tri(tri *prev, int cntr[], int hei, int bw)
{
    tri *p = (tri*) malloc(sizeof(tri));
    if(p == NULL)
    {
        return 1;
    }
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->height = hei;
    p->bwidth = bw;
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

int add_arc(arc *prev, int sp[], int cntr[], int rad, int ang)
{
    arc *p = (arc*) malloc(sizeof(arc));
    if(p == NULL)
    {
        return 1;
    }
    p->startp[0] = sp[0];
    p->startp[1] = sp[1];
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->radius = rad;
    p->angle = ang;
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

int add_circ(circ *prev, int cntr[], int rad)
{
    circ *p = (circ*) malloc(sizeof(circ));
    if(p == NULL)
    {
        return 1;
    }
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->radius = rad;
    if(prev != NULL)
    {
        p->next = prev->next;
        prev->next = p;
    }
    else
    {
        p->next = NULL;
    }
    return 0;
}

line * remove_line(line *item)
{
    line *p = item->next;
    free(item);
    return p;
}

rect * remove_rect(rect *item)
{
    rect *p = item->next;
    free(item);
    return p;
}

itri * remove_itri(itri *item)
{
    itri *p = item->next;
    free(item);
    return p;
}

rtri * remove_rtri(rtri *item)
{
    rtri *p = item->next;
    free(item);
    return p;
}

tri * remove_tri(tri *item)
{
    tri *p = item->next;
    free(item);
    return p;
}

arc * remove_arc(arc *item)
{
    arc *p = item->next;
    free(item);
    return p;
}

circ * remove_circ(circ *item)
{
    circ *p = item->next;
    free(item);
    return p;
}