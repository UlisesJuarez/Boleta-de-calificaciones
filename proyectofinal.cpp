/* 
Juarez Espinoza Ulises
Simulación de una boleta de calificaciones 
*/

//__________________________ Archivos de cabecera_______________________________
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

//___________________________ Archivos de cabecera______________________________
/*______________________________Funcion gotoxy__________________________________
  es una herramienta de gran utilidad sobre todo para darle mejor presentacion a 
  nuestros trabajos nos sirve para alinear el texto.
*/
void gotxy(int x, int y)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);
}

//_______________________Declaracion de variables globales______________________
int calificaciones[6], calificaciones2[6], calificaciones3[6], x, y, opc, p1, p2, p3, p4, p5, p6;
float suma1 = 0, prom1, suma2 = 0, prom2, suma3 = 0, prom3, promsem;
char resp, res;
char nom[15], nb[12], curp[18], gen[15], tur[10], apellido1[15], apellido2[15];
int materias[6], suma;

//____________________________Declaracion de funciones__________________________

void parcial1();
void parcial2();
void parcial3();
void operaciones();
void promedios();
void menu();
void tabla();
void figurita();
void boleta();
void alumno();
void estatus();

//_______________________________Programa principal_____________________________
main()
{

	/*___________________________Funcion do{}while__________________________________
   esta funcion nos permite volver a repetir el programa principal cuantas veces 
   quieramos cumpliendo con la condicion impuesta por el programador
*/
	do
	{
		system("CLS");
		system("COLOR 3F");
		menu();
		gotxy(1, 19);
		printf("Numero de semestre: ");
		scanf("%i", &opc);
		/*___________________________  Funcion while  __________________________________
   esta funcion nos permite imponer una condicion a una variable, para que se 
   se ejecute de la manera en nos convenga, es un ciclo del que no se puede sa-
   lir hasta que se cumpla con la condicion impuesta
*/
		while (opc < 0 || opc > 9)
		{
			gotxy(1, 19);
			printf("                       ");
			gotxy(44, 19);
			printf("-----------------------------------");
			y = 19;
			for (x = 0; x <= 3; x++)
			{
				gotxy(44, y++);
				printf("-");
			}
			y = 19;
			for (x = 0; x <= 3; x++)
			{
				gotxy(79, y++);
				printf("-");
			}
			gotxy(44, 22);
			printf("-----------------------------------");
			gotxy(46, 20);
			printf("Error solo hay nueve semestres   ");
			gotxy(46, 21);
			printf("Por favor intente nuevamente:   ");
			gotxy(76, 21);
			scanf("%i", &opc);
		}

		/*system("CLS"); 
  nos sirve para limpiar la pantalla en la ejecucion del progamama tambien es
  conocida como cls o clear limpiar la pantalla de comandos
*/
		system("CLS");
		alumno();
		system("COLOR 0F");
		printf("\n\n\n\t\t\t   Parcial 1\t");
		printf("Parcial 2      ");
		printf("Parcial 3      ");
		/*switch(){} 
  esta funcion nos permite ejecutar varias opciones, mediante la utilizacion de 
  condiciones definidas por casos, de acuerdo a la operacion que desemos ejecutar
*/
		switch (opc)
		{
		case 1:
			printf("\n\n Algebra:");
			printf("\n\n Quimica");
			printf("\n\n Fisica");
			printf("\n\n Programacion");
			printf("\n\n Calculo D");
			printf("\n\n Humanidades I");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 2:
			printf("\n\n Calculo Vectorial");
			printf("\n\n Ec. Diferenciales");
			printf("\n\n Mag y Electricidad");
			printf("\n\n POO");
			printf("\n\n Quimica Aplicada");
			printf("\n\n Humanidades II");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 3:
			printf("\n\n Variable compleja");
			printf("\n\n Trans. de funciones");
			printf("\n\n Ondas mecanicas");
			printf("\n\n Circuitos CA y CD");
			printf("\n\n Campos y ondas elec.");
			printf("\n\n Estructuras y bd");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 4:
			printf("\n\n P y Estadistica");
			printf("\n\n Mediciones");
			printf("\n\n Economia");
			printf("\n\n Mecanica cuantica");
			printf("\n\n Ondas electromagneticas");
			printf("\n\n Analisis numerico");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 5:
			printf("\n\n Dispositivos");
			printf("\n\n Administracion");
			printf("\n\n Comunicaciones analogas");
			printf("\n\n Analisis transitorios");
			printf("\n\n Radiadores electromag");
			printf("\n\n Maquinas electricas");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 6:
			printf("\n\n Electronica lineal");
			printf("\n\n Electronica digital");
			printf("\n\n Comunicaciones digi");
			printf("\n\n Senales y vibraciones");
			printf("\n\n Sis. Control Clasicos");
			printf("\n\n Microoprocesadores");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 7:
			printf("\n\n Humanidades III");
			printf("\n\n Generacion y eval");
			printf("\n\n Microcontroladores");
			printf("\n\n Procesamiento senales");
			printf("\n\n Electroacustica");
			printf("\n\n Redes basicas");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 8:
			printf("\n\n Humanidades IV");
			printf("\n\n Calidad en ing");
			printf("\n\n Desarollo de topicos");
			printf("\n\n Optativa I");
			printf("\n\n Optativa I");
			printf("\n\n Optativa I");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		case 9:
			printf("\n\n Humanidades V");
			printf("\n\n Ingenieria economica");
			printf("\n\n Proyecto de ingenieria");
			printf("\n\n Optativa II");
			printf("\n\n Optativa II");
			printf("\n\n Optativa II");
			printf("\n\n Promedio");
			tabla();
			parcial1();
			parcial2();
			parcial3();
			operaciones();
			promedios();
			break;
		}
		boleta();
		estatus();
		gotxy(2, 22);
		printf("Desea calcular otra boleta S/N: ");
		resp = getch();
	} while (resp == 'S' || resp == 's');
	printf("\n");
	gotxy(2, 24);
	system("pause>doc");
	return 0;
}

