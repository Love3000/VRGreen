#include "Time.hpp"

#include "Common.hpp"
#include <Utils\Offsets.h>

float Time::deltaTime()
{
	using func_t = float(*)();

	func_t func = GetMethod<func_t>(DELTATIME);

	return func();
}
