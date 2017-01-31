/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DoorsLimited.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:09
 */
#include "GenericCompany.h"
#include "Door.h"
#include "Bumper.h"

#ifndef DOORSLIMITED_H
#define DOORSLIMITED_H

class DoorsLimited: public genericCompany {
public:
    void orderParts(char* brand, int quantity);
    Door* manufactureDoor(void);
    Bumper* manufactureBumper(void);
private:

};

#endif /* DOORSLIMITED_H */

