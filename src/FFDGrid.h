#ifndef _FFDGRID_H_
#define _FFDGRID_H_

#include "math/Vec3.h"
#include <vector>

struct gridpoint {
    Vec3 pos;
    float r, g, b;
};

class FFDGrid {
    public: 
    void init(int ns, int nt, int nu) {
        this->ns = ns;
        this->nt = nt;
        this->nu = nu;
       
        pts.resize(ns*nt*nu);
        int i = 0, j = 0, k = 0; 
        for(int l = 0; l < ns*nu*nt; l++) {
             pts[l].pos = p0 + s*(float(i)/float(ns - 1)) + t*(float(j)/float(nt - 1)) + u*(float(k)/float(nu - 1));
             k++;
             if(k == nu) {
                k = 0;
                j++;
             }
             if(j == nt) {
                j = 0;
                i++;
            }
        }
    }

    std::vector<gridpoint> pts;
    int ns, nt, nu;
    Vec3 p0, s, t, u;
};

#endif
