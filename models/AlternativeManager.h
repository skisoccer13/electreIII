#pragma once
#include <vector>
#include "Alternative.h"

using namespace std;


class AlternativeManager
{
public:
	AlternativeManager();
	~AlternativeManager();
	
	void addAlternative(Alternative *alter);
	Alternative* getAlternative(int index);
	void loadAlternativeFromFile(string filePath);

	int size();
	void display();
	
private:
	std::vector<Alternative*> mAlternatives;
	static int currentID;
};
