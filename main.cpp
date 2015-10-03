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
#include <string>
void ex8(){
    std::string t1, t2;
    int h1, m1, s1;
    int h2, m2, s2;
    
    cout << "H1 (HH:MM:SS) => ";
    //cin >> t1;
    t1="13:55:05";
    cout << "H2 (HH:MM:SS) => "<<endl;;
    //cin >> t2;
    t2="14:00:00";
    
    if(t1.length()!=8 || t1[2]!=':' || t1[5]!=':'){
        cout << "Format del temps H1 incorrecte"<<endl;
    }else if(t2.length()!=8 || t2[2]!=':' || t2[5]!=':'){
        cout << "Format del temps H2 incorrecte"<<endl;
    }else{
        
        //
        string h1_1(1,t1[0]);
        string h1_2(1,t1[1]);
        string a=h1_1+""+h1_2;
        h1=stoi(a);
        //
        string h2_1(1,t1[3]);
        string h2_2(1,t1[4]);
        string b=h2_1+""+h2_2;
        m1=stoi(b);
        //
        string h3_1(1,t1[6]);
        string h3_2(1,t1[7]);
        string c=h3_1+""+h3_2;
        s1=stoi(c);
        //
        //
        string h4_1(1,t2[0]);
        string h4_2(1,t2[1]);
        string d=h4_1+""+h4_2;
        h2=stoi(d);
        //
        string h5_1(1,t2[3]);
        string h5_2(1,t2[4]);
        string e=h5_1+""+h5_2;
        m2=stoi(e);
        //
        string h6_1(1,t2[6]);
        string h6_2(1,t2[7]);
        string f=h6_1+""+h6_2;
        s2=stoi(f);
        //

        
        bool correcte=false;
        
        if(h1<h2){
            correcte=true;
        }else if(h1==h2 && m1<m2){
            correcte=true;
        }else if(h1==h2 && m1==m2 && s1<s2){
            correcte=true;
        }else if(h1==h2 && m1==h2 && s1==s2){
            //t1=t2
            cout <<"El temps 1 és el mateix que el temps 2."<<endl;
        }else{
            //t2>t1
            
        }
     
        if(correcte==true){
            
            //t1 a seg
            int t1s=((h1*3600)+(m1*60)+(s1));
            cout <<h1<<endl;
            cout <<m1<<endl;
            cout <<s1<<endl;
            cout << t1s<<endl;
            //t2 a seg
            int t2s=((h2*3600)+(m2*60)+(s2));
            cout << t2s <<endl;
            cout << "Diferència => "<< (t2s-t1s) << "segons" <<endl;
            
            
            
        }else{
            cout <<"ERROR: El temps 1 ha de ser menor que el temps 2"<<endl;
        }
    }    
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
d) Quina de les 3 estructures iteratives creieu que és la més convenient en cada cas? Per
què?
 */
