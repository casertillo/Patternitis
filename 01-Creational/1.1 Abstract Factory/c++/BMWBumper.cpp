/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BMWBumper.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:25
 */

#include "BMWBumper.h"
#include "iostream"

BMWBumper::BMWBumper(int numberofParts):Bumper(numberofParts) {
}

void BMWBumper::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Bumper for BMW \n";
}

