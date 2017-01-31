/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FordBumper.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:29
 */

#include "FordBumper.h"
#include "iostream"

FordBumper::FordBumper(int numberofParts):Bumper(numberofParts) {
}
void FordBumper::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Bumper for Ford \n";
}

