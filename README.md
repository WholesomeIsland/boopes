# boopes
Basic Object-Oriented Programming for Embedded Systems 
## What is boopes?

boopes is a OOP framework for the C programming language. 
it is meant for embedded/small systems like phones, tablets, etc. 
I created boopes so i didnt need to use GObject.
Apperantly it also makes C not look like C.

## what does boopes support?

- single inheritance
- classes
- constructors

## How Does It Work?
when you create a class, its actually a struct. inheritance creates a super object inside that struct. functions are actually function pointers that you manually fill in the constructor. the this pointer in functions is actually the first argument of that method.

## Usage

```c
#include "boopes.h"
//the class YourClass derives from object
class(YourClass) inherits_from(object)
//classes can have variables.
int a;
//a method prototype
method_proto(YourClass, MethodReturnType, MethodName);
//the end of the class definition
class_end(YourClass)
```
constructors need to be crated manually. for example, a constructor for the class above could be
```c
YourClass* YourClass_ctor(int a){
    YourClass* example = new(YourClass);
    //YourMethod is a function that meets the prototype that you declared in the 
    //method_proto above
    example->MethodName = &YourMethod;
    example->a = a;
    return example;
}
```
this constructor could be called like any normal C function.
```c
YourClass* ex = YourClass_ctor(5);
```
but to call methods in a class, 
```c
call_method(YourCLass, ex, MethodName);
```

## License
boopes is licensed under the GPLv2. the full license should be located in the LICENSE file in the same directory as this one. if you have not received a copy of the license with this software, it can be found at [gnu.org/licenses/old-licenses/gpl-2.0.html](https://www.gnu.org/licenses/old-licenses/gpl-2.0.html)