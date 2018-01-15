/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Test.cpp
 * Author: snir
 * 
 * Created on 15 janvier 2018, 22:18
 */

#include "include/Test.h"
#include <iostream>

using namespace std;

Test::Test() {
}

void Test::sayHello(){
    cout << "If you see her say hello" << endl;
}

Test::Test(const Test& orig) {
}

Test::~Test() {
}

