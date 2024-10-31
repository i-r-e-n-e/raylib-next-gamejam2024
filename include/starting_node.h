#pragma once
#include "raylib.h"

enum class NodeType {
    StartingNode,
    EndingNode,
    TwoJoints,
    ThreeJoints,
    FourJoints,
};

class Node{
    public:
        Node(){
            isOn = false;
        }
        // this function needs to check if there is another node on its path with the same colored joint. 
        //returns true if it found a connection to another node and false otherwise
        bool ActivateLight();

        // this function will rotate the node 90 degrees and make a call to ActivateLight to check if a path can be lighted
        //rotating 90 degrees means updating the frame
        void isClicked();
    private:
        bool isOn;
};

