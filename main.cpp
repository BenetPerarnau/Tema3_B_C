/* 
 * File:   main.cpp
 * Author: Benet
 *
 * Created on 30 de septiembre de 2015, 18:37
 */

#include <iostream>
#include "Maquina.h"

using namespace std;

/*
 * Tema 3b i 3c: Estructures de control
 */

//Métodoes
int writeMenu();
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();
void ex11();
void ex12();
void ex13();
void ex14();
void ex15();
void ex16();
void ex17();
void ex18();
void ex19();
void ex20();

int main(int argc, char** argv) {
    int op=-1;
    
    do{ 
        op=writeMenu();
       
        switch (op){
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;
            case 3:
                ex3();
                break;
            case 4:
                ex4();
                break;
            case 5:
                ex5();
                break;
            case 6:
                ex6();
                break;
            case 7:
                ex7();
                break;
            case 8:
                ex8();
                break;
            case 9:
                ex9();
                break;
            case 10:
                ex10();
                break;
            case 11:
                ex11();
                break;
            case 12:
                ex12();
                break;
            case 13:
                ex13();
                break;
            case 14:
                ex14();
                break;
            case 15:
                ex15();
                break;
            case 16:
                ex16();
                break;
            case 17:
                ex17();
                break;
            case 18:
                ex18();
                break;
            case 19:
                ex19();
                break;
            case 20:
                ex20();
            case 21:
                cout << "Bye!";
                break;
            default:
                cout <<"Mai entrarà aqui pero per se les mosques"<<endl;
                //no entrarà mai pq controlem el valor de op en el metode writeMenu
                break;
        }
        
    }while(op!=11);   
    
    return 0;
}


/*
 Metode que escriu per pantalla el menu del programa
 */
int writeMenu(){
    
    int op=-1;
    
    cout << "1-Exercici 1\t";
    cout << "2-Exercici 2"<< endl;
    cout << "3-Exercici 3\t";
    cout << "4-Exercici 4"<< endl;
    cout << "5-Exercici 5\t";
    cout << "6-Exercici 6"<< endl;
    cout << "7-Exercici 7\t";
    cout << "8-Exercici 8"<< endl;
    cout << "9-Exercici 9\t";
    cout << "10-Exercici 10"<< endl;
    cout << "11-Exercici 11\t";
    cout << "12-Exercici 12"<< endl;
    cout << "13-Exercici 13\t";
    cout << "14-Exercici 14"<< endl;
    cout << "15-Exercici 15\t";
    cout << "16-Exercici 16"<< endl;
    cout << "17-Exercici 17\t";
    cout << "18-Exercici 18"<< endl;
    cout << "19-Exercici 19\t";
    cout << "20-Exercici 20"<< endl;
    cout << "21-Sortir"<<endl;;
    cout << "Selecciona el programa que vols executar => ";
    
    cin >> op;
    
    if(op>21 || op<1){
        cout <<"El valor a introduir va del 1 al 21.";
        writeMenu();
    }
    
    return op;
}
/**
 *Exercici 1
Fer un programa que llegeixi un nombre enter i escrigui el seu valor absolut. 
 */
void ex1(){
    int a;
    cout << "Nombre a => ";
    cin >> a;
    if (a<0){
      a=a*-1;
    }    
    cout << "Valor absolut de a és: " << a << endl;  
}
/**
 * Exercici 2
Fer un programa que llegeixi quatre nombres enters i a continuació escrigui el més gran
dels quatre, utilitzant el mínim nombre de comparacions possible i sense utilitzar cap
variable auxiliar.
 */
void ex2(){
    
    int a,b,c,d;
    
    cout << "Nombre a => ";
    cin >> a;
    cout << "Nombre b => ";
    cin >> b;
    cout << "Nombre c => ";
    cin >> c;
    cout << "Nombre d => ";
    cin >> d;
    
    
    cout << "El nombre ";
    
    if(a>b && b>c && c>d){
        
        cout << a;
    
    }else if(b>a && a>c && c>d){
        
        cout << b;
   
    }else if(c>a && a>b && b>d){
    
        cout << c;
    
    }else{
        
        cout << d;
    }
    
    cout << "és el més gran." <<endl;
    
}
/**
 * Exercici 3
Fer un programa que llegeixi tres nombres enters i digui quin és el màxim, i quin és el
mínim, utilitzant el menor nombre de comparacions possible.
 */
void ex3(){
    int a,b,c;
    
    cout << "Nombre a => ";
    cin >> a;
    cout << "Nombre b => ";
    cin >> b;
    cout << "Nombre c => ";
    cin >> c;

    cout << "Valor Max: ";
        if(a>b && b>c){
            //Max A
            cout << a <<endl;
        }else if(b>a && a>c){
            //Max B
            cout << b <<endl;
        }else{
            //Max C
            cout << c <<endl;
        }
    cout <<"Valor Min: ";
        if(a<b && a<c){
            //Min A
            cout << a <<endl;
        }else if(b<a && b<c){
            //Min B
            cout << b <<endl;
        }else{
            //Min c
            cout << c <<endl;
        } 
}
/**
 * Exercici 4
a) Fer un programa que llegeixi una nota d’examen i ens escrigui per pantalla la nota
d’acta corresponent. És a dir, si la nota és 0, 1, 2, 3 ó 4, ha d’escriure “Suspès”; si la
nota és 5 ó 6, ha d’escriure “Aprovat”; si la nota és 7 ó 8, “Notable”; si la nota és 9,
“Excel·lent” i si la nota és 10, “Matrícula”. Suposeu que la nota és un valor enter.
S’ha de comprovar que el valor de la nota sigui correcte (entre 0 i 10). En cas
contrari, s’haurà de mostrar un missatge d’error.
b) Feu una segona versió del programa suposant que la nota pot ser un valor real.
 */
