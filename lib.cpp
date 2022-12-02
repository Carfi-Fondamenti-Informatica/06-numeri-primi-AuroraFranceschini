int numeroprimo (int a) {
    bool b = 0;
    int i = 2;
    if(a != 2) {
        for (; i<a; i++) {
            if (a%i == 0){
                break;
            }
        }
    } else {
        b = true;
    }
    if (a == i) {
        b = true;
    }
    return b;
}