void ex9(){
/**
 * a) Fer un programa que calculi la suma, el producte i la mitja dels 100 primers nombres
naturals (començant per 1). Feu tres versions utilitzant les tres estructures iteratives
(while, do_while, for).
 */  
    //
    // FOR
    //
    int suma=0; 
    double producte=1;
    float mitjana;
    for(int i=0; i<100; i++){
        suma+=(i+1);
        producte=producte*(i+1);
    }
    mitjana=suma/100;
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    //
    // WHILE
    //
    suma=0; 
    producte=1;
    mitjana=0;
    int i=0;
    while(i<100){
        suma+=(i+1);
        producte=producte*(i+1);
        i++;
    }
    mitjana=suma/100;
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    //
    // DO WHILE
    //
    suma=0; 
    producte=1;
    mitjana=0;
    i=0;
    do{
        suma+=(i+1);
        producte=producte*(i+1);
        i++;
    }while(i<100);
         
    mitjana=suma/100;
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
/*
b) Modifiqueu el programa anterior perquè calculi la suma, el producte i la mitja dels
primers nombres naturals des de 1 fins a un número qualsevol introduït per teclat.
Feu també tres versions utilitzant les tres estructures iteratives.
*/
    
    int limit=0;
    cout<<"Limit => ";
    cin >> limit;
    
    //
    // FOR
    //
    suma=0; 
    producte=1;
    mitjana;
    
    for(int i=0; i<limit; i++){
        suma+=(i+1);
        producte=producte*(i+1);
    }
    mitjana=suma/limit;
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    //
    // WHILE
    //
    suma=0; 
    producte=1;
    mitjana=0;
    i=0;
    while(i<limit){
        suma+=(i+1);
        producte=producte*(i+1);
        i++;
    }
    mitjana=suma/limit;
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    //
    // DO WHILE
    //
    suma=0; 
    producte=1;
    mitjana=0;
    i=0;
    do{
        suma+=(i+1);
        producte=producte*(i+1);
        i++;
    }while(i<limit);
         
    mitjana=suma/limit;
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    
/*c) Torneu a modificar el programa anterior per calcular la suma, el producte i la mitja
només dels nombres parells compresos entre dos límits que s’han de llegir per teclat.
Utilitzeu també les tres estructures iteratives.
*/
    
    int limit_i=0;
    int limit_f=0;
    cout<<"Limit inicial => ";
    cin >> limit_i;
     cout<<"Limit final => ";
    cin >> limit_f;
    
    //
    // FOR
    //
    suma=0; 
    producte=1;
    mitjana;
    
    for(int i=limit_i-1; i<limit_f; i++){
        suma+=(i+1);
        producte=producte*(i+1);
    }
    mitjana=suma/(limit_f-limit_i+1);
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    //
    // WHILE
    //
    suma=0; 
    producte=1;
    mitjana=0;
    i=limit_i-1;
    while(i<limit_f){
        suma+=(i+1);
        producte=producte*(i+1);
        i++;
    }
    mitjana=suma/(limit_f-limit_i+1);
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    //
    // DO WHILE
    //
    suma=0; 
    producte=1;
    mitjana=0;
    i=limit_i-1;
    do{
        suma+=(i+1);
        producte=producte*(i+1);
        i++;
    }while(i<limit_f);
         
    mitjana=suma/(limit_f-limit_i+1);
    
    cout << "Suma" << suma <<endl;
    cout << "Producte" << producte <<endl;
    cout << "Mitjana" << mitjana <<endl;
    
/*d) Quina de les 3 estructures iteratives creieu que és la més convenient en cada cas? Per
què?
*/
    //
    // La millor forma és utilitzant el bucle for pq saps les voltes que faràs en tots els apartats.
    //
}
/**
 * Exercici 10
Fer un programa que llegeixi 10 nombres enters per teclat i calculi i escrigui la suma
dels nombres parells, quants nombres parells hi ha i la mitja dels nombres senars. Feu
tres versions, utilitzant les tres estructures iteratives.
 */
void ex10(){
    
    
    int valors[10];
    int sumaParells=0;
    int contParells=0;
    int contSenars=0;
    float mitjanaSenars=0;
    
    
    //
    // FOR
    //
    for(int i=0; i<10; i++){
        cout << "Valor " << (i+1) << " => ";
        cin >> valors[i];
        if(valors[i]%2==0){
            //Parell
            contParells++;
            sumaParells+=valors[i];
        }else{
            //Senar
            contSenars++;
            mitjanaSenars+=valors[i];
        }
    }
    mitjanaSenars=mitjanaSenars/contSenars;
    
    cout << "nº de valors parells entrats => " << contParells <<endl;
    cout << "Suma de valors parells entrats => " << sumaParells <<endl;
    cout << "Mitjana de valors senars entrats => " << mitjanaSenars <<endl;
    //
    // WHILE
    //
    valors[10];
    sumaParells=0;
    contParells=0;
    contSenars=0;
    mitjanaSenars=0;
    int i=0;
    while(i<10){
        cout << "Valor " << (i+1) << " => ";
        cin >> valors[i];
        if(valors[i]%2==0){
            //Parell
            contParells++;
            sumaParells+=valors[i];
        }else{
            //Senar
            contSenars++;
            mitjanaSenars+=valors[i];
        }
        i++;
    }
    mitjanaSenars=mitjanaSenars/contSenars;
    
    cout << "nº de valors parells entrats => " << contParells <<endl;
    cout << "Suma de valors parells entrats => " << sumaParells <<endl;
    cout << "Mitjana de valors senars entrats => " << mitjanaSenars <<endl;
    //
    // DO WHILE
    //
    valors[10];
    sumaParells=0;
    contParells=0;
    contSenars=0;
    mitjanaSenars=0;
    i=0;
    do{
        cout << "Valor " << (i+1) << " => ";
        cin >> valors[i];
        if(valors[i]%2==0){
            //Parell
            contParells++;
            sumaParells+=valors[i];
        }else{
            //Senar
            contSenars++;
            mitjanaSenars+=valors[i];
        }
        i++;
    }while(i<10);
        
    mitjanaSenars=mitjanaSenars/contSenars;
    
    cout << "nº de valors parells entrats => " << contParells <<endl;
    cout << "Suma de valors parells entrats => " << sumaParells <<endl;
    cout << "Mitjana de valors senars entrats => " << mitjanaSenars <<endl;
}
/**
 *Exercici 11
Feu tres programes que, donada una seqüència de nombres enters entrada per teclat i
que acaba amb el número 0:
a) Sumi tots els nombres positius de la seqüència.
b) Comprovi si tots els nombres de la seqüència són senars.
c) Trobi el mínim i el màxim de tota la seqüència. 
 */
