#include <iostream>
using namespace std;

class Matriz{
    ///atributos de la clase matriz
public:
    int fil,colum;
    Matriz(){}
    ///constructor de la clase matriz
    Matriz(int x=0,int y=0):fil(x),colum(y){ ///fil =x


        mat=new int* [fil];    ///aqui reservamos memoria para la matriz
        for(int i=0;i<fil;i++){
            mat[i]=new int[colum];
        }

        for(int i=0;i<fil;i++){    ///aqui llenamos la matriz
            for(int j=0;j<colum;j++){
                cout<<"numero para ["<<i<<"] ["<<j<<"]";
                cin >>*(*(mat+i)+j);
            }
        }
        cout<<"\n"<<endl;
    }
///sobrecarga de operadores -
    Matriz operator+(Matriz obj){
        Matriz b(fil,colum);
        for(int i=0;i<fil;i++){
            for(int j=0;j<colum;j++){
                b.mat[i][j]=mat[i][j]+obj.mat[i][j];
            }
        }
        return b;
    }
///sobrecarga de operadores +
    Matriz operator-(Matriz obj){
        Matriz b(fil,colum);
        for(int i=0;i<fil;i++){
            for(int j=0;j<colum;j++){
                b.mat[i][j]=mat[i][j]-obj.mat[i][j];
            }
        }
        return b;
    }
///sobrecarga de operadores *
    Matriz operator*(Matriz obj){
        int total=0;
        Matriz b(fil,colum);
        for(int i=0;i<fil;i++){
            for(int j=0;j<colum;j++){
                for(int k=0;k<fil;k++){
                    total += (mat[i][j]*obj.mat[i][j]);
                }
                b.mat[i][j]=total;
                //limpiar el total
                total =0;
            }
        }
        return b;
    }
///sobrecarga de operadores ==
 Matriz operator==(Matriz obj){
        int x=0;
        Matriz b(fil,colum);
        for(int i=0;i<fil;i++){
            for(int j=0;j<colum;j++){
                b.mat[i][j]= x;
                if (mat[i][j]==obj.mat[i][j]){ x= 1; }
                else { x= 0; }
            }
        }
        return b;
    }
///sobrecarga de operadores ++
 Matriz operator++(int){
        Matriz b(fil,colum);
        for(int i=0;i<fil;i++){
            for(int j=0;j<colum;j++){
                b.mat[i][j]=mat[i][j]+1;
            }
        }
        return b;
    }
///sobrecarga de operadores --
 Matriz operator--(int){
        Matriz b(fil,colum);
        for(int i=0;i<fil;i++){
            for(int j=0;j<colum;j++){
                b.mat[i][j]=mat[i][j]-1;
            }
        }
        return b;
    }




    void impr_matr(){               ///muestra la matriz
        cout << "La matriz es resultante es: " <<endl;
        for (int i = 0; i < fil; i++) {
            for (int j = 0; j < colum; j++) {
                cout <<mat[i][j]<< " ";
            }
            cout << endl << endl;
        }
    }
    ~Matriz(){                    ///el destructor
        for (int i = 0; i < fil; i++){
            delete[] mat[i];
        }
        delete[] mat;
    }
    private:
        int** mat;

};

/// NOS PIDE LLENAR UNA MATRIZ ADICIONAL porque el constructor por defecto no esta lleno el constructor por defecto de la clase
///no existe es un{} lo unico que tienes es un constructor con datos un x y un y de valor 0 ; en realidad no importa como la llenes


// POR LO TANTO SOLO PUEDE HABER UNA OPERACION EN EL MAIN, ENTONCES MI SOLUCION ES COMENTARLAS Y ASI ELIGE CUAL DESEA

int main()
{
    Matriz a(2,2);
    Matriz a1(2,2);
/*

///+
    Matriz b=a+a1;
    cout << "Para la operacion +:"<<endl<<endl;
    b.impr_matr();

///-
   Matriz b= a-a1;
    cout << "Para la operacion -:"<<endl<<endl;
    b.impr_matr();

///*
   Matriz b= a*a1;
    cout << "Para la operacion *:"<<endl<<endl;
    b.impr_matr();

///==
   Matriz b= a==a1;
    cout << "Para la operacion ==:  0=False & 1=TRue"<<endl<<endl;
    b.impr_matr();

///++  EN ESTE CASO SOLO SE TRABAJA CON LA PRIMERA MATRIZ QUE TE PIDE Y LAS OTRAS 2 SON basuuuuuuuuuuuuuras
   Matriz b= a++;
    cout << "Para la operacion ++:"<<endl<<endl;
    b.impr_matr();

///--  EN ESTE CASO SOLO SE TRABAJA CON LA PRIMERA MATRIZ QUE TE PIDE Y LAS OTRAS 2 SON basuuuuuuuuuuuuuras
   Matriz b= a--;
    cout << "Para la operacion --:"<<endl<<endl;
    b.impr_matr();

*/


    return 0;
}
