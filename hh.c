#include <stdio.h>

int main()
{



	int i, j, k;
	int a1[5][2] = { 1,1,1,1,1,1,1,1,1,1 };
	int a2[2][3] = { 1,1,1,1,1,1 };
	int a3[3][4] = { 1,1,1,1,1,1,1,1,1,1,1,1 };
	int a4[4][3] = { 1,1,1,1,1,1,1,1,1,1,1,1 };
	int a5[3][2] = { 1,1,1,1,1,1 };
	int a6[2][3] = { 1,1,1,1,1,1 };
	int r1[5][3];
	int r2[5][4];
	int r3[5][3];
	int r4[5][2];
	int r5[5][3];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {

			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	for (i = 0; i < 2; i++) {
		for (k = 0; k < 3; k++) {

			printf("%d ", a2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i <5; i++) {
		for (k = 0; k < 3; k++) {
			r1[i][k] = 0;
			for (j = 0; j < 2; j++) {
				r1[i][k] = r1[i][k] + a1[i][j] * a2[j][k];

			}
		}

	}

	printf("\n\n");
	for (i = 0; i <5; i++) {
		for (k = 0; k <3; k++) {

			printf("%d ", r1[i][k]);

		}

		printf("\n");

	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {

			printf("%d ", r1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {

			printf("%d ", a3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i <5; i++) {
		for (k = 0; k < 4; k++) {
			r2[i][k] = 0;
			for (j = 0; j < 3; j++) {
				r2[i][k] = r2[i][k] + r1[i][j] * a3[j][k];

			}
		}

	}

	printf("\n\n");
	for (i = 0; i <5; i++) {
		for (k = 0; k <4; k++) {

			printf("%d ", r2[i][k]);

		}

		printf("\n");

	}
	printf("\n");
	//--------------
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {

			printf("%d ", r2[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 4; i++) {
		for (k = 0; k < 3; k++) {
			a4[i][j] = 1;
			printf("%d ", a4[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i <5; i++) {
		for (k = 0; k < 3; k++) {
			r3[i][k] = 0;
			for (j = 0; j < 4; j++) {
				r3[i][k] = r3[i][k] + r2[i][j] * a4[j][k];

			}
		}

	}

	printf("\n\n");
	for (i = 0; i <5; i++) {
		for (k = 0; k <3; k++) {

			printf("%d ", r3[i][k]);

		}

		printf("\n");

	}
	printf("\n");
	//----------------------------
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {

			printf("%d ", r3[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 2; k++) {
			a5[i][j] = 1;
			printf("%d ", a5[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i <5; i++) {
		for (k = 0; k < 2; k++) {
			r4[i][k] = 0;
			for (j = 0; j < 3; j++) {
				r4[i][k] = r4[i][k] + r3[i][j] * a5[j][k];

			}
		}

	}

	printf("\n\n");
	for (i = 0; i <5; i++) {
		for (k = 0; k <2; k++) {

			printf("%d ", r4[i][k]);

		}

		printf("\n");

	}
	printf("\n");
	//---------------------
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 2; j++) {

			printf("%d ", r4[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (i = 0; i < 2; i++) {
		for (k = 0; k < 3; k++) {
			a6[i][j] = 1;
			printf("%d ", a6[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i <5; i++) {
		for (k = 0; k < 3; k++) {
			r5[i][k] = 0;
			for (j = 0; j < 2; j++) {
				r5[i][k] = r5[i][k] + r4[i][j] * a6[j][k];

			}
		}

	}

	printf("\n\n");
	for (i = 0; i <5; i++) {
		for (k = 0; k <3; k++) {

			printf("%d ", r5[i][k]);

		}

		printf("\n");

	}
	printf("\n");
	getchar();
	getchar();
	getchar();

    return 0;
}
