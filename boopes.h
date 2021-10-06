#ifndef _BOOPES_H_
#define _BOOPES_H_

#include <stdlib.h>

#define class(ClassName) typedef struct ClassName ClassName; struct ClassName
#define method_proto(ClassName, RetVal, name, ...) RetVal (*name) (struct ClassName*, ##__VA_ARGS__)
#define method_def(ClassName, RetVal, MethodName, ...) RetVal MethodName (ClassName* this, ##__VA_ARGS__)
#define inherits_from(ClassName) ClassName super;
#define call_method(object, Method, ...) object->Method(object, ##__VA_ARGS__)
#define new(ClassName) (ClassName*)malloc(sizeof(ClassName))
#define delete(object) free(object)


#endif /* _BOOPES_H_ */