//____________________________Declaracion de funciones__________________________
/* Esta funcion se encargara de leer las variables int correspondientes al 
primer parcial de cualquiera de los semestres*/
void parcial1()
{
	y = 23;
	suma1 = 0;
	for (x = 0; x < 6; x++)
	{
		gotxy(29, y = y + 2);
		scanf("%i", &calificaciones[x]);
	}

	/*Utilizamos la condicion while para que el programa solo acepte calificaciones del 1 al 10
	en caso de presentarse una fuera de este rango, borra la calificacion y leera de nuevo
	la variable hasta dar una valida*/
	while (calificaciones[0] > 10 || calificaciones[0] < 1 || calificaciones[1] > 10 ||
		   calificaciones[1] < 1 || calificaciones[2] > 10 || calificaciones[2] < 1 || calificaciones[3] > 10 ||
		   calificaciones[3] < 1 || calificaciones[4] > 10 || calificaciones[4] < 1 || calificaciones[5] > 10 ||
		   calificaciones[5] < 1)
	{
		if (calificaciones[0] > 10 || calificaciones[0] < 1)
		{
			gotxy(29, 25);
			printf("   ");
			gotxy(29, 25);
			scanf("%i", &calificaciones[0]);
		}
		if (calificaciones[1] > 10 || calificaciones[1] < 1)
		{
			gotxy(29, 27);
			printf("   ");
			gotxy(29, 27);
			scanf("%i", &calificaciones[1]);
		}
		if (calificaciones[2] > 10 || calificaciones[2] < 1)
		{
			gotxy(29, 29);
			printf("   ");
			gotxy(29, 29);
			scanf("%i", &calificaciones[2]);
		}
		if (calificaciones[3] > 10 || calificaciones[3] < 1)
		{
			gotxy(29, 31);
			printf("   ");
			gotxy(29, 31);
			scanf("%i", &calificaciones[3]);
		}
		if (calificaciones[4] > 10 || calificaciones[4] < 1)
		{
			gotxy(29, 33);
			printf("   ");
			gotxy(29, 33);
			scanf("%i", &calificaciones[4]);
		}
		if (calificaciones[5] > 10 || calificaciones[5] < 1)
		{
			gotxy(29, 35);
			printf("   ");
			gotxy(29, 35);
			scanf("%i", &calificaciones[5]);
		}
	}
}

