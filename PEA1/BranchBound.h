#pragma once
#include <vector>
#include "Graph.h"

struct Node
{
	int weight;
	std::vector<std::vector<int>> NodeReducedGraph;
	int bound;
	std::vector<bool> visited;
	std::vector<int> currentPath;
	friend bool operator<(const Node& a, const Node& b)
	{
		return a.weight > b.weight;
	}
};

class BranchBound : public Graph
{
private:
	std::vector<std::vector<int>> ReducedGraph;
	int minCost;
	std::vector<int> path;
public:
	BranchBound();
	~BranchBound();
	int ReduceGraph(std::vector<std::vector<int>> &vector);
	std::vector<std::vector<int>> MakeInf(int row, int col, std::vector<std::vector<int>> vector);
	void PrintPath();
	Node BranchandBound(int source);
};