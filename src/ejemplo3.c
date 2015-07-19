/*
 * ejemplo3.c
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

   archivo = fopen("alumnos.dat", "rb");

   if ( archivo == NULL) { printf("Error: No pudo abrirse el archivo alumnos.dat para lectura.\n"); return (1); }

   /* Leyendo registro a registro */
   
   while (!feof(archivo)) {

	  struct alumno registro;
	  int cuantos = fread(&registro, sizeof(struct alumno), 1, archivo);

	  printf("Registros leidos: %d ", cuantos);
	  printf("contenido del registro %d,%s,%s\n", registro.numero, registro.cedula, registro.nombre_apellido); 
   }

   /* Rebobinamos el archivo */
   rewind(archivo);

   /* Vamos a leer todos los registros de un solo golpe */
   struct alumno todos[36];

   int cuantos = fread(todos, sizeof(struct alumno), 36, archivo);

   int i;
   for(i=0; i< cuantos; i++) {
	  printf("Contenido del registro %d,%s,%s\n", todos[i].numero, todos[i].cedula, todos[i].nombre_apellido); 
   }
   
   fclose(archivo);
   return (0);
}