//____________________________Declaracion de funciones__________________________
/* Esta funcion se encargara de leer las variables int correspondientes al 
segundo parcial de cualquiera de los semestres*/
void parcial2()
{
	y = 23;
	suma2 = 0;
	for (x = 0; x < 6; x++)
	{
		gotxy(40, y = y + 2);
		scanf("%i", &calificaciones2[x]);
	}
	/*Utilizamos la condicion while para que el programa solo acepte calificaciones del 1 al 10
	    en caso de presentarse una fuera de este rango, borra la calificacion y leera de nuevo
	    la variable hasta dar una valida*/
	while (calificaciones2[0] > 10 || calificaciones2[0] < 1 || calificaciones2[1] > 10 ||
		   calificaciones2[1] < 1 || calificaciones2[2] > 10 || calificaciones2[2] < 1 ||
		   calificaciones2[3] > 10 || calificaciones2[3] < 1 || calificaciones2[4] > 10 ||
		   calificaciones2[4] < 1 || calificaciones2[5] > 10 || calificaciones2[5] < 1)
	{
		if (calificaciones2[0] > 10 || calificaciones2[0] < 1)
		{
			gotxy(40, 25);
			printf("   ");
			gotxy(40, 25);
			scanf("%i", &calificaciones2[0]);
		}
		if (calificaciones2[1] > 10 || calificaciones2[1] < 1)
		{
			gotxy(40, 27);
			printf("   ");
			gotxy(40, 27);
			scanf("%i", &calificaciones2[1]);
		}
		if (calificaciones2[2] > 10 || calificaciones2[2] < 1)
		{
			gotxy(40, 29);
			printf("   ");
			gotxy(40, 29);
			scanf("%i", &calificaciones2[2]);
		}
		if (calificaciones2[3] > 10 || calificaciones2[3] < 1)
		{
			gotxy(40, 31);
			printf("   ");
			gotxy(40, 31);
			scanf("%i", &calificaciones2[3]);
		}
		if (calificaciones2[4] > 10 || calificaciones2[4] < 1)
		{
			gotxy(40, 33);
			printf("   ");
			gotxy(40, 33);
			scanf("%i", &calificaciones2[4]);
		}
		if (calificaciones2[5] > 10 || calificaciones2[5] < 1)
		{
			gotxy(40, 35);
			printf("   ");
			gotxy(40, 35);
			scanf("%i", &calificaciones2[5]);
		}
	}
}

//____________________________Declaracion de funciones__________________________
/* Esta funcion se encargara de leer las variables int correspondientes al 
tercer parcial de cualquiera de los semestres*/
void parcial3()
{
	y = 23;
	suma3 = 0;
	for (x = 0; x < 6; x++)
	{
		gotxy(55, y = y + 2);
		scanf("%i", &calificaciones3[x]);
	}
	/*Utilizamos la condicion while para que el programa solo acepte calificaciones del 1 al 10
	    en caso de presentarse una fuera de este rango, borra la calificacion y leera de nuevo
	    la variable hasta dar una valida*/
	while (calificaciones3[0] > 10 || calificaciones3[0] < 1 || calificaciones3[1] > 10 ||
		   calificaciones3[1] < 1 || calificaciones3[2] > 10 || calificaciones3[2] < 1 ||
		   calificaciones3[3] > 10 || calificaciones3[3] < 1 || calificaciones3[4] > 10 ||
		   calificaciones3[4] < 1 || calificaciones3[5] > 10 || calificaciones3[5] < 1)
	{
		if (calificaciones3[0] > 10 || calificaciones3[0] < 1)
		{
			gotxy(55, 25);
			printf("   ");
			gotxy(55, 25);
			scanf("%i", &calificaciones3[0]);
		}
		if (calificaciones3[1] > 10 || calificaciones3[1] < 1)
		{
			gotxy(55, 27);
			printf("   ");
			gotxy(55, 27);
			scanf("%i", &calificaciones3[1]);
		}
		if (calificaciones3[2] > 10 || calificaciones3[2] < 1)
		{
			gotxy(55, 29);
			printf("   ");
			gotxy(55, 29);
			scanf("%i", &calificaciones3[2]);
		}
		if (calificaciones3[3] > 10 || calificaciones3[3] < 1)
		{
			gotxy(55, 31);
			printf("   ");
			gotxy(55, 31);
			scanf("%i", &calificaciones3[3]);
		}
		if (calificaciones3[4] > 10 || calificaciones3[4] < 1)
		{
			gotxy(55, 33);
			printf("   ");
			gotxy(55, 33);
			scanf("%i", &calificaciones3[4]);
		}
		if (calificaciones3[5] > 10 || calificaciones3[5] < 1)
		{
			gotxy(55, 35);
			printf("   ");
			gotxy(55, 35);
			scanf("%i", &calificaciones3[5]);
		}
	}
}

