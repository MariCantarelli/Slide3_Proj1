int v[100];

void *calloc(int n_elementos, int tamanho_elemento);

int *vetor_inteiros;
vetor_inteiros = (int*) calloc(100, sizeof(int));
...
free(vetor_inteiros); // desaloca a memória

int qtd, *vet;
printf("\nEntre com a quantidade de números: ");
scanf("%d", &qtd);
vet = (int*)calloc(qtd, sizeof(int));
if(vet == NULL)
return 1;
...
free(vet);