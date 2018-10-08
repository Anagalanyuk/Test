#pragma once

#include"IProcessor.h"

#include"FileReader.h"

#include<string>

class ProcessorA : public Iprocessor
{
private:
	std::vector<char> number;
public:
	ProcessorA();
	std::vector<char>& Result(std::vector<char>& file) override;
};

ProcessorA::ProcessorA() {};

std::vector<char>& ProcessorA::Result(std::vector<char>& file)
{
	bool isNumber = false;
	unsigned int numbers = 0;
	unsigned int result = 0;
	char num[10];
	unsigned int size = file.size();
	for ( unsigned int i = 0; i < size; ++i)
	{
		if (file[i] >= '0' && file[i] <= '9')
		{
			number.push_back(file[i]);
			isNumber = true;
		}
		else
		{
			unsigned int size = number.size();
			for (unsigned int i = 0; i < size; ++i)
			{
				num[i] = number[i];
			}
			numbers = atoi(num);
			if (numbers > 0)
			{
				result += numbers;
				numbers = 0;
				number.clear();
				for (int i = 0; num[i] != '0'; ++i)
				{
					num[i] = ' ';
				}
				isNumber = false;
			}
		}
	}

	if (isNumber)
	{
		for (unsigned int i = 0; i < number.size(); ++i)
		{
			num[i] = number[i];
		}
		numbers = atoi(num);
		result += numbers;
	}

	char temp[10];
	sprintf_s(temp, "%d", result);
	number.clear();
	for (unsigned int i = 0; temp[i] != '\0'; ++i)
	{
		number.push_back(temp[i]);
	}
	return number;
}