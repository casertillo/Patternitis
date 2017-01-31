/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AudiDoor.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:13
 */

#include "AudiDoor.h"
#include "iostream"

AudiDoor::AudiDoor(int numberofParts):Door(numberofParts) {
}

void AudiDoor::bringPiecesFromInventory(){
    std::cout << "gathering all the pieces to manufacture: Door for Audi \n";
}
