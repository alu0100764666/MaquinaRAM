/*
 *Author: Sabato Ceruso
 *Date: 05/02/2015
*/
#pragma once
#include "OutputTape.h"
#include "InputTape.h"
#include "Program.h"
#include <fstream>
#include <algorithm>
#define ACCUM 0

using namespace std;
class RamMachine
{
private:
	InputTape input_;
	OutputTape output;
	vector<int> registers_;
	Program program_;

private:
	bool add_tag(Tag, vector<Tag>&);
	bool exist_tag(Tag, vector<Tag>&);
	int get_tagLine(Tag, vector<Tag>&); 

	void load(int, int);
	void store(int, int);
	void add(int, int);
	void sub(int, int);
	void mult(int, int);
	void div(int, int);
	void read(int, int);
	void write(int, int);
	void jgtz(int);
	void jzero(int);
public:
	RamMachine();
	~RamMachine();

	void read_code(string);
	void run();
	void imprimir(instruction ins);
};

