#include<iostream>

#include"FileReader.h"

#include "ProcessorA.h"

#include"ProcessorB.h"

#include"ProcessorC.h"

#include"Factory.h"

int main()
{
	FileReader* file = new FileReader();
	file->Load("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example.txt");
	//Iprocessor* processorA = new ProcessorA();
	//Iprocessor* processorB = new ProcessorB();
    Iprocessor* processorC = new ProcessorC();

	//file->Save("C:\\Users\\anaga\\Desktop\\Galanyuk Anatoliy\\example_out.txt", processorC->Result(file->GetFile()));

	system("pause");

}