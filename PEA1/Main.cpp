#include "Menu.h"

int main()
{
	Menu menu;
	menu.menuMain();
	return 0;
}

/*#include <iostream>
#include "Menu.h"
#include <ctime>
#include "BranchBound.h"
#include "BruteForce.h"
#include <fstream>
#include "TimeMeasure.h"
#include <vector>
using namespace std;

void generacjaDanych(int N);

int main()
{
	srand(time(NULL));
	//Menu menu; //Tworze sobie obiektklasy menu, z którego potem steruje programem
	//menu.menuMain();
	BruteForce brute;
	BranchBound branch;
	TimeMeasure pomiary;
	Graph graf;
	std::vector<double>czasyBrute;
	std::vector<double>czasyBranch;
	std::string filename;
	filename = "daneDoTestow.txt";
	int source = 0;
	int N = 5;
	for (int i = 0; i < 100; i++)
	{
		
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce6.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound6.txt");
	czasyBrute.clear();
	czasyBranch.clear();

	N = 6;
	for (int i = 0; i < 100; i++)
	{
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce7.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound7.txt");
	czasyBrute.clear();
	czasyBranch.clear();
	N = 7;
	for (int i = 0; i < 100; i++)
	{
		
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce8.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound8.txt");
	czasyBrute.clear();
	czasyBranch.clear();
	N = 8;
	for (int i = 0; i < 100; i++)
	{
		
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce9.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound9.txt");
	czasyBrute.clear();
	czasyBranch.clear();
	N = 9;
	for (int i = 0; i < 100; i++)
	{
		
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce10.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound10.txt");
	czasyBrute.clear();
	czasyBranch.clear();
	N = 10;
	for (int i = 0; i < 100; i++)
	{
		
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce11.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound11.txt");
	czasyBrute.clear();
	czasyBranch.clear();
	N = 11;
	for (int i = 0; i < 100; i++)
	{
		
		generacjaDanych(N);
		brute.ReadFromFile(filename);
		branch.ReadFromFile(filename);
		pomiary.startCounting();
		brute.TSPalgorithm(source);
		czasyBrute.push_back(pomiary.getCounter());
		pomiary.startCounting();
		branch.BranchandBound(source);
		czasyBranch.push_back(pomiary.getCounter());
		std::cout << N << " - Wielkosc    " << i << " - Zrobione" << std::endl;
	}
	pomiary.saveToFile(czasyBrute, "bruteForce12.txt");
	pomiary.saveToFile(czasyBranch, "branchAndBound12.txt");
	czasyBrute.clear();
	czasyBranch.clear();
	std::cout << "Wszystkie testy wykonane kapitanie! Powodzonka ze sprawozdaniem! :D" << std::endl;
	std::cin.get();
	std::cin.get();
	exit(EXIT_SUCCESS);
}


void generacjaDanych(int N)
{
	std::fstream plik;
	plik.open("daneDoTestow.txt", std::ios::out | std::ios::trunc);
	if (plik.is_open())
	{
		plik << N << std::endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if(i == j)
				{
					plik << -1 << " ";
				}
				else 
				{
					plik << rand() % 100 + 1 << " ";
				}
			}
			plik << std::endl;
		}
		plik.close();
	}
}*/