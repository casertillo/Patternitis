/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BMWDoor.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:43
 */
#include "Door.h"
#ifndef BMWDOOR_H
#define BMWDOOR_H

class BMWDoor: public Door {
public:
    BMWDoor(int parts);
    void bringPiecesFromInventory();
};

#endif /* BMWDOOR_H */

