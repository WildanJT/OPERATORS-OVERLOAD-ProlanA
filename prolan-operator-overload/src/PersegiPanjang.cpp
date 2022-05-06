#include <iostream>
#include <vector>

#include "include/persegiPanjang.hpp"

persegiPanjang::persegiPanjang(float panjang, float lebar, float tengahx, float tengahy)
        : xmax(panjang), ymax(lebar), xmin(tengahx), ymin(tengahy), panjang(panjang), lebar(lebar), tengahx(tengahx), tengahy(tengahy)
{
    this->xmin = tengahx - (panjang/2);
    this->xmax = this->xmin + panjang;
    this->ymin = tengahy - (lebar/2);
    this->ymax = this->ymin + lebar;

    this->panjang = this->xmax - this->xmin;
    this->lebar = this->ymax - this->ymin;
    this->tengahx = this->panjang/2 + xmin;
    this->tengahy = this->lebar/2 + ymin;
}

void persegiPanjang::setXmin(float xmin)
{
    this->xmin = xmin;
}

float persegiPanjang::getXmin()
{
    return this->xmin;
}

void persegiPanjang::setXmax(float xmax)
{
    this->xmax = xmax;
}

float persegiPanjang::getXmax()
{
    return this->xmax;
}

void persegiPanjang::setYmin(float ymin)
{
    this->ymin = ymin;
}

float persegiPanjang::getYmin()
{
    return this->ymin;
}

void persegiPanjang::setYmax(float ymax)
{
    this->ymax = ymax;
}

float persegiPanjang::getYmax()
{
    return this->ymax;
}

void persegiPanjang::setPanjang(float panjang)
{
    this->panjang = panjang;
}

float persegiPanjang::getPanjang()
{
    return this->panjang;
}

void persegiPanjang::setLebar(float lebar)
{
    this->lebar = lebar;
}

float persegiPanjang::getLebar()
{
    return this->lebar;
}

void persegiPanjang::setTengahx(float tengahx)
{
    this->tengahx = tengahx;
}

float persegiPanjang::getTengahx()
{
    return this->tengahx;
}

void persegiPanjang::setTengahy(float tengahy)
{
    this->tengahy = tengahy;
}

float persegiPanjang::getTengahy()
{
    return this->tengahy;
}

bool persegiPanjang::operator == (persegiPanjang pos)
{
    if((this->xmin < pos.xmax && this->xmax > pos.xmin) && (this->ymin < pos.ymax && this->ymax > pos.ymin))
    {
        return true;
    }
    return false;
}
    
persegiPanjang persegiPanjang::operator + (persegiPanjang pos)
{
    persegiPanjang new_pos = persegiPanjang(0, 0, 0, 0);
    new_pos.xmin = (this->xmin < pos.xmin) ? this->xmin : pos.xmin;
    new_pos.xmax = (this->xmax > pos.xmax) ? this->xmax : pos.xmax;
    new_pos.ymin = (this->ymin < pos.ymin) ? this->ymin : pos.ymin;
    new_pos.ymax = (this->ymax > pos.ymax) ? this->ymax : pos.ymax;
    new_pos.panjang = new_pos.xmax - new_pos.xmin;
    new_pos.lebar = new_pos.ymax - new_pos.ymin;
    new_pos.tengahx = new_pos.panjang/2 + new_pos.xmin;
    new_pos.tengahy = new_pos.lebar/2 + new_pos.ymin;
    return new_pos;
}

persegiPanjang persegiPanjang::operator - (persegiPanjang pos)
{
    persegiPanjang new_pos = persegiPanjang(0, 0, 0, 0);
    new_pos.xmin = (this->xmin > pos.xmin) ? this->xmin : pos.xmin;
    new_pos.xmax = (this->xmax < pos.xmax) ? this->xmax : pos.xmax;
    new_pos.ymin = (this->ymin > pos.ymin) ? this->ymin : pos.ymin;
    new_pos.ymax = (this->ymax < pos.ymax) ? this->ymax : pos.ymax;
    new_pos.panjang = new_pos.xmax - new_pos.xmin;
    new_pos.lebar = new_pos.ymax - new_pos.ymin;
    new_pos.tengahx = new_pos.panjang/2 + new_pos.xmin;
    new_pos.tengahy = new_pos.lebar/2 + new_pos.ymin;
    return new_pos;
}

persegiPanjang persegiPanjang::operator ++ ()
{
    persegiPanjang new_pos = persegiPanjang(0, 0, 0, 0);
    new_pos.panjang = this->panjang * pow(2, 0.5);
    new_pos.lebar = this->lebar * pow(2, 0.5);
    new_pos.tengahx = this->tengahx;
    new_pos.tengahy = this->tengahy;
    new_pos.xmin = new_pos.tengahx - new_pos.panjang/2;
    new_pos.xmax = new_pos.tengahx + new_pos.panjang/2;
    new_pos.ymin = new_pos.tengahy - new_pos.lebar/2;
    new_pos.ymax = new_pos.tengahy + new_pos.lebar/2;
    return new_pos;
}

persegiPanjang persegiPanjang::operator -- ()
{
    persegiPanjang new_pos = persegiPanjang(0, 0, 0, 0);
    new_pos.panjang = this->panjang / pow(2, 0.5);
    new_pos.lebar = this->lebar / pow(2, 0.5);
    new_pos.tengahx = this->tengahx;
    new_pos.tengahy = this->tengahy;
    new_pos.xmin = new_pos.tengahx - new_pos.panjang/2;
    new_pos.xmax = new_pos.tengahx + new_pos.panjang/2;
    new_pos.ymin = new_pos.tengahy - new_pos.lebar/2;
    new_pos.ymax = new_pos.tengahy + new_pos.lebar/2;
    return new_pos;
}