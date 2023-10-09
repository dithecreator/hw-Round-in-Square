//
//  square.hpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#ifndef square_hpp
#define square_hpp

#include <stdio.h>

class Square{
    double side;
    double area;
public:
    Square();
    Square(double s);
    double SquareArea();
    void input();
    double getSide() const;
    double getArea() const;
    ~Square();
};
#endif /* square_hpp */
