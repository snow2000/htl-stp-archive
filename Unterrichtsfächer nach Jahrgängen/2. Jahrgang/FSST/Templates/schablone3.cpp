/////////////////////////////////////////////////////////////////////////////
//   Programmname : schablone3.cpp
//
//   Autor   :  W. Alfery
//   Datum   :  01.09.2005
//   Version :  1
//
//   Aufgabe :  Programmaufbau eines C/C++-Programms
//              mit Programmwiederholung
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//   Headerdateien
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdlib.h>

using namespace std;


/////////////////////////////////////////////////////////////////////////////
//    Hauptprogramm
/////////////////////////////////////////////////////////////////////////////
int main()
{
   char antwort;

   do
   {
       /*  ...   ab hier den Programmteil einf�gen
	       ...   dieser Programmteil wird solange wiederholt,
	       ...   bis die "q" - Taste gedr�ckt wird.
	   */
       system ("CLS");
       cout << " Programmwiederholung " << endl;





       cout << endl << endl;
	   cout << " Programm Ende mit [q] ";
 	   cin  >> antwort;

   } while (antwort!='q');

}

/////////////////////////////////////////////////////////////////////////////

