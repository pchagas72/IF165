#include <stdio.h>
#include <math.h>

int choice(){
    int d;
    scanf("%d",&d);
    return d;
}
float triangulo(float b, float a){
    return (a*b)/2;
}
float circulo(float r){
    return (3.14)*(r*r);
}
float hexagono(float l){
    return (3*(l*l)*sqrt(3))/2;

}
float trapezio(float a,float b,float h){
    return ((a+b)/2)*h;
}

int main(){
    int ch = choice();
    if (ch <1 || ch > 4){
        printf("opcao invalida");
        return 1;
    }
    switch (ch){
        case 1:{
            float b,a;
            scanf("%f %f",&b,&a);
            printf("a area do triangulo e %.2f",triangulo(b,a));
            break;
        }
        case 2:{
            float r;
            scanf("%f",&r);
            printf("a area do circulo e: %.2f",circulo(r));
            break;
        }
        case 3:{
            float l;
            scanf("%f",&l);
            printf("a area do hexagono e %.2f",hexagono(l));
            break;
        }
        case 4:{
            float a,b,c;
            scanf("%f %f %f",&a, &b, &c);
            printf("a area do trapezio e %.2f",trapezio(a,b,c));
            break;
        }

    }

}
