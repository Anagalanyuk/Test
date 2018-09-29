#pragma once

#include"IProcessor.h"

#include"FileReader.h"

#include<string>

class ProcessorA : public Iprocessor
{
private:
	FileReader* file;
	std::vector<char> number;
	char* num = nullptr;
	int numbers = 0;
	int result = 0;
public:
	ProcessorA(FileReader* file);
	std::vector<char> GetResult() override;
	void Result()override;
	~ProcessorA();
};

ProcessorA::ProcessorA(FileReader*  file)
{
	this->file = file;
}

std::vector<char> ProcessorA::GetResult()
{
	char numbers[10];
	sprintf_s(numbers, "%d", result);
	number.clear();
	for (int i = 0; numbers[i] != '\0'; ++i)
	{
		number.push_back(numbers[i]);
	}
	return number;
}

void ProcessorA::Result()
{
	bool isNumber = false;
	int index = 0;
	for (int i = 0; i < file->GetFile().size(); ++i)
	{
		if (file->GetFile()[i] >= '0' && file->GetFile()[i] <= '9')
		{
			number.push_back(file->GetFile()[i]);
			isNumber = true;
		}
		else
		{
			num = new char[number.size()];
			for (int i = 0; i < number.size(); ++i)
			{
				num[i] = number[i];
			}
			numbers = atoi(num);
			if (numbers > 0)
			{
				result += numbers;
				numbers = 0;
				number.clear();
				isNumber = false;
			}
		}
	}
	if (isNumber)
	{
		for (int i = 0; i < number.size(); ++i)
		{
			num[i] = number[i];
		}
		numbers = atoi(num);
		result += numbers;
	}
}

ProcessorA::~ProcessorA()
{
	delete[] num;
}