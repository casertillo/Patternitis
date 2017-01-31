/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BMWBumper.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:25
 */
#include "Bumper.h"
#ifndef BMWBUMPER_H
#define BMWBUMPER_H

class BMWBumper: public Bumper {
public:
    BMWBumper(int parts);
    void bringPiecesFromInventory();
};

#endif /* BMWBUMPER_H */

