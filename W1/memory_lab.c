#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void stack_overflow(void);
void functionA(void);
int* memory_leak(void);
void out_of_memory(void);


int main(int argc, char* argv[]){
    if (argc < 2){
        printf("Usage: ./memory_lab <TypeofError>\n");
        return 0;
    }

    char* chosen_err = argv[1];
    if (strcmp(chosen_err,"stack_overflow") == 0){
        printf("==========Stack_overflow===========\n");
        stack_overflow();
    }
    else if (strcmp(chosen_err, "memory_leak") == 0){
        printf("=============Memory leak===========\n");
        int* ptr = memory_leak();
        printf("function closed but memory still in heap: %p = %d\n", ptr, *ptr);
    }
    else if (strcmp(chosen_err, "out_of_memory") == 0){
        printf("========== Out of memory ===========\n");
        out_of_memory();
    }
    else {
        printf("This error is not included!!\n");
    }

    return 0;
}

void stack_overflow(void){
    //int array[80000000] = {5};
    functionA();
}

void functionA(){
    functionA();
}

int* memory_leak(void){
    int* ptr = (int*) malloc(sizeof(int));
    *ptr = 100;
    return ptr;
}

void out_of_memory(void){ 
    int size = 10000;
    while (1){
        void* ptr = malloc(sizeof(int) * size);
        if (ptr == NULL){
            printf("Out of memory\n");
            break;
        }
        else{
            printf("%d bytes allocated\n", 4*size);
        }
    }
}


