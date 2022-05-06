#ifndef _PERSEGIPANJANG_HPP_
#define _PERSEGIPANJANG_HPP_

#include <iostream>
#include <math.h>

class persegiPanjang {
private:
    float xmin, xmax, ymin, ymax, panjang, lebar, tengahx, tengahy;

public:
    persegiPanjang(float panjang, float lebar, float tengahx, float tengahy);

    bool operator == (persegiPanjang pos);
    
    persegiPanjang operator + (persegiPanjang pos);

    persegiPanjang operator - (persegiPanjang pos);

    persegiPanjang operator ++ ();

    persegiPanjang operator -- ();

    void setXmin(float xmin);
    float getXmin();        

    void setXmax(float xmax);
    float getXmax();

    void setYmin(float ymin);
    float getYmin();

    void setYmax(float ymax);
    float getYmax();

    void setPanjang(float panjang);
    float getPanjang();

    void setLebar(float lebar);
    float getLebar();

    void setTengahx(float tengahx);
    float getTengahx();

    void setTengahy(float tengahy);
    float getTengahy();
};

#endif

