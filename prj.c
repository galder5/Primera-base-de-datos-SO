#include <mysql.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	MYSQL *conn;
	int err;
	// Estructura especial para almacenar resultados de consultas 
	MYSQL_RES *resultado;
	MYSQL_ROW row;
	int partidas;

	//Creamos una conexion al servidor MYSQL 
	conn = mysql_init(NULL);
	if (conn==NULL) {
		printf ("Error al crear la conexi￳n: %u %s\n", 
				mysql_errno(conn), mysql_error(conn));
		exit (1);
}
	//inicializar la conexin
	conn = mysql_real_connect (conn, "localhost","root", "mysql", "poker",0, NULL, 0);
	if (conn==NULL) {
		printf ("Error al inicializar la conexion: %u %s\n", 
				mysql_errno(conn), mysql_error(conn));
		exit (1);
	}

	printf ("Dame el nombre del usuario\n");
	scanf (%s, nombre);

	sprintf(consulta,"SELECT Jugador.usuario FROM (Jugador, Partida, Partidas) WHERE Partida.ganador = "%s" AND Partidas.jugador = Partidas.Partida", nombre);

	err=mysql_query (conn, consulta);
	if (err!=0) {
		printf ("Error al consultar datos de la base %u %s\n",
				mysql_errno(conn), mysql_error(conn));
		exit (1);
	}

	resultado = mysql_store_result (conn);
	row = mysql_fetch_row (partida);
	
	if (row == NULL)
		printf ("No se han obtenido datos en la consulta\n");
	else
		while (row !=NULL) {
			
			partidas=partidas+1;
			
			
	}
	
	printf ("Partidas totales ganadas: %d\n", partidas);
		
	row = mysql_fetch_row (resultado)
	mysql_close (conn);
	exit(0);
}



