//
// Created by peter on 3/8/2022.
//

#ifndef PROJECT1_ERRORS_H
#define PROJECT1_ERRORS_H

enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION,
};
void printErrorMessage(enum ErrorType errorType);

#endif //PROJECT1_ERRORS_H