void ex4(){
    //V.A
    int nota;
    cout << "Nota d'acta: ";
    cin >> nota;
    
    if(nota<0 || nota>10){
        cout << "La nota d'acta ha de ser un valor del 0 al 10.";
    }else{
        
        if(nota<5){
            //Suspès
            cout << "Suspès" <<endl;
        }else if(nota < 7){
            //Aprovat
            cout << "Aprovat" <<endl;
        }else if(nota < 9){
            //Notable
            cout << "Notable" <<endl;
        }else{
            //Excel·lent
            cout << "Excel·lent" <<endl;
        }
    }
    //V.B
    float nota2;
    cout << "Nota d'acta: ";
    cin >> nota2;
    
    if(nota2<0 || nota2>10){
        cout << "La nota d'acta ha de ser un valor del 0 al 10.";
    }else{
        
        if(nota2<5){
            //Suspès
            cout << "Suspès" <<endl;
        }else if(nota2 < 7){
            //Aprovat
            cout << "Aprovat" <<endl;
        }else if(nota2 < 9){
            //Notable
            cout << "Notable" <<endl;
        }else{
            //Excel·lent
            cout << "Excel·lent" <<endl;
        }
    }
}
/**
 *Exercici 5
Fer un programa que llegeixi tres valors corresponents al dia, mes i any i digui si la data
corresponent és correcta o no. S’ha de fer seguint aquests passos:
a) Fer un programa que llegeixi un número de mes (del 1 al 12) i ens escrigui el
número de dies que té aquest mes (suposant que febrer sempre té 28 dies). Si el
número de mes no és correcte ha de mostrar un missatge d’error.
b) Fer un programa que llegeixi el valor del dia del mes i el número de dies que té un
mes i ens digui si el valor del dia és correcte per aquell mes.
c) Fer un programa que llegeixi un any i ens digui si febrer té 28 ó 29 dies en aquell
any. Recordeu que febrer té 29 dies en els anys de traspàs i que un any és de traspàs
si és múltiple de 4, però no de 100 ó si és múltiple de 100 i a la vegada de 400.
d) Fer un programa complet fusionant els tres programes anteriors en un de sol. 
 */
void ex5(){
   
/**
 * a) Fer un programa que llegeixi un número de mes (del 1 al 12) i ens escrigui el
número de dies que té aquest mes (suposant que febrer sempre té 28 dies). Si el
número de mes no és correcte ha de mostrar un missatge d’error.
 */   
    int mes;
    cout << "Mes => ";
    cin >> mes;
    if(mes > 12 || mes < 0){
        cout << "El número de mes no és correcte" <<endl;
    }else{
        switch(mes){
            case 2://Febrer
                cout << "28";
                break;
            case 5:
                cout << "29";
            case 1://Gener
            case 4://Abril
            case 6: //Juny
            case 9://Setembre
            case 10://Octubre
            case 11://Novembre
                cout << "30";
                break;
            case 3:
            case 7:
            case 8:
            case 12:
                cout << "31";
            default:
                break;
        }
        cout << " Dies." << endl;;
    }
/**
 * b) Fer un programa que llegeixi el valor del dia del mes i el número de dies que té un
        mes i ens digui si el valor del dia és correcte per aquell mes.
 */
    int dia_mes, dies_mes;
    cout << "Valor del dia del mes => ";
    cin >> dia_mes;
    cout << "Dies que te el mes actual => ";
    cin >> dies_mes;
    
    if(dies_mes >= 28 && dies_mes <= 31){
        if(dia_mes > 0 && dia_mes <= dies_mes){
            cout << "Valor correcte dins el mes" <<endl;
        }else{
            cout << "Valor incorrecte." << endl;
        }
    }else{
        cout << "Valor total de dies en el mes erroni" <<endl;
    }
/*
c) Fer un programa que llegeixi un any i ens digui si febrer té 28 ó 29 dies en aquell
any. Recordeu que febrer té 29 dies en els anys de traspàs i que un any és de traspàs
si és múltiple de 4, però no de 100 ó si és múltiple de 100 i a la vegada de 400.
*/
    int any;
    
    cout << "Introdueix el any => ";
    
    cin >> any;
    
    if((any%4==0 && any%100!=0) || (any%100==0 && any%400==0)){
        
        cout << "Sí ";
    }else{
        cout <<"No ";
    }
    cout << "és any de transpàs" <<endl;
    
    
//d) Fer un programa complet fusionant els tres programes anteriors en un de sol.     
    
    
    //falta
    
}
/**
 * 
 * Exercici 6
Donades les següents variables,
var
Dia: caràcter; 
  /* L:dilluns, M:dimarts, X:dimecres, J:dijous, V:divendres, S:dissabte, D:diumenge 
Mes: enter; /* prendrà valors entre 1 i 12 
fivar
fer un programa que llegeixi un dia de la setmana i un mes i comprovi si el dia
emmagatzemat a les variables és festiu o no. Suposarem que en la nostra empresa són
festius els caps de setmana, els dies del mes d’agost i els divendres de juliol. El
programa ha de comprovar també que el dia i el mes siguin valors vàlids i, en cas
contrari, donar un missatge d’error.
 */

