/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VWBumper.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:37
 */
#include "Bumper.h"
#ifndef VWBUMPER_H
#define VWBUMPER_H

class VWBumper: public Bumper {
public:
    VWBumper(int parts);
    void bringPiecesFromInventory();
};

#endif /* VWBUMPER_H */

