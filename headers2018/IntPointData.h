//
//  IntPointData.h
//  FemCourse
//
//  Created by Philippe Devloo on 24/04/18.
//

#ifndef IntPointData_h
#define IntPointData_h

#include "DataTypes.h"

class IntPointData
{
public:
    
    VecDouble ksi;
    
    VecDouble phi;
    
    Matrix dphidksi;
    
    Matrix dphidx;
    
    Matrix axes;
    
    VecDouble x;
    
    double detjac;
    
    Matrix gradx;
    
    VecDouble solution;
    
    Matrix dsoldksi;
    
    Matrix dsoldx;
    
};
#endif /* IntPointData_h */
