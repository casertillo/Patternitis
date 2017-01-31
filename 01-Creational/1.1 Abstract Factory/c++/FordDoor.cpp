/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FordDoor.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:43
 */

#include "FordDoor.h"
#include "iostream"

FordDoor::FordDoor(int numberofParts):Door(numberofParts) {
}

void FordDoor::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Door for Ford \n";
}


