#pragma once

#include <math.h>

#include "Engine/Math/IntVector2.hpp"
#include "Engine/Math/Vector2.hpp"
#include "Engine/Math/MathUtils.hpp"

class PolarCoords {
public:
	PolarCoords();
	PolarCoords(float radius, float theta);
	PolarCoords(const IntVector2& v);
	PolarCoords(const Vector2& v);

	Vector2 ToVector2_InRadians();
	Vector2 ToVector2_InDegrees();

	//Member data
	float radius;
	float theta;
};