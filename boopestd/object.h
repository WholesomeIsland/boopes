#ifndef CDE91A5B_E222_471F_833E_B2F3F80B8822
#define CDE91A5B_E222_471F_833E_B2F3F80B8822

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
return obj;
}


#endif /* CDE91A5B_E222_471F_833E_B2F3F80B8822 */
