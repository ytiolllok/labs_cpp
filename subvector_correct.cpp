#include <iostream>
#include "subvector.h"
using namespace std;


bool init(subvector *qv){
    qv->mas = (int*)malloc(sizeof(int));
    qv->top = 0;
    qv->capacity = 1;
    return true;
}
bool push_back(subvector *qv, int d){
    if(qv->capacity == 0) init(qv);
    if(qv->top >= qv->capacity){
        qv->capacity*=2;
        qv->mas = (int*)realloc(qv->mas, qv->capacity*sizeof(int));
    }
    qv->mas[qv->top] = d;
    qv->top++;
    return true;
}
int pop_back(subvector *qv){
    if(qv->top == 0){
        return 0;
    }
    qv->top--;
    int ret = qv->mas[qv->top];

    return ret;
}
bool resize(subvector *qv, unsigned int new_capacity){
    qv->mas = (int*)realloc(qv->mas, new_capacity*sizeof(int));
    qv->capacity = new_capacity;
    return true;
}
void shrink_to_fit(subvector *qv){
    qv->mas = (int*)realloc(qv->mas, qv->top*sizeof(int));
    qv->capacity = qv->top;
}
void clear(subvector *qv){
    qv->top=0;
}
void destructor(subvector *qv){
    free(qv->mas);
    qv->top = 0;
    qv->capacity = 0;
}

