//
//  main.cpp
//  polymorph
//
//  Created by Jake Wignall on 16/11/2016.
//  Copyright © 2016 Jake Wignall. All rights reserved.
//

#include <iostream>


using namespace std;


class animal
{
public:
 
    void setNumberOfLegs(int x)
    {
        numLegs = x;
    }
    
    int getNumberOfLegs()
    {
        return numLegs;
    }
    
   void setFurColour(string x)
    {
        fur = x;
    }
    
    string getFurColour()
    {
        return fur;
    }

    virtual void doANoise()
    {
        cout << "woof\n";
    }
    
    
private:
    int numLegs;
    string fur;
    

};

class horse : public animal
{
public:
    horse(){}
    ~horse(){}
    
    void doANoise() override
    {
        cout << "neigh\n";
    }
    
};
        
class sheep : public animal
{
public:
    sheep(){}
    ~sheep(){}
    
    void doANoise() override
    {
        cout << "baaa\n"; // print the animal noise to the screen
    }
};


int main()
{
    horse John;
    sheep steve;
    animal *animals[2];
    animals[0] = &John;
    animals[1] = &steve;
    
    for(int i = 0; i < 2; i++)
    {
        animals[i]->doANoise();
    }
    
    animal *example = &John;
    
   
    example->setNumberOfLegs(4);
    cout << "John has " << example->getNumberOfLegs() << " legs" << endl;
    example->setFurColour("brown");
    cout << "John has " << example->getFurColour() << " fur" << endl;
    
    /*
    
    
    animal *point = &steve;
    
    point->doANoise();
    point->setNumberOfLegs(4);
    cout << "Steve has " << point->getNumberOfLegs() << " legs" << endl;
    point->setFurColour("white");
    cout << "Steve has " << point->getFurColour() << " fur" << endl;*/
}
        
        
        
        
        
        
        
        
        
        
        
        
        
