//
// Created by Jack on 01/12/2024.
//

#include "funzioni.h"

int sommaIntervalloPari(int a, int b){
  int totale = 0;
  for(int i = a; i <= b; i++){
    if(i % 2 == 0){
      totale += i;
      }
  }
  return totale;
}


int swap(int a, int b ) {
  int temp;
  if(a > b) {
    temp = a;
    a = b;
    b = temp;
    return sommaIntervalloPari(a, b);
  }
    return sommaIntervalloPari(a, b);
}