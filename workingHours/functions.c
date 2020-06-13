//
//  functions.c
//  workingHours
//
//  Created by Beatriz Vilalta on 12/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>

double calcularSalario(int totalHoras) {
  
    int extra = 0;
    double salario;
    
    if (totalHoras > 50) {
        extra = (totalHoras - 50) * 20;
       }
       
    salario = (totalHoras * 10) + extra;
    
    return salario;
}



