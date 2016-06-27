/**
*Program name: 
*Dicussion:    whatever ...
*Written By:  
*Date:         
*/

#include <stdio.h>
#include <stdlib.h>

//sturct
//(1)--------------------------------------------------------------------------------
struct integer{
	int value1;
};
typedef struct integer* intpointer;
//-----------------------------------------------------------------------------------

//(2)--------------------------------------------------------------------------------
struct integer2{
	int* value2;
};
typedef struct integer2* intpointer2;
//-----------------------------------------------------------------------------------

//(3)--------------------------------------------------------------------------------

struct integer3_1 {
	int value3;
};

typedef struct integer3_1* intPtr;

struct integer3{
	intPtr* vPtr;
};

typedef struct integer3* intpointer3;
//-----------------------------------------------------------------------------------

//Pototype
void dePointer(void);
void structPointer1(void);
void structPointer2(void);
void structPointer3(void);
void structPointer4(void);

int main() {
	/*NOTE
	&pointer = address of pointer;
	pointer = address of pointer returned from value

	*/
	//structPointer1();
	//structPointer2();
	//structPointer3();
	structPointer4();
	//dePointer();

	return 0;
}

//Definition
void dePointer() {
	int* pointer;
	int** dpointer;
	int*** tpointer;
	int value = 5;

	printf("Value address: %p\n\n", &value);

	pointer = &value;
	printf("Pointer address: %p\n", &pointer);//print pointer address
	printf("Pointer unsigned value: %d\n", pointer); //print pointer unsigned value
	printf("Pointer value: %d\n\n", *pointer); //print value

	dpointer = &pointer;
	printf("dPointer value: %p\n", &dpointer); //print dpointer address
	printf("dPointer unsigned value: %d\n", dpointer); //print dpointer unsigned value
	printf("Pointer address: %p\n", &*dpointer); //print pointer address
	printf("Pointer value: %d\n\n", **dpointer); //print value

	tpointer = &dpointer;
	printf("tpointer address: %p\n", &tpointer);//print tpointer address
	printf("tPointer unsigned value: %d\n", tpointer); //print tpointer unsigned value
	printf("dPointer address: %p\n", &*tpointer); //print dpointer address
	printf("Pointer address: %p\n", &**tpointer); //print pointer address
	printf("Pointer value: %d\n", ***tpointer); //print value

	printf("\nSO each stars will dereferencing!\n");

	return;
}

void structPointer1() {
	//1st try
	intpointer intPtr =  (intpointer)malloc(sizeof(struct integer));//Allocate memorey
	int value = 5;
	intPtr = &value; //ptr = &value
	printf("\n\tStruct Pointer1\n\n");
	printf("Value address: %p\n", &value);
	printf("intPtr address: %p\n\n", &intPtr);
	printf("intPtr returned the address of Value(Value address): %p\n", intPtr);
	printf("intPtr unsigned value: %d\n", intPtr);
	printf("intPtr value: %d\n\n", *intPtr); //dereference
	return;
}

void structPointer2() {
	
	int value2 = 5;
	int* dpointer = &value2;
	intpointer2 intPtr2 = (intpointer2)malloc(sizeof(struct integer2));
	//intPtr2->valuePtr = (int*)malloc(sizeof(int));

	printf("\n\tStruct Pointer2\n\n");
	printf("intPtr2 address %p\n", &intPtr2);
	printf("Value2 address %p\n", &value2);
	printf("--------------------------------------------\n");
	printf("(Version1)\n");
	(*intPtr2).value2 = value2; //int store int
	printf("intPtr2->valuePtr address %p\n", &intPtr2->value2);
	printf("intPtr2->valuePtr value: %d\n", (*intPtr2).value2); //print int
	printf("\n*Because valuePtr is contained in intPtr2,\n so it has the same address of intPtr\n");
	printf("--------------------------------------------\n");

	printf("(Version2)\n");
	intPtr2->value2 = &value2; //pointer store address
	printf("intPtr2->valuePtr address: %p\n",&intPtr2->value2);
	printf("intPtr2->valuePtr returned address of value2: %p\n",intPtr2->value2);
	printf("intPtr2->valuePtr value: %d\n", *intPtr2->value2);//DEREFERENCE
	printf("--------------------------------------------\n");

	//(*intPtr2).valuePtr = intPtr2->valuePtr does, -> is short-hand for that syntax

	return;
}

void structPointer3() {
	int value3 = 5;
	int* dpointer = &value3;
	intpointer3 intPtr3 = (intpointer3)malloc(sizeof(struct integer3));
	intPtr3->vPtr = (intPtr)malloc(sizeof(*intPtr3));
	*intPtr3->vPtr = (intPtr)malloc(sizeof(**intPtr3->vPtr));

	printf("intPtr2 address %p\n", &intPtr3);
	printf("vPtr address %p\n", &intPtr3->vPtr);
	printf("Value2 address %p\n", &value3);
	printf("--------------------------------------------\n");
	printf("(Version1)\n");

	(*intPtr3->vPtr)->value3 = value3;
	printf("%d\n", (*intPtr3->vPtr)->value3);
	return;
}

void structPointer4(){
	int value3 = 5;
	/*
	intpointer3 intPtr3 = (intpointer3)malloc(sizeof(struct integer3));
	(*intPtr3).vPtr = (intPtr*)malloc(sizeof(intPtr));
	*((*intPtr3).vPtr) = (intPtr)malloc(sizeof(struct integer3_1));
	*/
	intpointer3 intPtr3 = malloc(sizeof(intpointer3));
	(*intPtr3).vPtr = malloc(sizeof(intPtr));
	*((*intPtr3).vPtr) = malloc(sizeof(intPtr));

	(*((*intPtr3).vPtr))->value3 = value3;

	printf("Value is %d\n", (*((*intPtr3).vPtr))->value3);
	return;
}
