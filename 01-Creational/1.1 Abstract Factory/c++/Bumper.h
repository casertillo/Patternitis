/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bumper.h
 * Author: casertillo
 *
 * Created on 18 January 2017, 11:21
 */

#ifndef BUMPER_H
#define BUMPER_H

class Bumper {
public:
    Bumper(int parts);
    void startAssemblyLine();
    void fillBatch();
    void cleanAssemblyLine();
    virtual void bringPiecesFromInventory() = 0;
protected:
    int totalNumberofParts;
};

#endif /* BUMPER_H */

