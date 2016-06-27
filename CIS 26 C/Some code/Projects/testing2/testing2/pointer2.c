#include <stdio.h>
#include <stdlib.h>

struct integer3_1 {
    int value3;
};

typedef struct integer3_1* intPtr;

struct integer3 {
    intPtr vPtr;
};

typedef struct integer3* intpointer3;   

int main() {
    int value = 5;

    intpointer3 intPtr3 = (intpointer3)malloc(sizeof(struct integer3));
	
	(*intPtr3).vPtr = (intPtr)malloc(sizeof(struct integer3_1));
	
	((*intPtr3).vPtr)->value3 = value;

	printf("Value is %d\n", ((*intPtr3).vPtr)->value3);
	
    //(*intPtr3->vPtr)->value3 = value;
    //(*(*intPtr3).vPtr)->value3 = value;
    //(*intPtr3->vPtr)->value3 = &value;
    //(*(*intPtr3).vPtr)->value3 = &value;

	return 0;
}
