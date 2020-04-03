typedef struct complex{
    double re, im;
} complex;

complex ask(void);
void disp(complex p);
complex add(complex p, complex d);
complex sub(complex p, complex d);
complex mul(complex p, complex d);
complex div(complex p, complex d);