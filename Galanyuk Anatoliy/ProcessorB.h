#pragma once

#include"IProcessor.h"

#include"FileReader.h"

class ProcessorB : public Iprocessor
{
private:
	
	std::vector<char> text;
public:

	std::vector<char>& Result(std::vector<char>& file) override;
};

std::vector<char>& ProcessorB::Result(std::vector<char>& file)
{
	int size = file.size();
	for (int i = 0; i < size; ++i)
	{
		text.push_back(file[i]);
	}
	return text;
}
