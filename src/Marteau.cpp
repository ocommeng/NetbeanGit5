/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Marteau.cpp
 * Author: snir
 * 
 * Created on 15 janvier 2018, 23:57
 */

#include "include/Marteau.h"
#include <iostream>

using namespace std;

Marteau::Marteau() {
}

void Marteau::donnerUnCoup() {
    cout << "Bim!!" << endl;
}
Marteau::Marteau(const Marteau& orig) {
}

Marteau::~Marteau() {
}

