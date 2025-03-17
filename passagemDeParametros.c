void troca (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void troca (int *x, int *y) {
    int temp;
    temp = *x; *x = *y; *y = temp;
}
troca (&x, &y);
int *p, *q;
p = &a;
q = &b;
troca (p, q);