void ex11(){
    
    int max=0, min=0;
    int sumPositius=0;
    bool totSenar=true;
    string cadena="";
    
    cout << "Entra una seqüència de nombre enters que acabi amb 0 => ";
    cin >> cadena;
    
    
    if(cadena[cadena.length()-1]!='0'){
        cout << "ERROR: La seqüència entrada no finalitza amb 0." <<endl;
    }else{
        
        
        for(int i=0; i<cadena.length(); i++){
            
            string aux2(1,cadena[i]);
            if(aux2=="-"){
                i++;
                string aux3(1,cadena[i]);
                aux2=aux2+""+aux3;
            }
            
            int aux=stoi(aux2);
            
            if(aux%2==0){ totSenar=false; }
            
            if(aux>0){sumPositius+=aux;}
            
            if(i==0){
                max=aux;
                min=aux;
            }else{
                if(aux<min){ min=aux; }
                if(aux>max){ max=aux; }
            }         
        }
        
        cout << "Suma valors positius => " << sumPositius <<endl;
        cout << "Tots els valors de la seqüència son senars ? ";
        if(totSenar==true){
            cout <<"Sí";
        }else{
            cout <<"No";
        }
        cout << endl;
        cout << "Valor màxim => " << max <<endl;
        cout << "Valor mínim => " << min <<endl;
    }
           
    
    
}
/**
 *Exercici 12
a) Fer un programa que permeti fer la factura corresponent a la venda de vàries unitats
d’un mateix producte. El preu del producte i el número d’unitats venudes s’han de
llegir per teclat. Al preu resultant se li ha d’aplicar un IVA del 7%. Si l’import final
després d’aplicar l’IVA és superior a 500 euros s’ha fer un descompte del 5%, i si és
superior a 1000 euros, un descompte del 10%.
b) Repetiu el programa anterior permetent que a la factura es puguin incloure més d’un
producte. En aquest cas, el programa ha d’anar llegint el preu i el número d’unitats
de tots els productes i parar quan s’introdueix un preu negatiu. La comprovació per
decidir si s’ha d’aplicar algun descompte s’ha de fer sobre l’import total de tots els
productes. 
 */
