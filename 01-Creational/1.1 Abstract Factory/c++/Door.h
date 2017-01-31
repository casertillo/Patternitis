/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Door.h
 * Author: casertillo
 *
 * Created on 30 January 2017, 20:00
 */

#ifndef DOOR_H
#define DOOR_H

class Door {
public:
    Door(int parts);
    void startAssemblyLine();
    void fillBatch();
    void cleanAssemblyLine();
    virtual void bringPiecesFromInventory() = 0;
protected:
    int totalNumberofParts;

private:

};

#endif /* DOOR_H */

