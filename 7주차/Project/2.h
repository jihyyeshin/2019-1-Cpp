#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() { this->id = 1; this->weight = 20.5; this->name = "Grace"; }
	Person(int id, string name) { this->id = id; this->weight = 20.5; this->name = name; }
	Person(int id, string name, double weight) { this->id = id; this->weight = weight; this->name = name; }
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};