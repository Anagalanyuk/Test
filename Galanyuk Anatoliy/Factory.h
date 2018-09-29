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

    ProcessorA CreateProcessorA();
};

ProcessorA Factory::CreateProcessorA()
{
	return  ProcessorA();
}


