#include "bishop.hpp"
#include "entity.hpp"
#include "SDL2/SDL.h"


#include "glm/glm.hpp"
#include <iostream>
Bishop::Bishop(glm::vec2 p_pos, bool white)
:Entity(p_pos){
        if (white) {
                currentFrame.y = 128;
        }
        else {
                currentFrame.y = 0;
        }
        currentFrame.x = 128*2;
        currentFrame.w = 128;
        currentFrame.h = 128;
}
