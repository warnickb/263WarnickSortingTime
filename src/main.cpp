#include <vector>
#include "Celebrity.h"
#include "sorts.h"
#include <iostream>
#include <string>

/**
 * @author Brendan Warnick
 * @version CIS 263 Winter 2018
 * Main file, creates lists and runs sorts
 * http://www.cplusplus.com/reference/cstdlib/rand/ and http://www.cplusplus.com/reference/vector/vector/push_back/ for reference
 */
int main(int argc, char** argv){
	std::vector<Celebrity> list;
	std::string name;
	int ranking;
	bool met;
	int random = 9;
	for (int i = 0; i < atoi(argv[1]); i++){
		for (int i = 0; i < random; i++){
			name += (rand() % 8);
		}
		ranking = rand() % 11;
		met = rand() % 2;
		list.push_back(Celebrity(name, ranking, met));
	}
	int sort = atoi(argv[2]);
	switch (sortType) {
		case 1: bubble_sort(list); 	
			break;
		case 2: selection_sort(list); 	
			break;
		case 3: insertion_sort(list);	
			break;
		case 4: mergeSort(list);	
			break;
//		case 5: quicksort(list);	
//			break;
	}
}