//____________________________Declaracion de funciones__________________________
/* Esta funcion se encarga de dar los promedios por parcial de cualquiera de 
los semestres*/
void operaciones()
{

	gotxy(29, 37);
	suma1 = calificaciones[0] + calificaciones[1] + calificaciones[2] + calificaciones[3] + calificaciones[4] + calificaciones[5];
	prom1 = suma1 / 6;
	printf("%.1f\n\n", prom1);

	gotxy(40, 37);
	suma2 = calificaciones2[0] + calificaciones2[1] + calificaciones2[2] + calificaciones2[3] + calificaciones2[4] + calificaciones2[5];
	prom2 = suma2 / 6;
	printf("%.1f\n\n", prom2);

	gotxy(55, 37);
	suma3 = calificaciones3[0] + calificaciones3[1] + calificaciones3[2] + calificaciones3[3] + calificaciones3[4] + calificaciones3[5];
	prom3 = suma3 / 6;
	printf("%.1f\n\n", prom3);
}

//____________________________Declaracion de funciones__________________________
/*esta funcion se encarga de dar el promedio semestral y avisar si el alumno ha aprobado
o ha reprobado el semestre*/
void promedios()
{
	gotxy(1, 39);
	promsem = (prom1 + prom2 + prom3) / 3;
	printf(" EL PROMEDIO SEMESTRAL ES: %.1f", promsem);
	if (promsem > 6)
		printf("\n* A P R O B A D O");
	else
		printf("\n* R E P R O B A D O");
	for (int i = 1; i < 900000000; i++)
		;
	system("CLS");
}
//____________________________Declaracion de funciones__________________________
/*Se encarga de dar es estatus del alumno, en base a sus calificaciones semestrales, 
determina si es regular o irregular, y si puede o no inscribirse al proximo semestre
asi como la cantidad de materias que reprobo*/
void estatus()
{

	p1 = calificaciones[0] + calificaciones2[0] + calificaciones3[0];
	p2 = calificaciones[1] + calificaciones2[1] + calificaciones3[1];
	p3 = calificaciones[2] + calificaciones2[2] + calificaciones3[2];
	p4 = calificaciones[3] + calificaciones2[3] + calificaciones3[3];
	p5 = calificaciones[4] + calificaciones2[4] + calificaciones3[4];
	p6 = calificaciones[5] + calificaciones2[5] + calificaciones3[5];
	if (p1 < 18)
		materias[1] = 1;
	else
		materias[1] = 0;
	if (p2 < 18)
		materias[2] = 1;
	else
		materias[2] = 0;
	if (p3 < 18)
		materias[3] = 1;
	else
		materias[3] = 0;
	if (p4 < 18)
		materias[4] = 1;
	else
		materias[4] = 0;
	if (p5 < 18)
		materias[5] = 1;
	else
		materias[5] = 0;
	if (p6 < 18)
		materias[6] = 1;
	else
		materias[6] = 0;

	suma = materias[1] + materias[2] + materias[3] + materias[4] + materias[5] + materias[6];
	if (suma == 0)
	{
		gotxy(2, 20);
		printf("El alumno no ha reprobado ni una materia, es regular");
	}
	if (suma > 0 && suma <= 2)
	{
		gotxy(2, 20);
		printf("El alumno ha reprobado %d materia[s], es irregular", suma);
	}
	if (suma >= 3)
	{
		gotxy(2, 20);
		printf("EL alumno ha reprobado %d materias,no podra reinscribirse hasta reponerlas.", suma);
	}
}

