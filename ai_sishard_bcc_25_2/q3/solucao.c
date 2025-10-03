// Seu código da funcao1_solucao

int funcao1_solucao(int esi, long edx, long rdi){
    int eax = 0;
    if (eax >= esi){
        return -1;
    }
    long rcx = (long)eax;

    while(edx != (rdi +(4*rcx))){
        eax = eax +1;
        if (eax >= esi){
            return -1;
        }
    }
    return eax;

    
}

