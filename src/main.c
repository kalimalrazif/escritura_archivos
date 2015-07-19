/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 3; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2014 Nomar Oscar Mora Tovar <nomar@echo1>
 * 
 * escritura_archivos is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * escritura_archivos is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include "datos.h"

int main() {

   int i;
   FILE *archivo;

   archivo = fopen("alumnos.csv", "w");

   if (archivo != NULL) {
	  for(i=0; i<36; i++) {
		 fprintf(archivo, "%d,%s,\"%s\"\n", numeros[i], cedulas[i], nombres_apellidos[i]);
	  }
   } else {
	  printf("Error: No pudo abrirse el archivo alumnos.csv para escritura.\n");
	  return (1);
   }
   fclose(archivo);
   return (0);
}