void ex6(){
    char dies[7]={'L','M','X','J','V','S','D'};
    char dia;
    int mes;
    bool correcte=false;
    
    cout << "Dia => ";
    cin >> dia;
    
    for(int i=0; i<7; i++){
        
        if(dia==dies[i]){
            correcte=true;
            break;
        }
    }
    
    if(correcte){
    
    cout << "Mes => ";
    cin >> mes;
    
    if(mes<13 && mes>0){
        
        if(dia=='S' || dia=='D' || mes==8){
            cout << "És festiu!" << endl;
        }else if(dia=='V' && mes==7){
            cout << "És festiu!" << endl;
        }else{
            cout << "No és festiu" << endl;
        }
        
        
    }else{
        cout << "Valor del dia incorrecte." <<endl;
    }
    
    
    }else{
        cout << "Valor del dia incorrecte." <<endl;
    }
    
}
/**
 * Exercici 7
Fer un programa que calculi el canvi que ha de donar una màquina de venda de
begudes. La màquina accepta i dóna canvi de monedes de 2 i 1 euros i de 50, 20, 10 i 5
cèntims El programa ha de demanar l’import de la beguda que volem comprar i la
quantitat de diners que introduïm a la màquina. Ha de calcular el canvi i escriure la
quantitat mínima de monedes de cada tipus (2, 1, 0.50, 0.20, 0.10 i 0.05 euros) que ens
ha de retornar.
 */
#include "Maquina.h";
void ex7(){
    
    float valor=1.75;
    int m2=2, m1=1, m50=2, m20=2, m10=2, m5=2;//6.70
    
    /*
    cout << "Preu del producte => ";
    cin >> valor;
    cout << "Monedes de 2€ insertades => ";
    cin >> m2;
    cout << "Monedes de 1€ insertades => ";
    cin >> m1;
    cout << "Monedes de 0.50€ insertades => ";
    cin >> m50;
    cout << "Monedes de 0.20€ insertades => ";
    cin >> m20;
    cout << "Monedes de 0.10€ insertades => ";
    cin >> m10;
    cout << "Monedes de 0.05€ insertades => ";
    cin >> m5;*/
    
    Maquina m(valor,m2,m1,m50,m20,m10,m5);
    m.getCanvi();
    
}
/**
 *Exercici 8
Fer un programa que llegeixi dues hores del dia en format 24 hores (HH:MM:SS) i
calculi el temps en segons que ha passat des de la primera hora fins a la segona.
Nota: Suposarem que la primera hora és més petita que la segona. 
 */
void ex8(){
    string h1, h2;
    cout << "H1 (HH:MM:SS) => ";
    cin >> h1;
    cout << "H2 (HH:MM:SS) =>";
    cin >> h2;
    
    int a=h1.length();
    cout <<"Length => "<< a<<endl;
    
}
/**
 * Exercici 9
a) Fer un programa que calculi la suma, el producte i la mitja dels 100 primers nombres
naturals (començant per 1). Feu tres versions utilitzant les tres estructures iteratives
(while, do_while, for).
b) Modifiqueu el programa anterior perquè calculi la suma, el producte i la mitja dels
primers nombres naturals des de 1 fins a un número qualsevol introduït per teclat.
Feu també tres versions utilitzant les tres estructures iteratives.
c) Torneu a modificar el programa anterior per calcular la suma, el producte i la mitja
només dels nombres parells compresos entre dos límits que s’han de llegir per teclat.
Utilitzeu també les tres estructures iteratives.
d) Quina
 */
void ex9(){
    
}
/**
 * Exercici 10
Fer un programa que llegeixi 10 nombres enters per teclat i calculi i escrigui la suma
dels nombres parells, quants nombres parells hi ha i la mitja dels nombres senars. Feu
tres versions, utilitzant les tres estructures iteratives.
 */
void ex10(){
    
}
/**
 * 
 */
void ex11(){
    
}
/**
 * 
 */
void ex12(){
    
}
/**
 * 
 */
void ex13(){
    
}
/**
 * 
 */
void ex14(){
    
}
/**
 * 
 */
void ex15(){
    
}
/**
 * 
 */
void ex16(){
    
}
/**
 * 
 */
void ex17(){
    
}
/**
 * 
 */
void ex18(){
    
}
/**
 * 
 */
void ex19(){
    
}
/**
 * 
 */
void ex20(){
    
}


