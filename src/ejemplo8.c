/*
 * ejemplo8.c
 *
 * Copyright (C) 2014 - Nomar Oscar Mora Tovar
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include "datos.h"

int main() {

   FILE *archivo;
   int cual;
   int resultado;
   
   archivo = fopen("alumnos.dat", "rb");

   if ( archivo == NULL) { printf("Error: No pudo abrirse el archivo alumnos.dat para lectura.\n"); return (1); }

   do{
	  printf("Que regristro desea ver? ");

	  char cadena[1024]; 
	  fgets( cadena, sizeof(cadena), stdin );
	  resultado = sscanf(cadena, "%d", &cual);
	  if (resultado < 1) {
		 printf("El valor ingresado no es numerico, intente nuevamente \n");
	  }
   } while (resultado < 1);

   fseek (archivo, sizeof(struct alumno)*(cual-1), SEEK_SET);

   struct alumno registro;
   
   fread(&registro, sizeof(struct alumno), 1, archivo);

   printf("Registro %d: %s  %s\n", registro.numero, registro.cedula, registro.nombre_apellido);
   
   fclose(archivo);
   return (0);
}