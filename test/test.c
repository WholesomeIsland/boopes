#include <stdio.h>
#include "../boopestd/object.h"
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
    
    return 0;
}
