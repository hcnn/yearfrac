#include "yearfrac.h"

double yearfrac(daycount method,
                int y1, int m1, int d1, 
                int y2, int m2, int d2)
{
    switch(method){
        case ACTAFB:   return act_afb( y1, m1, d1, y2, m2, d2);
        case ACTISDA:  return act_isda(y1, m1, d1, y2, m2, d2);
        case ACT360:   return act360(  y1, m1, d1, y2, m2, d2);
        case ACT365F:  return act365f( y1, m1, d1, y2, m2, d2);
        case ACT365N:  return act365n( y1, m1, d1, y2, m2, d2);
        case D30360E2: return d30360e2(y1, m1, d1, y2, m2, d2);
        case D30360E3: return d30360e3(y1, m1, d1, y2, m2, d2);
        case D30360M:  return d30360m( y1, m1, d1, y2, m2, d2);
        case D30360N:  return d30360n( y1, m1, d1, y2, m2, d2);
        case D30360P:  return d30360p( y1, m1, d1, y2, m2, d2);
        case D30360S:  return d30360s( y1, m1, d1, y2, m2, d2);
        case D30360U:  return d30360u( y1, m1, d1, y2, m2, d2);
        case D30365:   return d30365(  y1, m1, d1, y2, m2, d2);
    }
    exit(-1);
}
