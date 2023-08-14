/*Una empresa fabrica 200 productos que son vendidos por 5 vendedores. La empresa
quiere obtener un listado en el que figure el monto total en pesos de las ventas
efectuadas en 2018 por cada uno de sus vendedores, mes por mes.
Para ello dispone de un lote de registros con los siguientes datos de cada una de las
ventas:
- Día (1 a 31)
- Mes (1 a 12)
- Importe ($)
- Código de vendedor (‘a’, ‘b’, ‘c’, ‘d’, ‘e’)
Este lote está desordenado y cualquier vendedor puede haber vendido el mismo
producto, en un mismo día, a diferentes clientes. El fin se indica con un registro con día
igual a cero.*/
#include <iostream>
#include <cstdlib>
#include <cstdio>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    const int VENDEDORES=5, MES=12;
    int dia, mes, i, j;
    char vendedor;
    float importe;
    float mat_vendedor_mes_importe [5][12]= {};

    cout << "Día: ";
    cin >> dia;
    while (dia!=0)
    {
        cout << "Mes: ";
        cin >> mes;
        cout << "Importe $ ";
        cin >> importe;
        cout << "Código de vendedor (‘a’, ‘b’, ‘c’, ‘d’, ‘e’) ";
        cin >> vendedor;

        switch (vendedor)
        {
        case 'a':
            mat_vendedor_mes_importe[0][mes-1]+= importe;
            break;
        case 'b':
            mat_vendedor_mes_importe[1][mes-1]+= importe;
            break;
        case 'c':
            mat_vendedor_mes_importe[2][mes-1]+= importe;
            break;
        case 'd':
            mat_vendedor_mes_importe[3][mes-1]+= importe;
            break;
        case 'e':
            mat_vendedor_mes_importe[4][mes-1]+= importe;
            break;
        }


        cout << "Día: ";
        cin >> dia;
    }

//el monto total por cada uno de sus vendedores, mes por mes.
    for( i=0; i<VENDEDORES;i++){
            cout << "Para el vendedor " << i+1 << endl;
        for(j=0;j<MES; j++){
            if (mat_vendedor_mes_importe[i][j]>0){
            cout << "Mes " << j+1 << " ventas totales $ " << mat_vendedor_mes_importe[i][j] << endl;
        }
        }
    }





        system ("pause");
    return 0;
}
