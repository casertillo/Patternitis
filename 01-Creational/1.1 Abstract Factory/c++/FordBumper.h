/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FordBumper.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:29
 */
#include "Bumper.h"

#ifndef FORDBUMPER_H
#define FORDBUMPER_H

class FordBumper: public Bumper {
public:
    FordBumper(int parts);
    void bringPiecesFromInventory();
};

#endif /* FORDBUMPER_H */