#define IVA 1.07
#define TALL_DESC1 500
#define DESC1 0.95
#define TALL_DESC2 1000
#define DESC2 0.90
void ex12(){
   /*
a) Fer un programa que permeti fer la factura corresponent a la venda de vàries unitats
d’un mateix producte. El preu del producte i el número d’unitats venudes s’han de
llegir per teclat. Al preu resultant se li ha d’aplicar un IVA del 7%. Si l’import final
després d’aplicar l’IVA és superior a 500 euros s’ha fer un descompte del 5%, i si és
superior a 1000 euros, un descompte del 10%.
    */
   int unitats;
   float preuUnitat, totalD=0, totalP, aux;
   
   
   cout << "Preu producte => ";
   cin >> preuUnitat;
   cout << "Nº de unitats => ";
   cin >> unitats;
   
   aux=preuUnitat*unitats*IVA;
   
   if(aux>TALL_DESC2){
       totalP=aux*DESC2;
       totalD=aux-totalP;
   }else if(aux>TALL_DESC1){
       totalP=aux*DESC1;
       totalD=aux-totalP;
   }else{
       totalP=aux;
   }
   cout << "Subtotal: " << aux <<endl;
   cout << "Valor descomptat: " << totalD <<endl; 
   cout << "Total: " << totalP <<endl;
   
/*   
b) Repetiu el programa anterior permetent que a la factura es puguin incloure més d’un
producte. En aquest cas, el programa ha d’anar llegint el preu i el número d’unitats
de tots els productes i parar quan s’introdueix un preu negatiu. La comprovació per
decidir si s’ha d’aplicar algun descompte s’ha de fer sobre l’import total de tots els
productes.    
 */
   
   unitats=0, aux=0, preuUnitat=0, totalD=0, totalP=0;
   
   do{
        cout << "Nº de unitats => ";
        cin >> unitats;
        cout << "Preu producte => ";
        cin >> preuUnitat;
        
        if(preuUnitat>0){
            
            aux+=unitats*preuUnitat;
            
        }else{
            
            aux=aux*IVA;
            
            if(aux>TALL_DESC2){
              
                totalP=aux*DESC2;
                totalD=aux-totalP;
            
            }else if(aux>TALL_DESC1){
                
                totalP=aux*DESC1;
                totalD=aux-totalP;
            
            }else{
                
                totalP=aux;
            }
        }
        
   }while(preuUnitat>0);
   
     cout << "Subtotal: " << aux <<endl;
     cout << "Valor descomptat: " << totalD <<endl; 
     cout << "Total: " << totalP <<endl;
}
/**
 *Exercici 13
Fer un programa que llegeixi les notes de tots els alumnes d’una classe i digui quants
alumnes estan suspesos (nota inferior a cinc), quants tenen un aprovat (nota entre 5 i 7),
quants tenen un notable (nota entre 7 i 9) i quants tenen un excel·lent (nota entre 9 i 10).
El programa ha de parar de llegir notes quan s’introdueixi un valor de nota incorrecte. 
 */
void ex13(){
    
    float nota=0;
    int contS=0, contA=0, contN=0, contE=0;
    
    do{
        
        cout << "Nota => ";
        cin >> nota;
        
        if(nota<=10 && nota>=0){
            
            
            if(nota<5){
                
                contS++;
                
            }else if(nota<7){
                
                contA++;
                
            }else if(nota<9){
                
                contN++;
                
            }else{
                
                contE++;
                
            }
            
        }
        
    }while(nota<=10 && nota>=0);
    
    cout << "Suspesos " << contS <<endl;
    cout << "Aprovats: " << contA <<endl;
    cout << "Notable: " << contN <<endl;
    cout << "Excel·lent: " << contE <<endl;
    
}
/**
 *Exercici 14
Fer un programa per comprovar si un nombre n és primer o no. 
 */
void ex14(){
    
    
    
    int num;
    bool primer=true;
    
    cout << "Valor => ";
    cin >> num;
    
    
    for(int i=num-1; i>1; i--){
        
        if(num%i==0){
            //No és número primer
            primer=false;
            break;
        }
    }
    
    cout << "El número " << num << "";
    if(primer){
        cout << " Sí "; 
    }else{
        cout << " No ";
    }
    cout << "és primer." <<endl;
}
/**
 *Exercici 15
Donada la sèrie definida per:
              a =0, a =1, a =3·a   +2·a
 *             0     1     n    n-1    n-2
a) Fer un programa que digui quin és el valor i la posició dins la sèrie del primer
element més gran o igual que 1000.
b) Modifiqueu el programa anterior per a que ens digui el valor i la posició del primer
element més gran o igual que un número qualsevol introduït per teclat. 
 */
void ex15(){
    //WTF?
}
/**
 * Exercici 16
Fer un programa que donat un enter n diferent d’1, escrigui tots els enters compresos
entre 1 i n que siguin múltiples de 3 o de 7 però no dels 2 a la vegada. S’ha de
considerar el cas en el qual en nombre n és negatiu, i ha de funcionar igualment. Per
exemple, si s’introdueix el número -10, el programa hauria de mostrar el següent
resultat: -3, -6. -7 i -9.
 */
