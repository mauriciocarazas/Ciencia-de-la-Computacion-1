#include <iostream>

using namespace std;

//INTERCAMBIO DE VARIABLES POR REFERENCIA
void swap_ref (int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
//INTERCAMBIO DE VARIABLES POR PUNTEROS
void swap_p (int *ptr1 , int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

}
//INTERCAMBIO DE VARIABLES POR PUNTERO DE PUNTEROS
void swap_pp (int **ptr1, int **ptr2){
    int *temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

void swap_pp_v (int **x , int **y){
    int temp=**x;
    **x=**y;
    **y=temp;
}
int main()
{
    int a = 5;
    int b = 6;

    swap_ref(a,b);
    cout << a << "" << b << endl;

    swap_p(&a,&b);
    cout << a << "" << b << endl;

    int *p_a = &a;
    int *p_b = &b;
    swap_pp(&p_a,&p_b);
    cout << *p_a << "" << *p_b << endl;
    cout << a << "" << b << endl;
    return 0;
}
