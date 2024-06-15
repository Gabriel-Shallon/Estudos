typedef struct _floatVector floatVector;


floatVector* create(int capacity);
void destroy(floatVector **vector);
int size(const floatVector *vector);
int capacity(const floatVector *vector);
float at(const floatVector *vector, int index);
float get(const floatVector *vector, int index);
void append(floatVector *vector, float val);
void set(floatVector *vector, int index, float val);
void print(const floatVector *vector);

//(sem nenhum detalhe de implementação aqui, apenas especificações :D )