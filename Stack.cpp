//
//  Stack.c
//  栈
//
//  Created by 南毅 on 2024/2/15.
//

#include "Stack.h"
void STInit(ST* ps){
    assert(ps);
    ps->a = NULL;
    ps->top = ps->capacity = 0 ;
}

void STDestory(ST* ps){
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->top = ps->capacity = 0;
}

void STPush(ST* ps, STDataType x){
    assert(ps);
    
    if(ps->top==ps->capacity){
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity*2;
        STDataType* tmp = realloc(ps->a, newcapacity * sizeof(STDataType));
        if(tmp == NULL){
            perror("relloc fail");
            return;
        }
        
        ps->a = tmp;
        ps->capacity = newcapacity;
        
    }
    ps->a[ps->top++] = x;
    
}

void STPop(ST* ps){
    assert(ps);
    assert(!STEmpty(ps));
    ps->top--;
}

STDataType STTop(ST* ps){
    assert(ps);
    assert(!STEmpty(ps));
    return ps->a[ps->top-1];
}

int STSize(ST* ps){
    assert(ps);
    return ps->top;
}

bool STEmpty(ST*ps){
    assert(ps);
    return ps->top==0;
}
