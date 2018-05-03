#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <time.h>

long timer(int start)
/////////////////////////////////////////////////////////////////////////////
//   Zeitmessung  in  Millisekunden
//   Import : int start    ... Starten mit 1, Stoppen mit 0
//   Return : int          ... Zeitwert in ms
/////////////////////////////////////////////////////////////////////////////
{  static long t1=0;
   long t2=t1;

   if(start!=0) t1=clock()*1000/CLOCKS_PER_SEC;         // Startzeitpunkt
   if(start==0) t2=clock()*1000/CLOCKS_PER_SEC;         // Stoppzeitpunkt
   return (t2-t1);                                      // Differenzzeit in ms
}

void quick_sort(int a[],int li, int re)
/////////////////////////////////////////////////////////////////////////////
// sortiert das Array a[] ansteigend nach der Methode Quicksort
// Import : int a[] ... Integer-Array
//          int li  ... Position links von Pivotelement
//          int re  ... Position rechts von Pivotelement
/////////////////////////////////////////////////////////////////////////////
{  int l=li,r=re;
   int pivot=(l+r)/2; // Pivotpunkt
   int pel=a[pivot];  // Wert des Pivotelementes
   do
   {  while(a[l]<pel) l++;  // wandere mit l nach rechts bis zu pel
      while(a[r]>pel) r--;  // wandere mit r nach links bis zu pel
      if(l < r)   // und tausche wenn linker < rechter Position
      {  int hilf=a[l];
         a[l]=a[r];
         a[r]=hilf;
      }
      if(l<=r)
      {  l++;
         r--;
      }
   }
   while(l <= r);    // wiederhole solange linke <= rechte Position
   if(li < r) quick_sort(a,li,r);  // rekursiver Aufruf
   if(l < re) quick_sort(a,l,re);  // rekursiver Aufruf
}

void bubble_sort(int a[], int n)
/////////////////////////////////////////////////////////////////////////////
//   sortiert das Array a[] ansteigend nach der Methode Bubble-Sort
//   Import : int a[]      ... Integer-Array
//            int n        ... Anzahl der Feldelemente
/////////////////////////////////////////////////////////////////////////////
{  int i,j,hilf;
   for(i=0; i<n; i++)             // nehme i-tes Element,
   {  for(j=i+1; j<n; j++)        // vergleiche mit den restlichen Elementen
      {  if(a[i]>a[j])          // und tausche die Elemente wenn notwendig
         {  int hilf=a[i];
            a[i]=a[j];
            a[j]=hilf;
         }
      }
   }
}

void insertion_sort(int a[], int n)
/////////////////////////////////////////////////////////////////////////////
//   sortiert das Array a[] ansteigend nach der Methode Insertion-Sort
//   Import : int a[]      ... Integer-Array
//            int n        ... Anzahl der Feldelemente
/////////////////////////////////////////////////////////////////////////////
{  int i,j;
   for(i = 1; i<n; i++)             // nehme i-tes Element,
   {  int m = a[i];

      for(j = i; a[j-1]>m && j>0; j--)
      {  a[j] = a[j-1];
      }
      a[j] = m;
   }
}

void array_rand(int a[], int n, int r1, int r2)
/////////////////////////////////////////////////////////////////////////////
//   dem Array a n-Zufallszahlen im Bereich von r1 bis r2 zuweisen
//   Import : int n      ...  Feldgr��e
//            int r1     ...  Bereichsanfang
//            int r2     ...  Bereichsende
//   Export : int a[i]   ...  Feld
//
///////////////////////////////////////////////////////////
{  for(int i = 0; i < n; i++)
      a[i] = rand() % (r2 - r1 + 1) + r1;
}

