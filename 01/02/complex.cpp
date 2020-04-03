#include <stdio.h>
#include "complex.h"
#include <math.h>

complex ask(void){
    complex p;

    printf("Enter a complex number: ");
    scanf("%lf", &p.re);
    scanf("%lf", &p.im);

    return p;
}

void disp(complex p){
    printf("%lf+%lfi",p.re, p.im);
}

complex add(complex p, complex d){
    complex x;
    x.re = p.re + d.re;
    x.im = p.im + d.im;
    return x;
}

complex sub(complex p, complex d){
    complex x;
    x.re = p.re - d.re;
    x.im = p.im - d.im;
    return x;
}

complex mul(complex p, complex d){
    complex x;
    x.re = p.re * d.re - p.im * d.im;
    x.im = p.im * d.re + p.re * d.im;
    return x;
}

complex div(complex p, complex d){
    double a = p.re, b = p.im, c = d.re, e = d.im;
    complex x;
    x.re = ((a * c + b * e) / (pow(c, 2) + pow(e, 2)));
    x.im = ((b * c - a * e) / (pow(c, 2) + pow(e, 2)));
    return x;
}