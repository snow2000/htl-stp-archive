/////////////////////////////////////////////////////////////////////////////
//   Programmname : main.cpp
//   Autor: Alex Hofstätter
//
//   Button - grafisches Bedienelement
//            ausgeführt mit einer Klasse
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
//   Header-Dateien
/////////////////////////////////////////////////////////////////////////////
#include "graphics.h"
#include "button.h"

#include <stdio.h>
#include <stdlib.h>
#include <string>

/////////////////////////////////////////////////////////////////////////////
//   Hauptprogramm
/////////////////////////////////////////////////////////////////////////////
int main()
{  printf(" Button by A.Hofstaetter  \n");
   printf(" mit Klassen \n");
   // Grafikfenster erzeugen
   initwindow(450,150,"Button");

   setbkcolor(WHITE);                  // Farben einstellen
   setcolor(COLOR(50,50,150));
   cleardevice();

   Button b1(100,50,100,30,"Enter");
   Button b2(100,100,100,30,"Quit");

   b1.draw();                          // Button anzeigen
   b2.draw();

   int quit=0;
   do                                  // Ereignis Schleife
   {
      if (b1.clicked())                // Button "Enter" abfragen
      {  outtextxy(300,70," Button Click ");
         delay(250);
      }
      else
         outtextxy(300,70," Button Show  ");

      if (b2.clicked())                // Button "Quit" abfragen
      {  quit=1;
         delay(250);
      }

   } while (!quit);
   closegraph();
   return 0;
}
