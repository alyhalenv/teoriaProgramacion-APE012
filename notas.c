# include <stdio.h>

//MODULO DE CALCULO NOTA ACD 

float calcularAcd(){
    int numeroAct;
    float actNot, actSum=0, actFin;
    printf("-----CALCULO NOTA ACD-----\n");
    do{
        printf("INGRESE EL NUMERO DE ACTIVIDADES: ");
        scanf("%i",&numeroAct);
        if(numeroAct<=0){
            printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
        }
    }while(numeroAct<=0);

    for(int i=1;i<=numeroAct;i++){
        do{
            printf("INGRESE LA NOTA DE LA ACTIVIDAD NRO.%i: ",i);
            scanf("%f",&actNot);
            if(actNot<0||actNot>10){
                printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
            }
        }while(actNot<0||actNot>10);

        actSum= actSum+actNot;
    }

    actFin = (actSum/numeroAct)*0.2;
    return actFin;
}

//MODULO DE CALCULO NOTA APE

float calcularApe(){
    int numeroAct;
    float actNot, actSum=0, actFin;
    printf("-----CALCULO NOTA APE----\n");
    do{
        printf("INGRESE EL NUMERO DE ACTIVIDADES: ");
        scanf("%i",&numeroAct);
        if(numeroAct<=0){
            printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
        }
    }while(numeroAct<=0);

    for(int i=1;i<=numeroAct;i++){
        do{
            printf("INGRESE LA NOTA DE LA ACTIVIDAD NRO.%i: ",i);
            scanf("%f",&actNot);
            if(actNot<0||actNot>10){
                printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
            }
        }while(actNot<0||actNot>10);

        actSum= actSum+actNot;
    }

    actFin = (actSum/numeroAct)*0.25;
    return actFin;
}

//MODULO DE CALCULO NOTA AA

float calcularAa(){
    int numeroAct;
    float actNot, actSum=0, actFin;
    printf("-----CALCULO NOTA AA-----\n");
    do{
        printf("INGRESE EL NUMERO DE ACTIVIDADES: ");
        scanf("%i",&numeroAct);
        if(numeroAct<=0){
            printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
        }
    }while(numeroAct<=0);

    for(int i=1;i<=numeroAct;i++){
        do{
            printf("INGRESE LA NOTA DE LA ACTIVIDAD NRO.%i: ",i);
            scanf("%f",&actNot);
            if(actNot<0||actNot>10){
                printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
            }
        }while(actNot<0||actNot>10);

        actSum= actSum+actNot;
    }

    actFin = (actSum/numeroAct)*0.2;
    return actFin;
}

//MODULO DE CALCULO NOTA ES

float calcularEs (){
    float porcen;
    float actAbp, actPd, actSum=0;
    printf("-----CALCULO NOTA ES-----\n");
    do{
        printf("INGRESE EL PORCENTAJE DEL ABP EN RANGO DEL 0 AL 100: ");
        scanf("%f",&porcen);
        if(porcen<=0||porcen>100){
            printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
        }
    }while(porcen<=0||porcen>100);

    do{
        printf("INGRESE LA NOTA DEL ABP: ");
        scanf("%f",&actAbp);    
        if(actAbp<0||actAbp>10){
            printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
        }
    }while(actAbp<0||actAbp>10);

    do{
        printf("INGRESE LA NOTA DEL PD: ");
        scanf("%f",&actPd);
        if(actPd<0||actPd>10){
            printf("NUMERO INVALIDO, INGRESE NUEVAMENTE\n");
        }
    }while(actPd<0||actPd>10);

    actSum=((actAbp*(porcen/100))+(actPd*((100-porcen)/100)))*0.35;
    return actSum;  
}

//MODULO DE CALCULO NOTA UNIDAD

float calcularPromedioUnidad(int n){
    float n1,n2,n3,n4, nT;
    printf("***UNIDAD NRO.%i***\n",n);
    n1 = calcularAcd();
    n2 = calcularApe();
    n3 = calcularAa();
    n4 = calcularEs();
    nT = n1+n2+n3+n4;
    return nT;
}

//MODULO DE IMPRESIÓN AL USUARIO

int main(){
    float Unid, sumaUnid=0;
    const int NUMEROUNIDADES = 3;
    for(int i=1;i<=NUMEROUNIDADES;i++){
        Unid = calcularPromedioUnidad(i);
        printf("SU NOTA TOTAL DE UNIDAD NRO.%i es: %.2f\n",i,Unid);
        sumaUnid=Unid+sumaUnid;
    }
    printf("LA NOTA GENERAL DEL CICLO ES: %.2f",((sumaUnid)/3));
    if(sumaUnid)
    return 0;
}

