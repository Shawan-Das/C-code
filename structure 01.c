typedef struct{
    int x;
    int y;
}point;
#include<stdio.h>
#include<math.h>
int main()
{
    float ed;//(for E.D)
    int dx,dy,d;//(For M.D)

    point p,q;
    p.x=2; p.y=1;
    q.x=5; q.y=3;

    dx=p.x-q.x;
    dy=p.y-q.y;
    ed=(dx*dx)+(dy*dy);
    ed=sqrt(ed);

    if(dx<0) dx=-dx;
    if(dy<0) dy=-dy;
    d=dx+dy;

    printf(" %f \n %d",ed,d);
    return 0;
}
