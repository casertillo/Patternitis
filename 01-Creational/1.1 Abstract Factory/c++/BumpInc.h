/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BumpInc.h
 * Author: casertillo
 *
 * Created on 18 January 2017, 11:21
 */
#include "GenericCompany.h"
#include "Bumper.h"

#ifndef BUMPINC_H
#define BUMPINC_H

class BumpInc: public genericCompany {
public:
    void orderParts(char* brand, int quantity);
    Bumper* manufactureBumper(void);
    Door* manufactureDoor(void);
};

#endif /* BUMPINC_H */

