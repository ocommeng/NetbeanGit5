/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Marteau.h
 * Author: snir
 *
 * Created on 15 janvier 2018, 23:57
 */

#ifndef MARTEAU_H
#define MARTEAU_H

class Marteau {
public:
    Marteau();
    void donnerUnCoup();
    Marteau(const Marteau& orig);
    virtual ~Marteau();
private:

};

#endif /* MARTEAU_H */

