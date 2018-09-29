#pragma once

#include<vector>

class Iprocessor
{

public:
	virtual std::vector<char>& Result(std::vector<char>& file) = 0;
};