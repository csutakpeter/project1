//
// Created by peter on 3/8/2022.
//

#ifndef PROJECT1_PRODUCT_H
#define PROJECT1_PRODUCT_H

#include <stdlib.h>
#include <sys/utime.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "useful.h"
#include "messages.h"
#include "errors.h"

enum ProductType{
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
};

typedef struct {
    char id[10];
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

Product* createProduct(
        char id[10],
        char name[20],
        enum ProductType type,
        unsigned int amount
);

void printProduct(Product* product);

#endif //PROJECT1_PRODUCT_H
