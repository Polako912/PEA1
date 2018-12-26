#pragma once
#include "Graph.h"

class BruteForce: public Graph
{
private:
	std::vector<int> path;
	int minPath;
public:
	BruteForce();
	~BruteForce();
	int TSPalgorithm(int source);
};