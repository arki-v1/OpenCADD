//
// Created by arrank on 20/06/20.
//

#ifndef CAD_PROJECT_TBOX_H
#define CAD_PROJECT_TBOX_H

#endif //CAD_PROJECT_TBOX_H

typedef struct l line;
typedef struct r rect;
typedef struct t tri;
typedef struct ri rtri;
typedef struct i itri;
typedef struct a arc;
typedef struct c circ;

int add_line(line *prev, int cntr[], int len, int ang);
int add_rect(rect *prev, int *cntr, int hei, int wid);
int add_itri(itri *prev, int p1[], int p2[], int p3[]);
int add_rtri(rtri *prev, int cntr[], int hei, int bw);
int add_tri(tri *prev, int cntr[], int hei, int bw);
int add_arc(arc *prev, int sp[], int cntr[], int rad, int ang);
int add_circ(circ *prev, int cntr[], int rad);

line * remove_line(line *item);
rect * remove_rect(rect *item);
itri * remove_itri(itri *item);
rtri * remove_rtri(rtri *item);
tri * remove_tri(tri *item);
arc * remove_arc(arc *item);
circ * remove_circ(circ *item);