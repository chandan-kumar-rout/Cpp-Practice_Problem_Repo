//Q.18. difference between .h and .cpp file in cpp.
/*

.h files (header files) contain function declarations, class definitions, and other declarations that are used to define the interface of a module.

Example:

void greet();
 
.cpp files (source files) contain the actual implementation of the functions declared in the header files.
The .h file is included in the .cpp file using the #include directive, allowing the .cpp file to access the declarations in the .h file and provide the necessary implementations.

Example:

void greet()
{
    cout << "Hello";
}
*/