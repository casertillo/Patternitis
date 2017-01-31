/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Door.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:00
 */

#include "Door.h"
#include "iostream"


Door::Door(int parts) {
    this->totalNumberofParts = parts;
}
void Door::startAssemblyLine(){
    std::cout << "Starting assembly line...\n";
}

void Door::fillBatch(){
    for(int i = 1; i <= this->totalNumberofParts; i++)
    {
        std::cout << "part " << i << " finished...\n";
        std::cout << "part " << i << " painted...\n";
        std::cout << "part " << i << " stored...\n";
        
    }
}
void Door::cleanAssemblyLine()
{
    std::cout << "Cleaning working area...\n";
}


