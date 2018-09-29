#include<iostream>

#include"FileReader.h"

#include "ProcessorA.h"

#include"ProcessorB.h"

#include"ProcessorC.h"

int main()
{
	FileReader* file = new FileReader();
	file->Load("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example.txt");
	Iprocessor* processorA = new ProcessorA(file);
	processorA->Result();
	/*Iprocessor* processorC = new ProcessorC(file);
	processorC->Result();*/

	//Iprocessor* processorB = new ProcessorB(file);
	//processorB->Result();
	file->Save("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example_out.txt", processorA);

	system("pause");
}