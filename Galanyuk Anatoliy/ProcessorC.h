#pragma once

#include"IProcessor.h"

#include"FileReader.h"

class ProcessorC : public Iprocessor
{
private:
	std::vector<char> numbers;

public:

	std::vector<char>& Result(std::vector<char>& file) override;
};

std::vector<char>& ProcessorC::Result(std::vector<char>& file)
{
	int size = file.size();

	for (int i = 0; i < size; ++i)
	{
		if (file[i] >= '0'  && file[i] <= '9')
		{
			numbers.push_back(file[i]);
		}
	}
	return numbers;
}

