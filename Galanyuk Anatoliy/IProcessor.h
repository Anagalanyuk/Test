#pragma once

#include<vector>

class Iprocessor
{

public:
	virtual void Result() = 0;
	virtual std::vector<char> GetResult() = 0;
};