#include <iostream>
#include <vector>
#include "./headers/Point3D.h"
#include "./headers/OBJReader.h"
#include "./headers/OBJWriter.h"
#include "./headers/Triangulation.h"

int main()
{
    try
    {
        string filepath = "D:/Rohit_Workspace/CPP_CCTech/Projects_Cpp/Translator/read obj/inputfiles/sphere.obj";
        string filepath1 = "D:/Rohit_Workspace/CPP_CCTech/Projects_Cpp/Translator/read obj/outputfiles/writeObj.txt";
        Shape3D::Triangulation triangulation;
        Shape3D::OBJReader objReader;
        objReader.readOBJ(filepath, triangulation);

        Shape3D::OBJWriter objWriter;
        objWriter.writeOBJ(filepath1, triangulation);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}