//
//  functions.c
//  workingHours
//
//  Created by Beatriz Vilalta on 12/06/20.
//  Copyright © 2020 Beatriz Vilalta. All rights reserved.
//

#include <stdio.h>

double calculateSalary(int totalHours) {
  
    int extra = 0;
    double salary;
    
    if (totalHours > 50) {
        extra = (totalHours - 50) * 20;
       }
       
    salary = (totalHours * 10) + extra;
    
    return salary;
}



