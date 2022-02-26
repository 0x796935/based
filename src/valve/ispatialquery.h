#pragma once
#include <cstdint>

class CEntity;
class CRenderableInfo
{
public:
	CEntity* renderable;
	void* alphaProperty;
	std::int32_t enumCount;
	std::int32_t renderFrame;
	std::uint16_t firstShadow;
	std::uint16_t leafList;
	std::int16_t area;
	std::int16_t flags;
	std::int16_t flags2;
};

// we don't use any of these functions
// https://gitlab.com/KittenPopo/csgo-2018-source/-/blob/main/public/bsptreedata.h#L64
class ISpacialQuery
{
public:

};