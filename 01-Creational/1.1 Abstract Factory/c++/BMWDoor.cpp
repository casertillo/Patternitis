/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BMWDoor.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:43
 */

#include "BMWDoor.h"
#include "iostream"

BMWDoor::BMWDoor(int numberofParts):Door(numberofParts) {
}

void BMWDoor::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Door for BMW \n";
}


