#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   
int baslangıcrezervi = 1000;


int gunluktuketim = 250 ;
int gunlukyagmur = 20;
int gunlukbuharlasma = 3;
 int gunluknettuketim = gunluktuketim - gunlukyagmur + (baslangıcrezervi*gunlukbuharlasma);
    int sudayanmasuresi = gunluknettuketim/baslangıcrezervi;
    
    ofstream out("dayanmasüresi.txt");
    if(baslangıcrezervi>700){
out << "su tüketimi normal" ; }
    else if(baslangıcrezervi<700&&baslangıcrezervi>300){
    out << "su tüketimi tasarruf";
    }
    else{
   out << "su tüketimi acil";
    }
out << sudayanmasuresi <<" gün dayanır";
    return 0;
}
