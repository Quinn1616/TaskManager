#pragma once
#include <iostream>
using namespace std;
#include <string>

class Task
{
private:
	string taskDescription;
	bool completed;

public:
	Task();
	Task(const string& description);
	string getDescription() const;
	void setDescription(const string& description);
	bool isCompleted() const;
	void markCompleted();
};

