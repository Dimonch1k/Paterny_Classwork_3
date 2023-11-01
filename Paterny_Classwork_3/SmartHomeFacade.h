#pragma once
#include <iostream>
using namespace std;


#include "Electronic.h"
#include "Hand_Things.h"
class SmartHomeFacade
{
private:
	Electronic* electronic = new Electronic();
	Hand_Things* hand_turns = new Hand_Things();

public:
	string makeTurn()
	{
		string result = "Hand things, which person can make:\n";
		result += hand_turns->Vacuum_floar();
		result += hand_turns->plugIn_oulet_TV_wire();

		result += "\nElectronic things, which person can make:\n";
		result += electronic->OnLight();
		result += electronic->OnTV();
		return result;
	}
};

