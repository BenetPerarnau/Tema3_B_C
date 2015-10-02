/* 
 * File:   Maquina.cpp
 * Author: Benet
 * 
 * Created on 1 de octubre de 2015, 20:13
 */

#include "Maquina.h"
#include <iostream>
#include<iomanip>

using namespace std;

Maquina::Maquina() {
}

Maquina::Maquina(const Maquina& orig) {
}

Maquina::~Maquina() {
}


    Maquina::Maquina(float valor, int m2, int m1, int m50, int m20, int m10, int m5){
        setValor(valor);
        setM1(m1);
        setM2(m2);
        setM50(m50);
        setM20(m20);
        setM10(m10);
        setM5(m5);
    }
    //Seters
    void Maquina::setValor(float value){ valor=value;}
    void Maquina::setM1(int v1){m1=v1;}
    void Maquina::setM2(int v2){m2=v2;}
    void Maquina::setM50(int v50){ m50=v50;}
    void Maquina::setM20(int v20){m20=v20;}
    void Maquina::setM10(int v10){m10=v10;}
    void Maquina::setM5(int v5){m5=v5;}
    //Geters
    int Maquina::getM1(){return m1;}
    int Maquina::getM2(){return m2;}
    int Maquina::getM50(){return m50;}
    int Maquina::getM20(){return m20;}
    int Maquina::getM10(){return m10;}
    int Maquina::getM5(){return m5;}
    /**
     * Calcular valor de las monedas entradas
     */
    float Maquina::getSumaValueMonedes(){
        return ((m2*2)+(m1*1)+(m50*0.50)+(m20*0.20)+(m10*0.10)+(m5*0.05));
    }
    /*
     *Calcular monedas a retornar
     * 
     * 
     */
    void Maquina::getCanvi(){
        
        int rM1=0, rM2=0, rM50=0, rM20=0, rM10=0, rM5=0;
        double inputValue=0;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << inputValue;
        
        inputValue=getSumaValueMonedes();
        cout << "Suma entrada => " << inputValue<<endl;
        
        if(inputValue>=valor){
            
            inputValue-=valor;
            cout << "Valor a retornar: " << inputValue <<endl;
            
            if(inputValue>=2){
                rM2=(int)(inputValue/2);
                inputValue-=rM2*2;
            }           
                      
            if(inputValue>=1){
                cout << inputValue <<endl;
                rM1=(int)(inputValue/1);
                inputValue-=rM1;
            }
            
            if(inputValue>=0.50){
                rM50=(int)(inputValue/0.50);
                inputValue-=rM50*0.50;
            }
            
            if(inputValue>=0.20){
                cout << inputValue <<endl;
                rM20=(int)(inputValue/0.20);
                inputValue-=rM20*0.20;
            }
            
            if(inputValue>=0.10){
                rM10=(int)(inputValue/0.10);
                inputValue-=rM10*0.10;
            }
            cout << "InputValue " << inputValue <<endl;
            if(inputValue>=0.05){
                rM5=(int)(inputValue/0.05);
                cout << "d5: " << inputValue <<endl;
            }
            
        }else{
            cout << "Valor entrat insuficient" <<endl;
            rM2=m2;
            rM1=m1;
            rM50=m50;
            rM20=m20;
            rM10=m10;
            rM5=m5;
        }
        
        cout << "Canvi:\nMonedes de 2€: " << rM2 
                << "\nMonedes de 1€: " << rM1 
                << "\nMonedes de 0.50€: " << rM50 
                << "\nMonedes de 0.20€: " << rM20
                << "\nMonedes de 0.10€: " << rM10 
                << "\nMonedes de 0.05€: " << rM5 <<endl;
        
        
    }

