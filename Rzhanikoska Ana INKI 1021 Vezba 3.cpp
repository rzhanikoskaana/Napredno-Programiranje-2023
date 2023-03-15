#include <iostream>
#include <cstdlib>
using namespace std;
void ponedelnik(){                                 // f-ii za raspored po denovi
    cout<<"Arhitektura na kompjuteri "<<endl;
    cout<<"Napredno programiranje "<<endl;
}
void vtornik(){
    cout<<"Matematika 2 "<<endl;
}
void sreda(){
    cout<<"Veb tehnologii \n";
}
void cetvrtok(){
    cout<<"Matematika 2 \n";
    cout<<"Finansiski tehnologii \n";
}
void petok(){
    cout<<"sloboden den "<<endl;
}


int main ()
{
    enum brojDen {Celosen, Ponedelnik, Vtornik, Sreda, Cetvrtok, Petok, Sabota, Nedela};// enumeracija
    int den;         // "Celosen" e postaveno na pocetok kako bi imalo reden broj 0, a ostanatite denovi si go zadrzuvaat redniot broj vo sedmicata.
    cout<<"Vnesete reden broj na den, ili 0 za celosen raspored: ";   //kreiranje promenliva int za korisnikot da moze da odberi reden broj na denot
    cin>>den;                                                         //vnes na reden broj na den
    brojDen brden;                                                    //nova promenliva "brden"
    brden=(brojDen)den;                                               //na koja i se dodeluva clenot od numeracijata pod toj reden broj
    switch (brden)                                                    //switch-case ciklus koj prebaruva spored nazivot na clenot (promenlivata brden)
    {
        case Ponedelnik:
        cout<<"\nRaspored Ponedelnik \n\n"<<endl;
        ponedelnik ();
        break;
        case Vtornik :
        cout<<"\nRaspored Vtornik \n\n";
        vtornik ();
        break;
        case Sreda:
        cout<<"\nRaspored Sreda \n\n";
        sreda();
        break;
        case Cetvrtok:
        cout<<"\nRaspored Cetvrtok \n\n";
        cetvrtok();
        break;
        case Petok:
        cout<<"\nRaspored Petok \n\n";
        petok();
        break;
        case Celosen:
        cout<<"\nCelosen raspored \n";
        cout<<endl;
        ponedelnik();
        cout<<endl;
        vtornik();
        cout<<endl;
        sreda();
        cout<<endl;
        cetvrtok();
        cout<<endl;
        petok();
        break;
        default:
        cout<<"\nNepravilen vnes";
        break;
        case Sabota:        //Sabota e ostaveno prazno i bez "break" kako bi preminalo na "Nedela" pri izvrsuvanje i bi se pecatelo "Vikend".
        case Nedela:
        cout<<"\nVIKEND !!!";
        break;
    }
  
}

