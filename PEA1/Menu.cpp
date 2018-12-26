#include "Menu.h"
#include <iostream>
#include "Graph.h"
#include "BruteForce.h"
#include "BranchBound.h"
#include <string>

Menu::Menu()
{
	graph = new Graph();
	tsp = new BruteForce();
	bb = new BranchBound();
	sa = new SimulatedAnnealing();
}

Menu::~Menu()
{
}

void Menu::menuMain() const
{
	int choice = 0;
	int source = 0;
	int result = 0;
	std::string filename;

	do
	{
		std::cout << "1.Wczytaj dane z pliku" << std::endl;
		std::cout << "2.Wyswietl dane" << std::endl;
		std::cout << "3.Algorytm Brute Force" << std::endl;
		std::cout << "4.Algorytm Branch and Bound" << std::endl;
		std::cout << "5.Symulowanie wyzarzanie" << std::endl;
		std::cout << "6." << std::endl;
		std::cout << "7.Wyjscie" << std::endl;
		std::cin.clear();
		std::cout << "Wybor: " << std::endl;
		std::cin >> choice;

		switch(choice)
		{
		case 1:
			system("cls");
			std::cout << "Podaj nazwe pliku z ktorego chcesz wczytac dane: " << std::endl;
			std::cin >> filename;
			bb->ReadFromFile(filename);
			tsp->ReadFromFile(filename);
			bb->Display();
			break;
		case 2:
			system("cls");
			bb->Display();
			break;
		case 3:
			system("cls");
			std::cout << "Podaj zrodlowy wierzcholek: " << std::endl;
			std::cin >> source;
			if (source >= 0)
			{
				std::cout << "Minimlana sciezka za pomoca algorytmu brute force: " << std::endl;
				std::cout << tsp->TSPalgorithm(source) << std::endl;
			}
			break;
		case 4:
			system("cls");
			std::cout << "Podaj zrodlowy wierzcholek: " << std::endl;
			std::cin >> source;
			if (source >= 0)
			{
				std::cout << "Minimlana sciezka za pomoca algorytmu B&B: " << std::endl;
				bb->BranchandBound(source);
				bb->PrintPath();
			}
			else
				std::cout << "Wierzcholek startowy nie moze byc mniejszy niz 0" << std::endl;
			break;
		case 5:
			ChooseFile();
			//sa->Display();
//			result = sa->FirstSolution();
//			std::cout << result;
			//sa->SimAnnealing();
			break;
		case 6:
			break;
		case 7:
			exit(EXIT_SUCCESS);
		default: 
			system("cls");
			break;
		}

	} while (true);
}

void Menu::ChooseFile() const
{
	int choice;
	std::cout << "Ktory plik otworzyc?" << std::endl
		<< "1. ftv47.atsp" << std::endl
		<< "2. ftv170.atsp" << std::endl
		<< "3. rbg403.atsp" << std::endl;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		sa->ReadAtspFile("ftv47.atsp", 48);
		break;
	case 2:
		sa->ReadAtspFile("ftv170.atsp", 171);
		break;
	case 3:
		sa->ReadAtspFile("rbg403.atsp", 403);
		break;
	default:
		break;
	}
}
