/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   genericCompany.h
 * Author: casertillo
 *
 * Created on 18 January 2017, 11:00
 */
#include "Bumper.h"
#include "Door.h"

#ifndef GENERICCOMPANY_H
#define GENERICCOMPANY_H

class genericCompany {
public:
    virtual void  orderParts(char* brand, int quantity) = 0;
    virtual Bumper* manufactureBumper() = 0;
    virtual Door* manufactureDoor() = 0;
protected:
    char* brand;
    int quantity;
};

#endif /* GENERICCOMPANY_H */

