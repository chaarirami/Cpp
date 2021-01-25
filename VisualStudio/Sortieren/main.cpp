#include "Sort.h"

int main(void) {
	Sort sort1;

	FILE* output = NULL;
	output = fopen("PR2_Sort.txt", "w");
	if (output != NULL) {
		sort1.writeToFile(output);
	}
	fclose(output);


	
	


	return 0;
}