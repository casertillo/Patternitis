/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VWDoor.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:43
 */
#include "Door.h"
#ifndef VWDOOR_H
#define VWDOOR_H
class VWDoor: public Door {
public:
    VWDoor(int parts);
    void bringPiecesFromInventory();
};

#endif /* VWDOOR_H */

