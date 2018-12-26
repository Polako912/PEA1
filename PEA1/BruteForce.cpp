#include "BruteForce.h"
#include <algorithm>
#include <iostream>

BruteForce::BruteForce(): minPath(0)
{
	path.resize(vertex);
}

BruteForce::~BruteForce()
{
	path.clear();
}

int BruteForce::TSPalgorithm(int source)
{
	std::vector <int> vertices;

	std::vector<int> currentPath;

	minPath = INT_MAX;

	//dodwanie wierzchołków do wektora, wszytstki poza startowym
	for (auto i = 0; i < vertex; i++)
	{
		if (i != source)
			vertices.push_back(i);
	}

	do
	{
		//dodanie startowego wierzchołka do wektora ze sciezka
		currentPath.push_back(source);
		int weight = 0;
		int temp = source;

		//obliczanie wag i drog dla danych wierzcholkow
		for (int i = 0; i < vertices.size(); i++)
		{
			weight += graphData[temp][vertices[i]];
			temp = vertices[i];
			currentPath.push_back(temp);
		}

		weight += graphData[temp][source];
		currentPath.push_back(source);

		//sprawdzenie wag
		if (weight < minPath)
		{
			minPath = weight;
			path = currentPath;
		}
		else
			currentPath.clear();

		minPath = std::min(minPath, weight);

	//warunek poki nie zostana wyliczone wszystkie mozliwe kombinacje
	} while (std::next_permutation(vertices.begin(), vertices.end()));

	for (int i = 0; i < path.size(); i++)
	{

		if (i == path.size() - 1)
		{
			std::cout << path[i];
		}
		else std::cout << path[i] << " -> ";
	}

	std::cout << std::endl;

	return minPath;
}