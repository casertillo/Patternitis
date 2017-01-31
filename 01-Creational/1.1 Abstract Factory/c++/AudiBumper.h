/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AudiBumper.h
 * Author: casertillo
 *
 * Created on 18 January 2017, 11:37
 */
#include "Bumper.h"
#ifndef AUDIBUMPER_H
#define AUDIBUMPER_H

class AudiBumper: public Bumper {
public:
    AudiBumper(int parts);
    void bringPiecesFromInventory();
};

#endif /* AUDIBUMPER_H */