//____________________________Declaracion de funciones__________________________
/* Es el menu en el cual el usuario puede ver que semestre elegir, en base a el numero
de semestre en este caso*/
void menu()
{
	gotxy(25, 2);
	printf("***********************************************************************\n");
	for (int x = 2; x <= 17; x++)
	{
		gotxy(25, x);
		printf("*");
	}
	gotxy(100, 2);
	for (int y = 2; y <= 17; y++)
	{
		gotxy(96, y);
		printf("*");
	}
	gotxy(25, 17);
	printf("***********************************************************************\n");
	system("COLOR F0");
	gotxy(40, 4);
	printf("SEMESTRES DE LA CARRERA DE I.C.E\n\n");

	gotxy(46, 6);
	printf("1= PRIMER  SEMESTRE");
	gotxy(46, 7);
	printf("2= SEGUNDO SEMESTRE ");
	gotxy(46, 8);
	printf("3= TERCER  SEMESTRE");
	gotxy(46, 9);
	printf("4= CUARTO  SEMESTRE");
	gotxy(46, 10);
	printf("5= QUINTO  SEMESTRE");
	gotxy(46, 11);
	printf("6= SEXTO   SEMESTRE");
	gotxy(46, 12);
	printf("7= SEPTIMO  SEMESTRE");
	gotxy(46, 13);
	printf("8= OCTAVO   SEMESTRE");
	gotxy(46, 14);
	printf("9= NOVENO  SEMESTRE\n\n");
}

//____________________________Declaracion de funciones__________________________
//Funcion encargada de la parte estetica del programa
void tabla()
{
	gotxy(25, 22);
	printf("****************************************");
	gotxy(1, 24);
	printf("----------------------------------------------------------------");
	gotxy(1, 38);
	printf("----------------------------------------------------------------");

	y = 24;
	for (x = 0; x < 6; x++)
	{
		gotxy(1, y = y + 2);
		printf("________________________________________________________________");
	}

	y = 24;
	for (x = 0; x < 18; x++)
	{
		gotxy(0, y++);
		printf("*");
	}

	y = 22;
	for (x = 0; x < 17; x++)
	{
		gotxy(25, y++);
		printf("*");
	}
	y = 22;
	for (x = 0; x < 17; x++)
	{
		gotxy(38, y++);
		printf("*");
	}

	y = 22;
	for (x = 0; x < 17; x++)
	{
		gotxy(53, y++);
		printf("*");
	}

	y = 22;
	for (x = 0; x < 20; x++)
	{
		gotxy(64, y++);
		printf("*");
	}
	printf("\n*****************************************************************");
}

//____________________________Declaracion de funciones__________________________
//Funcion encargada de la parte estetica del programa
void figurita()
{
	gotxy(0, 0);
	printf("**************************************************************************");
	gotxy(0, 4);
	printf("**************************************************************************");
	y = 0;
	for (x = 0; x < 20; x++)
	{
		gotxy(74, y++);
		printf("**");
	}
	y = 5;
	for (x = 0; x < 4; x++)
	{
		gotxy(54, y++);
		printf("**********************");
	}
	y = 5;
	for (x = 0; x < 7; x++)
	{
		gotxy(13, y++);
		printf("*");
	}
	y = 5;
	for (x = 0; x < 7; x++)
	{
		gotxy(33, y++);
		printf("*");
	}
	y = 8;
	for (x = 0; x < 4; x++)
	{
		gotxy(13, y++);
		printf("**************************************************************");
	}
	y = 12;
	for (x = 0; x < 7; x++)
	{
		gotxy(45, y++);
		printf("******************************");
	}
	y = 12;
	for (x = 0; x < 8; x++)
	{
		gotxy(44, y++);
		printf("*");
	}
	y = 9;
	for (x = 0; x < 3; x++)
	{
		gotxy(20, y++);
		printf("*");
	}
	y = 17;
	gotxy(1, 19);
	printf("**************************************************************************");
	y = 4;
	for (x = 0; x < 14; x++)
	{
		gotxy(53, y++);
		printf("*");
	}
	y = 12;
	for (x = 0; x < 8; x++)
	{
		gotxy(43, y++);
		printf("*");
	}
}

