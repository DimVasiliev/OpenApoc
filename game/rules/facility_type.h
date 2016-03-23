#pragma once
#include "library/strings.h"
#include "game/stateobject.h"
#include "framework/image.h"

namespace OpenApoc
{
class FacilityType : public StateObject<FacilityType>
{
  public:
	FacilityType();
	enum class Capacity
	{
		Nothing,
		Quarters,
		Stores,
		Medical,
		Training,
		Psi,
		Repair,
		Chemistry,
		Physics,
		Workshop,
		Aliens,
	};
	static const std::map<Capacity, UString> CapacityMap;
	UString name;
	bool fixed;
	int buildCost;
	int buildTime;
	int weeklyCost;
	Capacity capacityType;
	int capacityAmount;
	int size;
	sp<Image> sprite;
};
};