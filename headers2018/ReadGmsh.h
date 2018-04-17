//
//  ReadGmsh.h
//  FemSC
//
//  Created by Philippe Devloo on 17/04/18.
//

#ifndef ReadGmsh_h
#define ReadGmsh_h

#include <string>
#include <vector>
#include <map>
#include "GeoMesh.h"

class ReadGmsh
{
    
public:
    
    ReadGmsh() : fMaterialDataVec(3)
    {
        
    }
    /// reads the mesh contained in the file and fill the geometric mesh
    void Read(GeoMesh &gmesh, std::string &filename);
    
protected:
    
    /** @brief MaterialVec */
    /** Structure of both, physical entities dimension and names */
    std::vector<std::map<int,std::string> > fMaterialDataVec;

};
#endif /* ReadGmsh_h */