//____________________________Declaracion de funciones__________________________
/*Se piden los datos personales del alumno, mediante teclado tiene la opcion de que 
si se han ingresado datos erroneos, simplemente se corrijan sin tener que cerrar y
volver a abrir el programa*/
void alumno()
{

	do
	{

		system("CLS");
		system("COLOR 0F");
		figurita();
		gotxy(15, 1);
		printf("\t   Instituto Politecnico Nacional\n");
		printf("\tEscuela Superior de Ingenieria Mecanica y Electrica\n");
		printf("\t\t\tUnidad Culhuacan");
		gotxy(0, 5);
		gotxy(1, 6);
		printf("ALUMNO(A):\n");
		gotxy(1, 7);
		/*______________________________fflush(stdin);__________________________________
   esta funcion nos permite borrar los espacios de memoria vacios cuando estamos 
   leyendo variables es de gran utilidad para refrescar el programa.
*/
		fflush(stdin);
		gets(nom);
		gotxy(0, 8);
		printf("*****************************************************");
		gotxy(15, 6);
		printf("Apellido paterno: ");
		gotxy(15, 7);
		gets(apellido1);
		gotxy(35, 6);
		printf("Apellido materno:");
		gotxy(35, 7);
		gets(apellido2);
		gotxy(1, 9);
		printf("\n NUM. BOLETA:\n");
		gotxy(0, 12);
		printf("********************************************");
		gotxy(1, 11);
		fgets(nb, 12, stdin);
		gotxy(1, 13);
		printf("INSCRITO(A) EN: ESIME CULHUACAN\n");
		printf(" CARRERA:Ingenieria en Comunicaciones\n y Electronica");
		gotxy(1, 16);
		printf("CURP:");
		gotxy(7, 16);
		fgets(curp, 18, stdin);
		gotxy(0, 17);
		printf("********************************************");
		gotxy(1, 18);
		printf("GENERACION:  ");
		gotxy(13, 18);
		fflush(stdin);
		fgets(gen, 15, stdin);

		printf("\nEstan correctos los datos s/n:  ");
		res = getch();
	} while (res == 'N' || res == 'n');
}

//____________________________Declaracion de funciones__________________________
// Esta funcion se encarga de imprimir los datos, que fueron solicitados del alumno
void boleta()
{
	system("color 0F");
	gotxy(20, 4);
	printf("************************************************************************");
	y = 4;
	for (x = 0; x < 14; x++)
	{
		gotxy(20, y++);
		printf("*");
	}
	y = 4;
	for (x = 0; x < 15; x++)
	{
		gotxy(92, y++);
		printf("*");
	}
	gotxy(20, 18);
	printf("************************************************************************");
	gotxy(43, 6);
	printf("Instituto Politecnico Nacional");
	gotxy(30, 7);
	printf("Escuela Superior de Ingenieria Mecanica y Electrica");
	gotxy(49, 8);
	printf("Unidad Culhuacan");
	gotxy(22, 10);
	printf("Ingenieria en Comunicaciones y Electronica  I.C.E");
	gotxy(22, 11);
	printf("Numero de boleta: %s", nb);
	gotxy(22, 12);
	printf("Alumn@: %s %s %s", nom, apellido1, apellido2);
	gotxy(22, 13);
	printf("Curp: %s", curp);
	gotxy(22, 14);
	printf("Generacion: %s", gen);
	gotxy(22, 16);
	printf("Promedio semestral: %.2f", promsem);
}
