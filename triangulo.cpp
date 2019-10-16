//
// Created by utec on 16/10/19.
//

#include "triangulo.h"
#include <cmath>
triangulo_t::triangulo_t() {
    lado1=0;
    lado2=0;
    lado3=0;
}

triangulo_t::triangulo_t(longitud_t l1, longitud_t l2, longitud_t l3) {
    lado1=l1;
    lado2=l2;
    lado3=l3;
}

area_t triangulo_t::calcular_area() {
    auto s = calcular_semiperímetro();
    auto& a = lado1;
    auto& b = lado2;
    auto& c = lado3;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

longitud_t triangulo_t::calcular_perimetro() {
    return 0;
}

longitud_t triangulo_t::calcular_semiperímetro() {
    return 0;
}
