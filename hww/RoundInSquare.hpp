//
//  RoundInSquare.hpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#ifndef RoundInSquare_hpp
#define RoundInSquare_hpp
#include "square.hpp"
#include "round.hpp"
#include <stdio.h>

class RoundInSquare: public Square, public Round{
public:
    RoundInSquare(double s, double r);
    bool check();
    void print();
    ~RoundInSquare();

};

#endif /* RoundInSquare_hpp */
