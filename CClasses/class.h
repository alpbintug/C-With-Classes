#include <stdio.h>

typedef void (*printInfo)();
void printHelloWorld(){
    printf("Hello World");
}
typedef struct{
    int ID;
    int value;
    printInfo func;
} MyClass;
MyClass myClassConstructor(){
    MyClass class;
    class.func = printHelloWorld;
    return class;
}

