#pragma once
#include <vector>

class Graph
{
protected:
	int vertex;
	std::vector<std::vector<int>> graphData;

public:
	Graph();
	~Graph();

	void ReadFromFile(std::string filename);
	void Display();
	void clearGraph();
	void ReadAtspFile(std::string filename, int number);
};