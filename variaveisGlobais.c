void troca (int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x = 4, y = 5;
    troca(x, y);
    printf("x = %d, y = %d", x, y);
}