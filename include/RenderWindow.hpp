#pragma once
#include <glm/glm.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include "Entity.hpp"


class RenderWindow 
{
public:
	RenderWindow(const char* p_title, int p_w, int p_h);
	int displayWelcomeMessage(TTF_Font* font128, TTF_Font* comment, int height, int width, const char* text);
	SDL_Texture* loadTexture(const char* p_filePath);
	void cleanUp();
	void clear();
	void render(Entity& p_entity, glm::vec2 offset);
	void renderbg(SDL_Texture* tex, int Groesex, int Groesey, bool Bild);

	void ToggleFullscreen();
	void display();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};
