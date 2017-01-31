/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoorsLimited.cpp
 * Author: casertillo
 * 
 * Created on 30 January 2017, 20:09
 */

#include "DoorsLimited.h"
#include "Door.h"
#include "Bumper.h"
#include "AudiDoor.h"
#include "VWDoor.h"
#include "BMWDoor.h"
#include "FordDoor.h"
#include "cstring"
#include "iostream"

void DoorsLimited::orderParts(char* brand, int quantity){
    Door* parts;
    
    this->brand = brand;
    this->quantity = quantity;
    
    parts = manufactureDoor();
    parts->bringPiecesFromInventory();
    parts->startAssemblyLine();
    parts->fillBatch();
    parts->cleanAssemblyLine();

}
Door* DoorsLimited::manufactureDoor(){
    if(strcmp(this->brand,"VW") == 0)
    {
       return new VWDoor(this->quantity); 
    }else if(strcmp(this->brand,"Ford") == 0)
    {
        return new FordDoor(this->quantity);
    }else if(strcmp(this->brand,"Audi") == 0)
    {
        return new AudiDoor(this->quantity);
    }else if(strcmp(this->brand,"BMW") == 0)
    {
        return new BMWDoor(this->quantity);
    }
}
Bumper* DoorsLimited::manufactureBumper(){

}
