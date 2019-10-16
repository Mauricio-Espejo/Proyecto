//
// Created by utec on 16/10/19.
//

#ifndef UNTITLED2_TRIANGULO_H
#define UNTITLED2_TRIANGULO_H

using longitud_t = double;
using area_t = double;


class triangulo_t {
private:
    longitud_t lado1;
    longitud_t lado2;
    longitud_t lado3;
public:
    //constructores
    triangulo_t();
    triangulo_t(longitud_t l1,longitud_t l2,longitud_t l3);
    //metodos gets
    area_t calcular_area();
    longitud_t calcular_perimetro();
    longitud_t calcular_semiperímetro();
};


#endif //UNTITLED2_TRIANGULO_H
