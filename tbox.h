//
// Created by arrank on 20/06/20.
//

#ifndef CAD_PROJECT_TBOX_H
#define CAD_PROJECT_TBOX_H

#endif //CAD_PROJECT_TBOX_H

typedef struct n nptr;
typedef struct l line;
typedef struct r rect;
typedef struct t tri;
typedef struct ri rtri;
typedef struct i itri;
typedef struct a arc;
typedef struct c circ;

int add_line(nptr prev, int cntr[], int len, int ang);
int add_rect(nptr prev, int *cntr, int hei, int wid);
int add_itri(nptr prev, int p1[], int p2[], int p3[]);
int add_rtri(nptr prev, int cntr[], int hei, int bw);
int add_tri(nptr prev, int cntr[], int hei, int bw);
int add_arc(nptr prev, int sp[], int cntr[], int rad, int ang);
int add_circ(nptr prev, int cntr[], int rad);

nptr remove_line(line *item);
nptr remove_rect(rect *item);
nptr remove_itri(itri *item);
nptr remove_rtri(rtri *item);
nptr remove_tri(tri *item);
nptr remove_arc(arc *item);
nptr remove_circ(circ *item);