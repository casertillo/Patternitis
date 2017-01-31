/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bumper.cpp
 * Author: casertillo
 * 
 * Created on 18 January 2017, 11:21
 */

#include "Bumper.h"
#include "iostream"

using namespace std;

Bumper::Bumper(int parts){
    this->totalNumberofParts = parts;
}
void Bumper::startAssemblyLine(){
    std::cout << "Starting assembly line...\n";
}

void Bumper::fillBatch(){
    for(int i = 1; i <= this->totalNumberofParts; i++)
    {
        std::cout << "part " << i << " finished...\n";
        std::cout << "part " << i << " painted...\n";
        std::cout << "part " << i << " stored...\n";
        
    }
}
void Bumper::cleanAssemblyLine()
{
    std::cout << "Cleaning working area...\n";
}
