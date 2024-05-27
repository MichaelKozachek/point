#include <iostream>
#include "point.h"
#include "point3d.h"

int main() {
    setlocale(LC_ALL, "RU");
    point3d pts[5]; // Создаем массив из 5 трехмерных точек

    // Заполняем массив точек вручную
    for (int i = 0; i < 5; i++) {
        int x, y, z;
        std::cout << "Введите x, y, z для точки " << i + 1 << ": ";
        std::cin >> x >> y >> z;
        pts[i] = point3d(x, y, z);
    }

    // Суммирование всех точек
    point3d total;
    for (int i = 0; i < 5; i++) {
        total = total + pts[i];
    }
    std::cout << "Сумма всех точек: " << total << std::endl;

    // Сравнение всех точек с первой точкой
    for (int i = 1; i < 5; i++) {
        if (pts[i] < pts[0]) {
            std::cout << "Точка " << i + 1 << " меньше, чем точка 1" << std::endl;
        }
        else {
            std::cout << "Point " << i + 1 << " больше, чем точка 1" << std::endl;
        }
    }

    return 0;
}
