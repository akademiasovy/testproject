

#include <stdio.h>
double priemer(int a, int b, int c){
    return (double)(a+b+c)/3;
}

double priemer(int a, int b){
   return (double)(a+b)/2;
}

double priemer(double a, double b){
   return (a+b)/2;
}

main()    // hlavna metoda
{         // zaciatok hlavnej metody
     int a,b;
     a=87; b=54;
     double x=priemer(a,b);
     printf("Priemer cisel je %f",x);
     
     int c=153;
     x=priemer(a,b,c);
     printf("\nPriemer cisel je %f",x);
}         // koniec hlavnej metody
