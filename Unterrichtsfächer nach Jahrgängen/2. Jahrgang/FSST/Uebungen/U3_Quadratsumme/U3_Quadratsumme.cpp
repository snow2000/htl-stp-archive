/////////////////////////////////////////////////////////////////////////////
//   Programmname : *.cpp
//   Autor: Alex Hofstätter
//
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//   Header-Dateien
/////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <time.h>
#include "bse_console.h"

using namespace std;

/////////////////////////////////////////////////////////////////////////////
//   Funktionen
/////////////////////////////////////////////////////////////////////////////
 float qdrsumme(int n)
 {  float summe = 0;

    for (int i=1; i <= n; i++)
    {   summe = summe + i*i;
    }
    return summe;

 }

/////////////////////////////////////////////////////////////////////////////
//   Hauptprogramm
/////////////////////////////////////////////////////////////////////////////
int main()
{   char key;
    do
    {
        int n;
        printf("n=");
        scanf("%d",&n);
        printf("Summe aller Quadrate: %f\n\n",qdrsumme(n));

    }while(key != 27);
    return 0;

 }
