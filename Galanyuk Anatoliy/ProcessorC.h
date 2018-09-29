#pragma once

#include"IProcessor.h"

#include"FileReader.h"

class ProcessorC : public Iprocessor
{
private:
	FileReader* file;
	std::vector<char> numbers;

public:
	ProcessorC(FileReader* file);
	std::vector<char> GetResult() override;
	void Result() override;
};

ProcessorC::ProcessorC(FileReader* file)
{
	this->file = file;
};

void ProcessorC::Result()
{
	for (int i = 0; i < file->GetFile().size(); ++i)
	{
		if (file->GetFile()[i] >= '0'  && file->GetFile()[i] <= '9')
		{
			numbers.push_back(file->GetFile()[i]);
		}
	}
}

std::vector<char> ProcessorC::GetResult()
{
	return numbers;
}

