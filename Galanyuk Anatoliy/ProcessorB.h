#pragma once

#include"IProcessor.h"

#include"FileReader.h"

class ProcessorB : public Iprocessor
{
private:
	FileReader* file = nullptr;;
	std::vector<char> text;
public:
	ProcessorB(FileReader* file);
	std::vector<char> GetResult() override;
	void Result() override;
};

ProcessorB::ProcessorB(FileReader* file)
{
	this->file = file;
}

std::vector<char> ProcessorB::GetResult()
{
	return text;
}

void ProcessorB::Result()
{
	for (int i = 0; i < file->GetFile().size(); ++i)
	{
		text.push_back(file->GetFile()[i]);
	}
}
