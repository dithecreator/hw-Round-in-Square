//
//  RoundInSquare.cpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#include "RoundInSquare.hpp"
#include <iostream>
using namespace std;
RoundInSquare:: RoundInSquare(double s, double r): Square(s), Round(r){
};

bool RoundInSquare:: check(){
    return getRadius() < getArea();
}

void RoundInSquare:: print(){
    cout << "Round in square successfully created!" << endl;
    cout << "area: " << getArea() << endl;
    cout << "radius: " << getRadius() << endl;
}

RoundInSquare:: ~RoundInSquare(){};
