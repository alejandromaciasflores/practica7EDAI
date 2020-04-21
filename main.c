#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
    list *l;
    l = create_list();
    delete_list(l);
    return 0;
}