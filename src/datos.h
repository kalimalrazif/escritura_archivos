
#pragma once

#ifndef __DATOS_H__
#define __DATOS_H__

int numeros[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36 };
char cedulas[][9] = { "23699271" , "20964280" , "23561025" , "23002331", "23015069", "20100149", "22118269", "19528962", "23913539", "20962996", "20150846", "20965402", "19631865", "20962759", "22649273", "24789866", "20867113", "25079570", "17701870", "25079103", "20012906", "23914487", "23007619", "15925899", "23549582", "20963227", "24837179", "23015308", "22114439", "20238283", "22983227", "24556764", "24112140", "21169877", "23026596", "23916457" };
char nombres_apellidos [][60] = { "Santana Leon Rudy Anayeffe", "Aguilera Prieto, Rosalinda", "Altuve Pantaleon Rosniher Carolina", "Bastidas Monsalve Jonathan Jose", "Bautista Guerrero Yense Alfonso", "Camargo Castillo Fanny Yesenia", "Cardozo Molina Ronald Gabriel", "Castellano Quevedo Jonar Jonay", "Diaz Hernandez Orlando Jose", "Díaz Hurtado Francis Yarubi", "Diaz Ramirez Ander Jose", "Flores Mejias Nurquia Naimar", "Florez Eugenio Andreina", "Godoy Bolivar Milagros Albany", "Guerrero Andrade Adriana Nayleth", "Hernandez Marquez Joselin Carolina", "Martinez Morales Eliseo Enrique", "Molina Mirian Johana", "Molina Aguirre Astrid Jissell", "Molina Barrientos Maryalis Nelmary", "Morales Medina Dayana Carolina", "Moreno Uzcategui Dany Yoel", "Olivares Rangel Genesis Zuleima", "Ortega Urbina Ana Elizabeth", "Paredes Enmanuel Leonardo", "Prato Kanizsay Jorgina Jose", "Rabago Jimenez Marvis Rebeca", "Rivas Marquez Mariela", "Rojas Guanipa Maria Elena", "Rojas Vargas Karly Yeraldi", "Roman Acosta Yasmin Alexandra", "Salazar Ramirez Rafael Jose Tadeo", "Silva Meza Alina Gineth", "Torres Gavidia Ismerly Yuranny", "Torres Gudiño Jose Rafael", "Vivas Galviz Natacha Yeraldin" }; 

struct alumno {
   int numero;
   char cedula[9];
   char nombre_apellido[60];
};

#endif