void ex16(){
    
    int enter;
    
    cout << "Entra un enter diferent a 1 => ";
    cin >> enter;
    
    if(enter>1){
        for(int i=1; i<=enter; i++){

            if(i%3==0 && i%7!=0){
                cout << i << " ";
            }else if(i%3!=0 && i%7==0){
                cout << i << " ";
            }
            
        }
        cout <<endl;
    }else{
        for(int i=enter; i<0; i++){
            
            if(i%3==0 && i%7!=0){
                cout << i << " ";
            }else if(i%3!=0 && i%7==0){
                cout << i << " ";
            }
        }
        cout <<endl;
    }
    
}
/**
 *Exercici 17
Fer un programa que rebi per teclat un dia, mes i any, i el dia de la setmana
corresponent al primer de gener d’aquell any, i ens digui a quin dia de la setmana
correspon la data introduïda. S’ha de tenir en compte si l’any és un any de traspàs o no.
Un any és de traspàs si és múltiple de 4, però no de 100 ó si és múltiple de 100 i a la
vegada de 400. 
 */
void ex17(){
   /**
     *  N = D + M + A + E [A/4] + S 
     * 
     * Siendo: 
        · D = Día. 
        · M: "Clave del mes", de acuerdo con el siguiente cuadro: 
            Enero 0 
            Abril 6 
            Julio 6 
            Octubre 0 
            Febrero 3 
            Mayo 1 
            Agosto 2 
            Noviembre 3 
            Marzo 3 
            Junio 4 
            Septiembre 5 
            Diciembre 5    
        · A: Dos últimas cifras del número del año. En nuestro caso, A = 14. 
        · E [A/4]: Representa el resultado entero de dividir las anteriores dos 
          últimas cifras por 4. Es decir, Entero [14/4] = 3. 
        . S: Un número asociado al siglo. Desde 1900 hasta 1999, vale 0. 
           Desde 2000 hasta 2099, vale 6. 
     */
    
    int D, mes, any;
    char dia1_gener;
    int E, A, M, S, N;
    string diaS;
    
    cout << "Dia => ";
    cin >> D;
    cout << "Mes => ";
    cin >> mes;
    cout << "Any => ";
    cin >> any;
    cout << "Dia de la setmana del 1 de Gener d'aquest any (L,M,W,J,V,S,D) => ";
    cin >> dia1_gener; 
    
    //Calcular M "clau mes"
    switch(mes){
        case 1:
        case 10:
            M=0;
            break;
        case 2:
        case 3:
        case 11:
            M=3;
            break;
        case 4:
        case 7:
            M=6;
            break;
        case 9:
        case 12:
            M=5;
            break;
        case 5:
            M=1;
            break;
        case 6:
            M=4;
            break;
        case 8:
            M=2;
            break;
    }
    //Calcular A "Dos últimas cifras del número del año."
    
    string auxx=to_string(any);
    string auxx2(1,auxx[auxx.length()-2]);
    string auxx3(1,auxx[auxx.length()-1]);
    auxx=auxx2+""+auxx3;
    A=stoi(auxx);
    
    //E [A/4]: Representa el resultado entero de dividir las anteriores dos 
    //      últimas cifras por 4. i coger el valor entero 
    
    E=(int)(A/4);
    
    //S: Un número asociado al siglo. Desde 1900 hasta 1999, vale 0. 
    //       Desde 2000 hasta 2099, vale 6.
    
    if(any>=1900 && any<=1999){
        S=0;
    }else if(any>1999 && any<2100){
        S=6;
    }
    
    //N = (D + M + A + E [A/4] + S)%7 
    
    cout << "Dia => " << D <<endl;
    cout << "M (clau mes) => " << M <<endl;
    cout << "A => " << A <<endl;
    cout << "E " << E <<endl;
    cout << "S => " << S <<endl;
    
    N=(D+M+A+E+S)%7;
    
    switch(N){
        case 1:
            diaS="Dilluns";
            break;
        case 2:
            diaS="Dimarts";
            break;
        case 3:
            diaS="Dimecres";
            break;
        case 4:
            diaS="Dijous";
            break;
        case 5:
            diaS="Divendres";
            break;
        case 6:
            diaS="Dissabte";
            break;
        case 0:
            diaS="Diumenge";
            break;
        default:
            break;
    }
    
    cout << "Cau en : " <<diaS<<endl;
    
}
/**
 *Exercici 18
Fer un programa que simuli una calculadora. El programa ha de presentar un menú
indicant:
Menú Calculadora:
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Sortir
Ha de permetre seleccionar una opció i després demanar dos nombres, aplicar l’operació
seleccionada i tornar al menú. El programa s’aturarà només quan es seleccioni l’opció 5
(Sortir). Si es selecciona una opció incorrecta s’ha de mostrar un missatge d’error. En
l’opció de divisió s’ha de comprovar que el divisor sigui diferent de zero abans d’aplicar
l’operació. Si és igual a zero s’ha de donar un missatge d’error. 
 */
