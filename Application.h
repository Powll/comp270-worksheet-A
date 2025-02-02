#pragma once

#include "Vector2.h"
#include "Bezier.h"
#include <math.h>

class Application
{
public:
	Application();

	bool run();

private:
	bool initSDL();
	void shutdownSDL();
	SDL_Texture *loadTexture(const std::string& filename);

	void processEvent(const SDL_Event &e);
	void render();

	void drawCarOnTrack(float position);
	void drawCar(const Vector2& position, float angleDegrees);
	void updateCarPosition();

	const int c_windowWidth = 800;
	const int c_windowHeight = 600;

	SDL_Window *m_window = nullptr;
	SDL_Renderer *m_renderer = nullptr;

	int curveToFollow = 0;

	Vector2 m_start;
	Vector2 m_end;

	bool m_quit = false;

	SDL_Texture *m_carSprite = nullptr;

	// Vector containing all the Bezier curves forming the track
	std::vector<Bezier> m_track;
	float m_carPosition = 0.0f;
	float m_speedModifier = 1.0f;
};

