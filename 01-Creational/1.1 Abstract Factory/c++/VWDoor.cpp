/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VWDoor.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:43
 */

#include "VWDoor.h"
#include "iostream"

VWDoor::VWDoor(int numberofParts):Door(numberofParts) {
}

void VWDoor::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Door for VW \n";
}


