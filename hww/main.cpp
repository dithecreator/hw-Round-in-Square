//
//  main.cpp
//  hww
//
//  Created by Дима on 09.10.23.
//

#include <iostream>
#include "square.hpp"
#include "round.hpp"
#include "RoundInSquare.hpp"
using namespace std;
int main() {
    RoundInSquare figure(5, 3);
    figure.SquareArea();
  

    
    if(figure.check()){
        figure.print();
    }

    else{
        cout << "error" << endl;
    }
  
}
