/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AudiBumper.cpp
 * Author: casertillo
 * 
 * Created on 18 January 2017, 11:37
 */

#include "AudiBumper.h"
#include <iostream>

using namespace std;

AudiBumper::AudiBumper(int numberofParts):Bumper(numberofParts) {
    
}

void AudiBumper::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Bumper for Audi \n";
}

