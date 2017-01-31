/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: casertillo
 *
 * Created on 16 January 2017, 16:11
 */

#include <cstdlib>
#include "GenericCompany.h"
#include "BumpInc.h"
#include "DoorsLimited.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    genericCompany * bumpInc = new BumpInc;
    genericCompany * doorsLimited = new DoorsLimited();
    
    bumpInc->orderParts((char*)"Audi", 5);
    bumpInc->orderParts((char*)"Ford", 3);
    bumpInc->orderParts((char*)"BMW", 2);
    
    doorsLimited->orderParts((char*)"Audi", 4);
    doorsLimited->orderParts((char*)"VW", 8);
    doorsLimited->orderParts((char*)"BMW", 3);
   
    return 0;
}

