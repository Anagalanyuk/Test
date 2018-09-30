#pragma once

#include"IProcessor.h"

#include"ProcessorA.h"

#include"ProcessorB.h"

#include"ProcessorC.h"

class Factory
{
private :
	Iprocessor* processor = nullptr;

public:

    std::vector<char>& CreateProcessorA(std::vector<char>& file);
	std::vector<char>& CreateProcessorB(std::vector<char>& file);
	std::vector<char>& CreateProcessorC(std::vector<char>& file);
};

std::vector<char>& Factory::CreateProcessorA( std::vector<char>& file)
{
	processor = new ProcessorA;
	return processor->Result(file);
	
}

std::vector<char>& Factory::CreateProcessorB(std::vector<char>& file)
{
	processor = new ProcessorB;
	return processor->Result(file);
}

std::vector<char>& Factory::CreateProcessorC(std::vector<char>& file)
{
	processor = new ProcessorC;
	return processor->Result(file);
}


