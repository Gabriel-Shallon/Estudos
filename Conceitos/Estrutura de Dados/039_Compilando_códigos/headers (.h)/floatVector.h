t/************************************ INTERFACE PÚBLICA *************************************/
#ifndef FLOATVECTOR_H
#define FLOATVECTOR_H

typedef struct _floatVector floatVector;

floatVector* create(int capacity);
void destroy(floatVector **vector);
int size(const floatVector *vector);
int capacity(const floatVector *vector);
float at(const floatVector *vector, int index);
float get(const floatVector *vector, int index);
void append(floatVector *vector, float val);
void removeElement(floatVector *vector, int index);
void set(floatVector *vector, int index, float val);
void print(const floatVector *vector);
void printSize(const floatVector *vector);
void fullFill(floatVector *vector);

#endif