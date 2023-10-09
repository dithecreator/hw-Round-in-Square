//
//  square.cpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#include "square.hpp"
#include <iostream>
using namespace std;
Square:: Square(){
    side = 0;
    area = 0;
}
Square:: Square(double s){
    side = s;
}
double Square:: SquareArea(){
    area = side * side;
    return area;
}

void Square:: input(){
    cout << "enter a size of the side: ";
    cin >> side;
}

double Square:: getArea() const{
    return area;
}

double Square:: getSide() const{
    return side;
}

Square:: ~Square(){}
