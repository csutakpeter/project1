cmake_minimum_required(VERSION 3.21)
project(project1 C)

set(CMAKE_C_STANDARD 11)

add_executable(project1 main.c cmake-build-debug/f.cpp cmake-build-debug/f.h sapi_sales/headers/manager/lab_manager.h sapi_sales/headers/manager/lab2.h sapi_sales/headers/models/product.h sapi_sales/headers/manager/lab2.h sapi_sales/headers/models/user.h sapi_sales/src/manager/lab_manager.cpp sapi_sales/src/manager/lab2.cpp sapi_sales/src/models/product.cpp sapi_sales/src/models/user.cpp shared/headers/errors.h shared/headers/messages.h shared/headers/useful.h shared/src/errors.cpp shared/src/messages.cpp sapi_sales/headers/manager/lab_manager.h sapi_sales/headers/manager/lab2.h sapi_sales/headers/models/product.h sapi_sales/headers/models/user.h sapi_sales/src/manager/lab_manager.c sapi_sales/src/manager/lab2.c sapi_sales/src/models/product.c sapi_sales/src/models/user.c shared/headers/errors.h shared/headers/messages.h shared/headers/useful.h shared/src/errors.c shared/src/messages.c)

include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models
        shared/headers
)