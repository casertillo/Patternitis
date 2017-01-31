/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VWBumper.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:37
 */

#include "VWBumper.h"
#include "iostream"

VWBumper::VWBumper(int numberofParts):Bumper(numberofParts)  {
    
}
void VWBumper::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Bumper for VW \n";
}


