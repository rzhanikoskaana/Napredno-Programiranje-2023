#include<iostream>  
using namespace std;  
int findSmallest (int[],int);  
int main ()  
{  
    int myarray[19] = {(int)'R',(int)'z',(int)'h',(int)'a',(int)'n',(int)'i',(int)'k',(int)'o',(int)'s',(int)'k',(int)'a',(int)'A',(int)'n',(int)'a',(int)'I',(int)'N',(int)'K',(int)'I',1021}; 
    int pos,temp,pass=0; //kreirani se promenlivi pos-pozicija, temp-privremena, pass=0-broj na ciklusi
    cout<<"\n Input list of elements to be Sorted\n";  
    for(int i=0;i<19;i++)  
    {  
        cout<<myarray[i]<<"\t";  //Se pecati nizata kako sto e zadadena
    } 
    for(int i=0;i<19;i++)  
    {  
        pos = findSmallest (myarray,i);  //Se povikuva funkcijata findSmallest
        temp = myarray[i];  
        myarray[i]=myarray[pos];  
        myarray[pos] = temp; 
        pass++;   //Broi kolku ciklusi
    }  
    cout<<"\n Sorted list of elements is\n";  
    for(int i=0;i<19;i++)  
    {  
        cout<<myarray[i]<<"\t";  //Se pecati podredenata niza
    } 
    cout<<"\nNumber of passes required to sort the array: "<<pass;
    return 0;  
}  
int findSmallest(int myarray[],int i)  // Funkcija bubble sort, sporeduva tekoven so nareden element
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<19;j++)  
    {  
        if(myarray[j]<ele_small)  // Pogolemiot se pomestuva desno pri sto najgolemiot e posleden na krajot od prviot ciklus
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}