

//using namespace std is a pre-defined namespace in C++ that contains the standard library functions and classes. When you include the using namespace std; statement in your code, it allows you to use standard library functions and classes without having to prefix them with std::.

#include <iostream>
using namespace std;
#define PI 3.14159  // Preprocessor directive
// preprocessror directives

int main() {
    cout << "Hello World!" << endl; 
    return 0;
}

#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl; 
    return 0;
}
#include <iostream>

// Declare a namespace
namespace my_namespace {
    int x = 20;
    void print() {
        std::cout << "Inside my_namespace" << std::endl;
    }
}

int main() {
    // Not using namespace
    std::cout << "x = " << my_namespace::x << std::endl;
    my_namespace::print();

    // Using namespace
    using namespace my_namespace;
    std::cout << "x = " << x << std::endl;
    print();

    // Using alias
    using my_int = int;
    my_int y = 30;
    std::cout << "y = " << y << std::endl;
    return 0;
}


// using keyword
//In C++, the keyword using is used in two main contexts:

//using directive: This is used to bring all the names from a specific namespace into the current scope, allowing you to use the names without having to qualify them with the namespace name. For example, you can use using namespace std; to bring all the names from the standard library namespace into the current scope, so you can use cout, cin, etc. without having to prefix them with std::.
//using declaration: This is used to introduce a specific name from a namespace into the current scope. For example, you can use using std::cout; to bring the cout name from the standard library namespace into the current scope, so you can use cout without having to prefix it with std::

// namespace
//In C++, the keyword namespace is used to create a new namespace or to specify that a block of code belongs to an existing namespace. Namespaces are used to group related identifiers (e.g. variable names, function names, etc.) together in a specific scope, so that they don't conflict with identifiers from other scopes.


// std

//In C++, std is a namespace (short for "standard") that contains the standard library functions and objects that are included with the C++ language. The standard library provides a wide range of functionality, including input/output, string manipulation, mathematical operations, and more.

//When you include the iostream header file, for example, you are including a group of functions and objects that are part of the standard library, and they are defined within the std namespace.