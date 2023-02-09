/*#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <String.h>

const char* moves[18] = { "R", "R'", "R2", "U", "U'", "U2", "F", "F'", "F2", "L", "L'", "L2", "D", "D'", "D2", "B", "B'", "B2" };

int main(int argc, const char* argv[]) {


	char scramble[61] = "";

	int r;
	char* prevMove = "";
	char* curMove = "";

	srand(time(0));

	//Generating Random Moves
	for (int i = 0; i < 20; i++) {

		r = rand() % 18;
		curMove = moves[r];

		if (i > 0) {

			while (curMove[0] == prevMove[0]) {

				r = rand() % 18;
				curMove = moves[r];
			}
		}
		
		strcat(scramble, curMove);
		strcat(scramble, " ");
		prevMove = curMove;

	}

	printf("%s ", scramble);
	printf("\n");
	return 0;
}*/