void ex18(){
    
}
/**
 *Exercici 19
Fer un programa que simuli el joc d’endevinar un número entre 0 i 100. El programa ha
de seleccionar a l’atzar un número enter entre 0 i 100 i l’usuari té 5 oportunitats per
endevinar quin és aquest número. A cada oportunitat, l’usuari introduirà un número
entre 0 i 100 i el programa li dirà si és més gran o més petit que el número seleccionat.
Si l’usuari endevina el número, el joc s’acaba i se l’informa que ha guanyat. Si passades
5 oportunitats encara no s’ha endevinat el número, el joc també s’acaba i s’ha
d’informar a l’usuari que ha perdut. En qualsevol dels dos casos, quan s’acaba el joc se
li ha de preguntar a l’usuari si vol jugar un altre cop i si contesta afirmativament, es
torna a començar. Per fer aquest programa podeu suposar que teniu una funció RAND(),
que retorna un número aleatori entre 0 i 1. 
 */
void ex19(){
    
}
/**
 *Exercici 20
En el joc de la ruleta hi ha diverses possibilitats d’apostes. En aquest exercici, de
moment, només considerarem els següents tres tipus d’apostes:
- Senzilla: s’aposta a un sol número i, en cas de guanyar es recupera la quantitat
apostada i es guanya una quantitat addicional equivalent a 36 cops l’aposta inicial.
- Doble: s’aposta a dos números i, en cas de guanyar es recupera la quantitat
apostada i es guanya una quantitat addicional equivalent a 17 cops l’aposta inicial.
- Quadrat: s’aposta a quatre números i, en cas de guanyar es recupera la quantitat
apostada i es guanya una quantitat addicional equivalent a 8 cops l’aposta inicial.
Diners de la Banca: la banca té una quantitat de diners per poder pagar els guanys dels
jugadors. Per no arriscar-se a quedar-se sense diners, només es deixen fer apostes en què
el guany potencial no superi el 10% del capital de la banca. Per guany potencial s’entén
la quantitat addicional que guanyaria el jugador a part de l’aposta inicial.
Es proposen els següents apartats:
a) Fer un programa que llegeixi el capital inicial de la banca, el tipus d’aposta que vol
fer el jugador i la quantitat de diners que vol apostar. En aquest punt s’haurà de
comprovar que l’aposta sigui vàlida, és a dir que es compleixin les condicions de
l’apartat “Diners de la banca”.
b) Modificar el programa anterior afegint que si l’aposta és vàlida, es generi
aleatòriament un número entre 0 i 36 (utilitzant la mateixa funció RAND() explicada
a l’exercici anterior). Després s’ha de demanar al jugador que introdueixi els
números als que vol apostar (tants com es puguin amb el tipus d’aposta que fa) i
comprovar si algun coincideix amb el número generat. Si el número generat és el 0
sempre guanya la banca i perd el jugador. Al final el programa ens ha d’informar si
el jugador ha guanyat (i, en aquest cas, dir-nos el premi que ha obtingut) i ha
d’escriure la quantitat de diners que li queden a la banca després de la partida. Si el
jugador ha perdut, la banca guanya els diners apostats i si el jugador ha guanyat, la
banca perd els diners del premi del jugador.
c) Tornar a modificar el programa anterior perquè es puguin fer més d’una partida.
Després d’una partida s’ha de preguntar si es vol tornar a jugar i, en cas de resposta
afirmativa s’ha de repetir el procés de l’apartat anterior amb el capital de la banca
actualitzat segons el resultat de l’última partida. 
 */
void ex20(){
    
}


