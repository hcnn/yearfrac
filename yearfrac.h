#ifndef YEARFRAC_H
#define YEARFRAC_H

#include "act_afb/act_afb.h"
#include "act_isda/act_isda.h"
#include "act360/act360.h"
#include "act365f/act365f.h"
#include "act365n/act365n.h"
#include "d30360e2/d30360e2.h"
#include "d30360e3/d30360e3.h"
#include "d30360m/d30360m.h"
#include "d30360n/d30360n.h"
#include "d30360p/d30360p.h"
#include "d30360s/d30360s.h"
#include "d30360u/d30360u.h"
#include "d30365/d30365.h"

typedef enum {
    ACTAFB = 10,
    ACTISDA = 8,
    ACT360 = 4,
    ACT365F = 5,
    ACT365N = 14,
    D30360E2 = 12,
    D30360E3 = 13,
    D30360M = 21,
    D30360N = 22,
    D30360P = 23,
    D30360S = 11,
    D30360U = 1,
    D30365 = 2
} daycount;

double yearfrac(daycount method,
                int y1, int m1, int d1, 
                int y2, int m2, int d2);

#endif /* YEARFRAC_H */
