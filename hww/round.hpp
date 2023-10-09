//
//  round.hpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#ifndef round_hpp
#define round_hpp
#include <stdio.h>

class Round{
    double radius;
public:
    Round();
    Round(double r);
    void input();
    double getRadius() const;
    ~Round();
};

#endif /* round_hpp */
