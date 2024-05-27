#include "point3d.h"

point3d::point3d() : point(), z(0) {}

point3d::point3d(int x, int y, int z) : point(x, y), z(z) {}

point3d::point3d(const point3d& other) : point(other), z(other.z) {}

point3d& point3d::operator=(const point3d& other) {
    if (this != &other) {
        point::operator=(other);
        z = other.z;
    }
    return *this;
}

point3d point3d::operator+(const point3d& other) {
    // Складываем координаты каждой точки отдельно
    return point3d(x + other.x, y + other.y, z + other.z);
}

bool point3d::operator<(const point3d& other) {
    // Сравниваем координаты каждой точки отдельно
    return (x < other.x) || (x == other.x && y < other.y) || (x == other.x && y == other.y && z < other.z);
}

std::ostream& operator<<(std::ostream& out, const point3d& pnt) {
    out << "(" << pnt.x << ", " << pnt.y << ", " << pnt.z << ")";
    return out;
}
