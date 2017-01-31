/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BumpInc.cpp
 * Author: casertillo
 * 
 * Created on 18 January 2017, 11:21
 */

#include "BumpInc.h"
#include "Bumper.h"
#include "Door.h"
#include "AudiBumper.h"
#include "cstring"
#include "iostream"
#include "FordBumper.h"
#include "VWBumper.h"
#include "BMWBumper.h"

void BumpInc::orderParts(char* brand, int quantity){
    Bumper* parts;
    
    this->brand = brand;
    this->quantity = quantity;
    
    parts = manufactureBumper();
    parts->bringPiecesFromInventory();
    parts->startAssemblyLine();
    parts->fillBatch();
    parts->cleanAssemblyLine();

}
Bumper* BumpInc::manufactureBumper(){
    if(strcmp(this->brand,"VW") == 0)
    {
       return new VWBumper(this->quantity); 
    }else if(strcmp(this->brand,"Ford") == 0)
    {
        return new FordBumper(this->quantity);
    }else if(strcmp(this->brand,"Audi") == 0)
    {
        return new AudiBumper(this->quantity);
    }else if(strcmp(this->brand,"BMW") == 0)
    {
        return new BMWBumper(this->quantity);
    }
}
Door* BumpInc::manufactureDoor(){
    
}

