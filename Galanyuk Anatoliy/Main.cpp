#include<iostream>

#include"FileReader.h"

#include "ProcessorA.h"

#include"ProcessorB.h"

#include"ProcessorC.h"

#include"Factory.h"

int main(char symbol)
{
	FileReader* file = new FileReader();
	file->Load("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example.txt");
	std::cout << "Enter argument: ";
	std::cin >> symbol;

	Factory processor;
	if (symbol == 'a')
	{
		file->Save("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example_out.txt", processor.CreateProcessorA(file->GetFile()));
	}
	else if (symbol == 'b')
	{
		file->Save("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example_out.txt", processor.CreateProcessorB(file->GetFile()));

	}
	else if (symbol == 'c')
	{
		file->Save("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example_out.txt", processor.CreateProcessorC(file->GetFile()));
	}

	system("pause");

}