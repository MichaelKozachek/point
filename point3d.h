#pragma once
#include <iostream>
#include "point.h"

class point3d : public point
{
public:
    int z{ 0 };

    point3d();
    point3d(int x, int y, int z);
    point3d(const point3d& other);

    point3d& operator=(const point3d& other);
    point3d operator+(const point3d& other);
    bool operator<(const point3d& other);

    friend std::ostream& operator<<(std::ostream& out, const point3d& pnt);
};
