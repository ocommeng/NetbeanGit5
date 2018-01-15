/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.h
 * Author: snir
 *
 * Created on 15 janvier 2018, 22:18
 */

#ifndef TEST_H
#define TEST_H

class Test {
public:
    Test();
    void sayHello();
    Test(const Test& orig);
    void sayHello();
    virtual ~Test();
private:

};

#endif /* TEST_H */

