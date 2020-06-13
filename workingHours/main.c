//
//  main.c
//  workingHours
//
//  Created by Beatriz Vilalta on 11/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>
double calculateSalary(int totalHours);

int main() {
    
    int totalHours;
    double salary;
    
    printf("Type the number of hours worked in a month: ");
    scanf("%d", &totalHours);
    
    salary = calculateSalary(totalHours);
   
    printf("Salary = %.2lf \n", salary);
    
    return 0;
}


