#include "../boopes.h"
class(object)
method_proto(object, char*, ToString);
class_end(object)

method_def(object, char*, ToStr) {
return "";
}

object* obj_ctor(){
object* obj = new(object);
obj->ToString = &ToStr;
}