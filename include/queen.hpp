#include <SDL2/SDL.h>
#include <glm/glm.hpp>
#include <iostream>

#include "entity.hpp"
class Queen: public Entity
{
public:
    Queen(glm::vec2 p_pos, bool white);
    void findMoves() {return;} 
private:
};
