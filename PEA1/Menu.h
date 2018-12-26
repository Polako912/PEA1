#pragma once
#include "Graph.h"
#include "BruteForce.h"
#include "BranchBound.h"
#include "SimulatedAnnealing.h"

class Menu
{
	Graph* graph;
	BruteForce* tsp;
	BranchBound* bb;
	SimulatedAnnealing* sa;
	
public:
	Menu();
	~Menu();
	void menuMain() const;
	void ChooseFile() const;
};
