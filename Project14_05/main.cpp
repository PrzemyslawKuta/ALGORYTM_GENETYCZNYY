#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

#include "TCandidate_Zad1.h"
#include "TCandidate.h"
#include "TCandidate_Zad2.h"

using namespace std;

int main()
{
	srand(time(0));

	vector<TCandidate*> candidates;

	candidates.push_back(new TCandidate{});
	candidates.push_back(new TCandidate_Zad1{});
	candidates.push_back(new TCandidate_Zad2{});

	for (int i = 0;i < candidates.size();i++)
	{
		candidates[i]->rate();
		candidates[i]->info();
	}

	for (int i = 0;i < candidates.size();i++)
	{
		delete candidates[i];
	}

	std::cout << "\n\n\n";


	return 0;
}