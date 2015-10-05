/* 
 * File:   Maquina.h
 * Author: Benet
 *
 * Created on 1 de octubre de 2015, 20:13
 */

#ifndef MAQUINA_H
#define	MAQUINA_H

class Maquina {
public:
    Maquina();
    Maquina(float valor, int m2, int m1, int m50, int m20, int m10, int m5);
    void setValor(float value);
    void setM1(int v1);
    void setM2(int v2);
    void setM50(int v50);
    void setM20(int v20);
    void setM10(int v10);
    void setM5(int v5);
    int getM1();
    int getM2();
    int getM50();
    int getM20();
    int getM10();
    int getM5();
    float getSumaValueMonedes();
    void getCanvi();
    Maquina(const Maquina& orig);
    virtual ~Maquina();
private:
    int m1, m2, m50, m20, m10, m5;
    float valPro;
};

#endif	/* MAQUINA_H */

