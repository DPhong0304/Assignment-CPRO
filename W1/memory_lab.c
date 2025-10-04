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
        int* phong = memory_leak();
        printf("function closed but memory still in heap: %p = %d\n", phong, *phong);
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
    int phong = 1;
    int phongdepzai = 1;
    functionA();
}

int* memory_leak(void){
    int* phong = (int*) malloc(sizeof(int));
    *phong = 100;
    return phong;
}

void out_of_memory(void){ 
    int size = 10000;
    while (1){
        void* phong = malloc(sizeof(int) * size);
        if (phong == NULL){
            printf("Out of memory\n");
            break;
        }
        else{
            printf("%d bytes allocated\n", 4*size);
        }
    }
}


