#include <stdio.h>
#include "../boopestd/file.h"
int main(int argc, char const *argv[])
{
    object* obj = obj_ctor();
    char* objToStr = call_method(object, obj, ToString);
    if (objToStr == "")
    {
        printf("It Works");
    }
    else
    {
        printf("doesn't Work");
    }
    file* f = file_ctor("filetest.txt", "r");
    printf(call_method(file, f, ToString));
    return 0;
}
