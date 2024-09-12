/*
 * BasicTree.c
 * 
 * Copyright 2024 Vinícius Vasconi <micska@VillasBoas>
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define GET_INT(X) ({                                                  \
	printf("Insert a value: ");                                        \
	scanf("%d", &X); })
	
#define GET_FLOAT(X) ({                                                \
	printf("Insert a value: ");                                        \
	scanf("%f", &X); })
	
#define GET_DOUBLE(X) ({                                               \
	printf("Insert a value: ");                                        \
	scanf("%lf", &X); })
	

#define ERR printf("Invalid argument... \n");

typedef enum Mode{
	LNR,
	LRN,
	RLN,
	NRL,
	NLR,
	RNL,
}Mode;

typedef enum Type{
	INT = 0,
	FLOAT,
	DOUBLE,
}Type;

typedef struct infoNode{
	enum Type t;
	union{
		int v1;
		float v2;
		double v3;
	};
}infoNode;

typedef struct Node{ 
	int balance;
	struct TipoNo *parent;										
	struct TipoNo *left;							
	struct TipoNo *right;
	infoNode info;							
}Node;

typedef struct Manage_tree{
	struct Node root;
	int numberOfNodes;
}Manage_tree;

Node *   createNode();
Node *tree_start();

void* getInfo(infoNode i, Type t);
void tree_add(Node* root, infoNode add);
void tree_remove(Node* root,infoNode key);
void tree_search(Node* root,infoNode key);
void tree_print(Node* root, enum Mode m);
void tree_printPerLevel(Node* root, enum Mode m);
void tree_ClockWiseRotation(Node* root);
void tree_RClockWiseRotation(Node* root);
void tree_LRrotation(Node* root);
void tree_RLrotation(Node* root);
void tree_help();


Node *createNode(Type t){
	
	Node* new = (Node*)malloc(sizeof(Node));
	if(new == NULL) return NULL; // fail to alocate
	
	infoNode info;
	info.t = t;
	switch(t){
		case INT: GET_INT(info.v1); break;
		case FLOAT: GET_FLOAT(info.v2); break;
		case DOUBLE: GET_DOUBLE(info.v3); break;
	    default: ERR; return NULL;
	};
	
	new->balance = 0;
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;
	new->info = info;
	
	return new;
}


Node *tree_start(){
	if
}
void* getInfo(infoNode i, Type t);
void tree_add(Node* root, infoNode add);
void tree_remove(Node* root,infoNode key);
void tree_search(Node* root,infoNode key);
void tree_print(Node* root, enum Mode m);
void tree_printPerLevel(Node* root, enum Mode m);
void tree_ClockWiseRotation(Node* root);
void tree_RClockWiseRotation(Node* root);
void tree_LRrotation(Node* root);
void tree_RLrotation(Node* root);
void tree_help();
























