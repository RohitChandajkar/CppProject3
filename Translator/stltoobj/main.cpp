#include <iostream>
#include <vector>
#include "./headers/Point3D.h"
#include "./headers/Triangulation.h"
#include "./headers/STLReader.h"
#include "./headers/StlToObj.h"

int main()
{
    try
    {

        string filepath = "D:/Rohit_Workspace/CPP_CCTech/Projects_Cpp/Translator/stltoobj/inputfiles/cube.stl";
        string filepath1 = "D:/Rohit_Workspace/CPP_CCTech/Projects_Cpp/Translator/stltoobj/outputfiles/stltoobj.obj";
        Shape3D::Triangulation triangulation;
        Shape3D::STLReader stlReader;
        stlReader.readSTL(filepath, triangulation);

        Shape3D::StlToObj stlToObj;
        stlToObj.stlToObjConversion(filepath1, triangulation);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}