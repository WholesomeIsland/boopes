#include <stdlib.h>

#define class(ClassName) typedef struct className {
#define class_end(ClassName) } ClassName ;
#define method_proto(ClassName, RetVal, name, ...) RetVal (*name) (struct ClassName*, ##__VA_ARGS__)
#define method_def(ClassName, RetVal, MethodName, ...) RetVal MethodName (ClassName* this, ##__VA_ARGS__)
#define inherits_from(ClassName) ClassName super;
#define call_method(ClassName, object, Method, ...) object->Method(object, ##__VA_ARGS__)
#define new(ClassName) (ClassName*)malloc(sizeof(ClassName))
#define delete(object) free(object)