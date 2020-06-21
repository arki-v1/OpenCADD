//
// Created by arrank on 20/06/20.
//

#include "tbox.h"
#include <stdlib.h>

typedef struct n
{
    enum
    {
        ZERO, LINE, RECT, TRI, RTRI, ITRI, ARC, CIRC
    } typesel;
    union
    {
        line *l;
        rect *r;
        tri *t;
        rtri *ri;
        itri *i;
        arc *a;
        circ *c;
        void *vp;
    };
} nptr;

typedef struct l
{
    int centre[2];
    int length;
    int angle;
    nptr next;
} line;

typedef struct r
{
    int centre[2];
    int height;
    int width;
    nptr next;
} rect;

typedef struct t
{
    int centre[2];
    int height;
    int bwidth;
    nptr next;
} tri;

typedef struct ri
{
    int centre[2];
    int height;
    int bwidth;
    nptr next;
} rtri;

typedef struct i
{
    int point1[2];
    int point2[2];
    int point3[2];
    nptr next;
} itri;

typedef struct a
{
    int startp[2];
    int centre[2];
    int radius;
    int angle;
    nptr next;
} arc;

typedef struct c
{
    int centre[2];
    int radius;
    nptr next;
} circ;

int add_line(nptr prev, int cntr[], int len, int ang)
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
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.l = p;
        prev.typesel = LINE;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

int add_rect(nptr prev, int *cntr, int hei, int wid)
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
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.r = p;
        prev.typesel = RECT;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

int add_itri(nptr prev, int p1[], int p2[], int p3[])
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
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.i = p;
        prev.typesel = ITRI;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

int add_rtri(nptr prev, int cntr[], int hei, int bw)
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
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.ri = p;
        prev.typesel = RTRI;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

int add_tri(nptr prev, int cntr[], int hei, int bw)
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
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.t = p;
        prev.typesel = TRI;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

int add_arc(nptr prev, int sp[], int cntr[], int rad, int ang)
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
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.a = p;
        prev.typesel = ARC;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

int add_circ(nptr prev, int cntr[], int rad)
{
    circ *p = (circ*) malloc(sizeof(circ));
    if(p == NULL)
    {
        return 1;
    }
    p->centre[0] = cntr[0];
    p->centre[1] = cntr[1];
    p->radius = rad;
    if(prev.typesel != ZERO)
    {
        p->next.vp = prev.vp;
        p->next.typesel = prev.typesel;
        prev.c = p;
        prev.typesel = CIRC;
    }
    else
    {
        p->next.typesel = ZERO;
        p->next.vp = NULL;
    }
    return 0;
}

nptr remove_line(line *item)
{
    nptr p = item->next;
    free(item);
    return p;
}

nptr remove_rect(rect *item)
{
    nptr p = item->next;
    free(item);
    return p;
}

nptr remove_itri(itri *item)
{
    nptr p = item->next;
    free(item);
    return p;
}

nptr remove_rtri(rtri *item)
{
    nptr p = item->next;
    free(item);
    return p;
}

nptr remove_tri(tri *item)
{
    nptr p = item->next;
    free(item);
    return p;
}

nptr remove_arc(arc *item)
{
    nptr p = item->next;
    free(item);
    return p;
}

nptr remove_circ(circ *item)
{
    nptr p = item->next;
    free(item);
    return p;
}