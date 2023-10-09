//
//  round.cpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#include "round.hpp"
#include <iostream>
using namespace std;
Round:: Round(){
    radius = 0;
}

Round:: Round(double r){
    radius = r;
}

void Round:: input(){
    cout << "enter a radius of the round: ";
    cin >> radius;
}

double Round:: getRadius() const{
    return radius;
}

Round:: ~Round(){};
