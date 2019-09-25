#pragma once

#include "Vector2.h"

class Bezier
{
public:
	Bezier(const Vector2& p0, const Vector2& p1, const Vector2& p2, const Vector2& p3);

	void draw(SDL_Renderer *renderer) const;

	// Setter and getter for bezier smoothness
	void setSmoothness(const unsigned int to)
	{
		if (to > 0)
			bezierSmoothness = to;
	}
	unsigned int getSmoothness()
	{
		return bezierSmoothness;
	}

private:
	Vector2 p0, p1, p2, p3;

	// Number of lines the curve should be comprised of
	static unsigned int bezierSmoothness;
};
