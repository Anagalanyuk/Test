#pragma once

#include<iostream>

#include<fstream>

#include<string>

#include"IProcessor.h"

class FileReader
{
private:
	std::ifstream file;
	std::vector<char> symbols;
public:
	FileReader();
	std::vector<char> GetFile();
	void Load(const char* const path);
	void Save(const char* const path, Iprocessor* processor);
};

FileReader::FileReader()
{
}

std::vector<char> FileReader::GetFile()
{
	return symbols;
}

void FileReader::Load(const char* const path)
{

	std::ifstream file(path);
	if (file.is_open())
	{
		char symbol;
		while (!file.eof())
		{
			file >> symbol;
			symbols.push_back(symbol);
		}
		file.close();
		symbols.pop_back();
	}
}

void FileReader::Save(const char* const path, Iprocessor* processor)
{
	std::ofstream example_out(path);
	if (example_out.is_open())
	{
		for (int i = 0;  i < processor->GetResult().size(); ++i)
		{
			example_out << processor->GetResult()[i];
		}
		example_out.close();
	}
}