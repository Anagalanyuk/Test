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

    Iprocessor* CreateProcessorA();
	Iprocessor* CreateProcessorB();
	Iprocessor* CreateProcessorC();
	~Factory();
};

Iprocessor* Factory::CreateProcessorA()
{
	return new ProcessorA;
}

Iprocessor* Factory::CreateProcessorB()
{
	return new ProcessorB;
}

Iprocessor* Factory::CreateProcessorC()
{
	return new ProcessorC;
}

Factory::~Factory()
{
	delete processor;
}