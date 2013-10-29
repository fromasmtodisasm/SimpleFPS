//
//  GameManager.h
//  SimpleFPS
//
//  Created by Dimitriy Dounaev on 1/09/13.
//  Copyright (c) 2013 Dimitriy Dounaev. All rights reserved.
//

#ifndef __SimpleFPS__GameManager__
#define __SimpleFPS__GameManager__

#include <iostream>
#include <GLFW/glfw3.h>
#include "RenderSystem.h"
#include "ResourceManager.h"
#include "MovementSystem.h"
#include "Entity.h"

class GameManager
{
private:
    
    bool _running;
    RenderSystem *_renderSystem;
    ResourceManager *_resourceManager;
    MovementSystem *_movementSystem;
    GLFWwindow *_window;
    
    Entity *entity;

    
    GameManager(bool running);
    ~GameManager();

public:

    void runGameLoop();
    
    static GameManager& getGameManager();
    static void destroyGameManager();
    
};

#endif /* defined(__SimpleFPS__GameManager__) */
