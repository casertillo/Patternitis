/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FordDoor.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:43
 */
#include "Door.h"
#ifndef FORDDOOR_H
#define FORDDOOR_H

class FordDoor: public Door {
public:
    FordDoor(int parts);
    void bringPiecesFromInventory();

};

#endif /* FORDDOOR_H */

