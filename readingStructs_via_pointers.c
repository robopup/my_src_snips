// Using Pointers to Read a Struct
#include <stdio.h>
#include <stdlib.h>

struct struct2Int{
	int variable1;
	int variable2;
	int variable3;
};

struct struct2Float{
	float var1;
	float var2;
	float var3;
};

int main()
{

	/* STRUCT-POINTER TEST VIA INTEGERS */
	// init new struct object
	struct struct2Int newStruct;

	// place some values into cells
	newStruct.variable1 = 8;
	newStruct.variable2 = 10;
	newStruct.variable3 = 100;

	// now read it back
	int * pStruct;
	pStruct = (int *)&newStruct;	// pass the address [0] of newStruct

	// since each variable/cell is a type int, a pointer to this struct will read 4-bytes each
	for (int i = 0; i < 3; i++){
		printf("struct[%d]: %d\n", i, *(pStruct + i));		// deref and get value of each cell
	}

	/* STRUCT-POINTER TEST VIA FLOATS */
	struct struct2Float testStruct;

	testStruct.var1 = 0.00;
	testStruct.var2 = 15.345;
	testStruct.var3 = -45.56;

	float * pFloatStruct;
	pFloatStruct = (float *)&testStruct;

	for (int j = 0; j < 3; j++){
		printf("structFloat[%d]: %f\n", j, *(pFloatStruct + j));
	}

	return 0;
}