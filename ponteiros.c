int x;
scanf("%d", &x);

int *p;
int x;
p = &x; // atribui o endereço de x ao ponteiro p.
p = NULL;

int x = 5, y;
int *p;
p = &x;
y = *p + 10; // o conteúdo de p é 5.

int a = 10, b = 20;
int *p;
int *q;
p = &a; /*p aponta para a*/
q = &b; /*p aponta para b*/

int **r;
int *p;
int x = 15, y = 10, z = 0;
p = &x;
r = &p; //r aponta para p e *r aponta para x
z = **r + y;