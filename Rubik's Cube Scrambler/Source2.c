#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <String.h>


const char* moves[6] = {"R", "U", "F", "L", "D", "B"};
const char* types[3] = { "", "'", "2" };

int main(int argc, const char* argv[]) {


	char* scramble[21];

	int r;

	srand(time(0));

	//Generating Random Moves
	for (int i = 0; i < 20; i++) {

		r = rand() % 6;

		scramble[i] = moves[r];

		if (i > 0) {

			while (scramble[i] == scramble[i - 1]) {

				r = rand() % 6;

				scramble[i] = moves[r];
			}
		}

	}

	//Generating Random Types of Moves
	/*int q;

	for (int i = 0; i < 20; i++) {

		q = rand() % 3;
		strcat(scramble[i], types[q]);
	}*/


	for (int i = 0; i < 20; i++) {

		printf("%s ", scramble[i]);
	}

	printf("\n");


	return 0;
}