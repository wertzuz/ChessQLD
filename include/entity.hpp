#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <vector>
#include <iostream>
#include <glm/glm.hpp>

class Entity
{
public:
	Entity(glm::vec2 p_pos, bool white);
	glm::vec2& getPos()
	{
		return pos;
	}
	glm::vec2 getPosCopy()
	{
		return pos;
	}
	void setPos(glm::vec2 posold)
	{
		pos.x = posold.x;
		pos.y = posold.y;
	}
	bool findIndMoves(std::vector<Entity *> Pieces, int x, int y);
	void move(glm::vec2 newPos, glm::vec2 oldPos) {
		for (glm::vec2 i: legalMoves) {
			if (i == newPos)	{
				setPos(newPos);
				hasMoved = true;
				return;
			}
	}
		setPos(oldPos);
		return;
	}
	virtual void findMoves(std::vector<Entity *> Pieces) = 0;
	std::vector<glm::vec2> legalMoves;	
	SDL_Rect getCurrentFrame();
	SDL_Rect currentFrame;
	glm::vec2 pos;
	bool white;
	bool hasMoved;
};
