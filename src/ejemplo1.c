/*
 * ejemplo1.c
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

   archivo = fopen("alumnos.csv", "r");

   if ( archivo == NULL) { printf("Error: No pudo abrirse el archivo alumnos.csv para lectura.\n"); return (1); }

   while (!feof(archivo)) {

	  char caracter = fgetc (archivo);

	  printf("%c", caracter); 
   }
   fclose(archivo);
   return (0);
}