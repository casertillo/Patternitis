/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AudiDoor.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:13
 */
#include "Door.h"
#ifndef AUDIDOOR_H
#define AUDIDOOR_H

class AudiDoor: public Door {
public:
    AudiDoor(int parts);
    void bringPiecesFromInventory();
};

#endif /* AUDIDOOR_H */

