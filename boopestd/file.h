#ifndef F89609D1_AAFC_459E_9941_7525E36CAD3D
#define F89609D1_AAFC_459E_9941_7525E36CAD3D
#include <stdio.h>
#include "object.h"
class(file) inherits_from(object)
FILE* innerFile;
method_proto(file, char*, ToString);
method_proto(file, char, chread);
method_proto(file, void, seek, int);
class_end(file)
method_def(file, char*, file_ToString){
    char* tmp = "";
    char c;
    while ((c = fgetc(this->innerFile)) != EOF)
    {
        sprintf(tmp, "%s%c", tmp, c);
    }
    return tmp;
}
method_def(file, char, file_chread){
    char c;
    c = fgetc(this->innerFile);
    return c;
}
method_def(file, void, file_seek, int location){
fseek(this->innerFile, 0, location);
}
file* file_ctor(char* mode, char* filename){
file* this = new(file);
this->innerFile = fopen(filename, mode);
this->ToString = &file_ToString;
this->chread = &file_chread;
this->seek = &file_seek;
return this;
}
#endif /* F89609D1_AAFC_459E_9941_7525E36CAD3D */
