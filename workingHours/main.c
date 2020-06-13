//
//  main.c
//  workingHours
//
//  Created by Beatriz Vilalta on 11/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>
double calcularSalario(int totalHoras);

int main() {
    
    int totalHoras;
    double salario;
    
    printf("Digite a quantidade de horas: ");
    scanf("%d", &totalHoras);
    
    salario = calcularSalario(totalHoras);
   
    printf("Salário = %.2lf reais\n", salario);
    
    return 0;
}


