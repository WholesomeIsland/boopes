#ifndef D46FF7A0_740D_4319_B785_9B6F99A23FD5
#define D46FF7A0_740D_4319_B785_9B6F99A23FD5

#include <stdlib.h>

#define class(ClassName) typedef struct ClassName {
#define class_end(ClassName) } ClassName ;
#define method_proto(ClassName, RetVal, name, ...) RetVal (*name) (struct ClassName*, ##__VA_ARGS__)
#define method_def(ClassName, RetVal, MethodName, ...) RetVal MethodName (ClassName* this, ##__VA_ARGS__)
#define inherits_from(ClassName) ClassName super;
#define call_method(object, Method, ...) object->Method(object, ##__VA_ARGS__)
#define new(ClassName) (ClassName*)malloc(sizeof(ClassName))
#define delete(object) free(object)


#endif /* D46FF7A0_740D_4319_B785_9B6F99A23FD5 */
