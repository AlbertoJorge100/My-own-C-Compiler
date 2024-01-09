%{
	#define ADD 3
	#include "tabsim.c"		
	char type;
	void yyerror(char *);
	int yylex(void);
	extern int yylineno;
	extern char *yytext;
	extern simbolo *t;
	int esNumero(char * s){
		int i=0;
		if (s[i] == '-')
			i++;
		for(; s[i] != 0; i++)
		if ((s[i]<'0') || (s[i]>'9')) 
			return 0;
		return 1;
	}
%}
%union 	{
	int numero;
	simbolo * ptr_simbolo;
	char cadena[100];
	expresion valor;		
}

	
%start programa		
%token <numero> NUMERO 
%token <ptr_simbolo> ID
%token <cadena> CADENA
%type<valor> expr
%type<valor> valid 
%type <numero> sentencia sentencias
%token PRINT EXIT_COMMAND IN END LET STRING BOOLEAN
%token TO_STRING TO_INT INTEGER CMP_ME PARSE CONVERT 
%right MAS_IGUAL MENOS_IGUAL POR_IGUAL DIV_IGUAL 
%token CMP_DIF CMP_IGUAL CMP_MA_I CMP_ME_I CMP_MA OR AND NOT EQUALS B_TRUE B_FALSE
%token PUBLIC STATIC VOID MAIN CORCHETES CLASS NAMESPACE USING SYSTEM
%token CONSOLE WRITELINE FOR IF ELSE READLINE COMENTARIO_LINEA COMENTARIO_MULTI_LINEA
%left '*' '/'
%right '+' '-'

%%
programa:
		USING SYSTEM ';'
		NAMESPACE ID '{'
			CLASS ID '{'
				sentencias
				PUBLIC STATIC VOID MAIN '('STRING CORCHETES ID')'		
				'{'
					sentencias 
				'}'	

			'}'

		'}'

		| error ';'	{ yyerrok;}
		;
for:
	FOR '(' INTEGER ID '=' NUMERO ';' ID CMP_ME NUMERO ';' ID MAS_IGUAL NUMERO ')'
	'{'
		expr		{							
						for(int i=$6; i < $10; i++){
						/* for(int i=0;i<10;i++){ */
							switch($17.tipo){
								case 'i':
									printf("valor: %i\n", $17.info.valor_int);							 
									break;
								case 's':
								printf("valor: %s\n", $17.info.valor_cad);							 
									break;									
							}
							
						}
							
					}
					
		
	'}'
	| error ';'	{ yyerrok;}		
	;



declaraciones:
		|	declaraciones ',' decl		{;}
		|	decl				{;}
		;
decl:
		tipo	{;}
		;

sentencias: /* cadena vacia */				{;}
		| sentencias sentencia ';'			{;}				
		| error ';'	{ yyerrok;}				
		|									{;}
		;		

sentencia: 	
	expr				    { printf("%d\n", $1); }
	EXIT_COMMAND			{ exit(EXIT_SUCCESS);}
	| CONSOLE '.' WRITELINE
						expr{									
								/* expr					{ printf("%d\n", $1); } */
								/* printf("%d\n", $2.info.valor_int);									 */
								if($4.tipo=='i' || $4.tipo=='b'){									
									printf("%d\n", $4.info.valor_int);
								}									
								 else if($4.tipo=='s') 
									printf("%s\n", $4.info.valor_cad);  
							}
	| CONSOLE '.' WRITELINE
						valid{									
								/* expr					{ printf("%d\n", $1); } */
								/* printf("%d\n", $2.info.valor_int);									 */
								if($4.tipo=='i' || $4.tipo=='b'){									
									printf("%d\n", $4.info.valor_int);
								}																	
							}								
	| ID '=' expr			{ 
								/* $$ = $3;
								simbolo *s = buscar(t, $1->nombre);								
								s->valor = $3; */		
								simbolo *s = buscarEnBloque(t, $1->nombre,level);								
								if(s->tipo=='i')	{									
									$1->info.valor_int=$3.info.valor_int;
									s->info.valor_int=$3.info.valor_int;
								}														
								else if(s->tipo=='s'){
									strcpy($1->info.valor_cad, $3.info.valor_cad);
									strcpy(s->info.valor_cad, $3.info.valor_cad);
								}									
								if(s->tipo!=$3.tipo)
									printf("Error: tipo de dato erroneo, en linea: %d\n", yylineno+ADD);

							/* 		|ID '=' valid			{
								simbolo *s = buscarEnBloque(t, $1->nombre,level);								
								if(s->tipo=='b' && $3.tipo=='b'){									
									$1->info.valor_int=$3.info.valor_int;
									s->info.valor_int=$3.info.valor_int;
								}														
								else
									/* printf("Error: tipo de dato erroneo, en linea: %d, ti: %c, te: %c\n", yylineno, s->tipo, $3.tipo); 
									printf("Error: tipo de dato erroneo, en linea: %d\n", yylineno);
							} */									
							}
	|ID '=' valid			{
								simbolo *s = buscarEnBloque(t, $1->nombre,level);								
								if(s->tipo=='b' && $3.tipo=='b'){									
									$1->info.valor_int=$3.info.valor_int;
									s->info.valor_int=$3.info.valor_int;
									//printf("respuesta: %d\n",$3.info.valor_int);
								}														
								else
									/* printf("Error: tipo de dato erroneo, en linea: %d, ti: %c, te: %c\n", yylineno, s->tipo, $3.tipo); */
									printf("Error: tipo de dato erroneo, en linea: %d\n", yylineno+ADD);
							}
	

	|ID MAS_IGUAL expr		{								
								simbolo *s = buscarEnBloque(t, $1->nombre,level);																
								if(((s->tipo == 's') && ($3.tipo == 's'))) {															
									sprintf($1->info.valor_cad, "%s%s", $1->info.valor_cad, $3.info.valor_cad); 
									sprintf(s->info.valor_cad, "%s%s", s->info.valor_cad, $3.info.valor_cad); 
								} else if((s->tipo == 'i') && ($3.tipo == 'i')) {
									/* $$.tipo = 'i'; */
									$1->info.valor_int = s->info.valor_int + $3.info.valor_int;
									s->info.valor_int = s->info.valor_int + $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}						 											  
	|ID MENOS_IGUAL expr	{								
								simbolo *s = buscarEnBloque(t, $1->nombre,level);																
								if((s->tipo == 'i') && ($3.tipo == 'i')) {
									/* $$.tipo = 'i'; */
									$1->info.valor_int = s->info.valor_int - $3.info.valor_int;
									s->info.valor_int = s->info.valor_int - $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}
	|ID POR_IGUAL expr		{								
								simbolo *s = buscarEnBloque(t, $1->nombre,level);																
								if((s->tipo == 'i') && ($3.tipo == 'i')) {
									/* $$.tipo = 'i'; */
									$1->info.valor_int = s->info.valor_int * $3.info.valor_int;
									s->info.valor_int = s->info.valor_int * $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}
	|ID DIV_IGUAL expr		{							
								simbolo *s = buscarEnBloque(t, $1->nombre,level);																
								if((s->tipo == 'i') && ($3.tipo == 'i')) {
									/* $$.tipo = 'i'; */
									$1->info.valor_int = s->info.valor_int / $3.info.valor_int;
									s->info.valor_int = s->info.valor_int / $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
							}																					 											  	
	| decl				{;}	
	;

tipo:		
	|INTEGER ID	{
					simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
					if (s==NULL){							
						/* $2->valor=0;	 */
						$2->tipo='i';					  
						insertar(&t, $2);				
						//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
					}else{
						printf("ERROR en linea %d: la variable: \"%s\" ya existe \n", yylineno+ADD, yytext-2);
						/* exit(EXIT_COMMAND); */
					}
						
				}
	|INTEGER ID	'=' expr{
							simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
							if (s==NULL){							
								/* $2->valor=0;	 */
								if($4.tipo=='i'){
									$2->tipo='i';
									$2->info.valor_int=$4.info.valor_int;					  
									insertar(&t, $2);				
									//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
								}else
									printf("ERROR en linea %d: dato de asignacion erroneo\n", yylineno+ADD);
							}else{
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
								
						}
	|STRING ID	{
					simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
					if (s==NULL){							
						$2->tipo='s';					  
						insertar(&t, $2);					
						//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
					}else{
						/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
						printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
						/* exit(EXIT_COMMAND); */
					}
						
				}
	|STRING ID '=' expr {							
							simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
							if (s==NULL){		
								//printf("tipe cadena: %c\n",$4.tipo);					
								if($4.tipo=='s'){									
									$2->tipo='s';	
									strcpy($2->info.valor_cad, $4.info.valor_cad);
									insertar(&t, $2);					
									//printf("tipe added: %c, %s\n",$2->tipo, $2->nombre);		
								}else
									printf("ERROR en linea %d: no se puede asignar ese dato \n", yylineno+ADD);
							}else{
								/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
								
						}
	|BOOLEAN ID	{
					simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
					if (s==NULL){							
						$2->tipo='b';					  
						insertar(&t, $2);											
					}else{
						/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
						printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
						/* exit(EXIT_COMMAND); */
					}
				}
	
	|BOOLEAN ID	'=' valid{
							simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
							if (s==NULL){							
								if($4.tipo=='b'){
									$2->tipo='b';
									$2->info.valor_int=$4.info.valor_int;					  
									insertar(&t, $2);														
								}else
									printf("ERROR en linea %d: no se puede asignar ese dato \n", yylineno+ADD);								
							}else{
								/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
						}														
	|BOOLEAN ID	'=' expr{
							simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
							if (s==NULL){							
								if($4.tipo=='b'){
									$2->tipo='b';
									$2->info.valor_int=$4.info.valor_int;					  
									insertar(&t, $2);														
								}else
									printf("ERROR en linea %d: no se puede asignar ese dato \n", yylineno+ADD);
								
							}else{
								/* printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext); */
								printf("ERROR en linea %d: la variable: \"%s\" ya existe. \n", yylineno+ADD, yytext-2);
								/* exit(EXIT_COMMAND); */
							}
						}						

	|			{;}
	;

valid:		
	expr CMP_MA expr					{																																	
											if($1.tipo=='i' && $3.tipo=='i'){
												$$.tipo='b';
												if($1.info.valor_int>$3.info.valor_int)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}	
	|expr CMP_MA_I expr					{																																	
											if($1.tipo=='i' && $3.tipo=='i'){
												$$.tipo='b';
												if($1.info.valor_int>=$3.info.valor_int)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}										
	
	|expr CMP_ME expr					{																																	
											if($1.tipo=='i' && $3.tipo=='i'){
												$$.tipo='b';
												if($1.info.valor_int<$3.info.valor_int)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}									
	|expr CMP_ME_I expr					{																																	
											if($1.tipo=='i' && $3.tipo=='i'){
												$$.tipo='b';
												if($1.info.valor_int<=$3.info.valor_int)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}							
	|valid OR valid					{
										if($1.tipo=='b' && $3.tipo=='b'){
											$$.tipo='b';
											if($1.info.valor_int==1 || $3.info.valor_int==1)
												$$.info.valor_int=1;
											else 
												$$.info.valor_int=0;
										}
									}
	|valid AND valid				{
										if($1.tipo=='b' && $3.tipo=='b'){
											$$.tipo='b';
											if($1.info.valor_int==1 && $3.info.valor_int==1)
												$$.info.valor_int=1;
											else 
												$$.info.valor_int=0;
										}
									}
	|NOT valid						{
										if($2.tipo=='b'){
											$$.tipo='b';
											if($2.info.valor_int==0)
												$$.info.valor_int=1;
											else 
												$$.info.valor_int=0;
										}
									}
	|NOT expr						{
										if($2.tipo=='b'){
											$$.tipo='b';
											if($2.info.valor_int==0)
												$$.info.valor_int=1;
											else 
												$$.info.valor_int=0;
										}
									}											
	|valid CMP_DIF valid			{
										if($1.tipo=='b' && $3.tipo=='b'){
											$$.tipo='b';
											if($1.info.valor_int!=$3.info.valor_int)
												$$.info.valor_int=1;
											else
												$$.info.valor_int=0;
										}
									}
																	
	|expr CMP_DIF expr					{																																	
											if($1.tipo=='i' && $3.tipo=='i'){
												$$.tipo='b';
												if($1.info.valor_int!=$3.info.valor_int)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}else if($1.tipo=='s' && $3.tipo=='s'){
												$$.tipo='b';
												if(strcmp($1.info.valor_cad, $3.info.valor_cad)!=0)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}else if($1.tipo=='b' && $3.tipo=='b'){
												$$.tipo='b';
												if($1.info.valor_int!=$3.info.valor_int)
													$$.info.valor_int=1;
												else
													$$.info.valor_int=0;
											}
											else
												printf("Error en linea %d: no se pueden operar los datos", yylineno+ADD);
												
										}
	|valid CMP_IGUAL valid			{
										if($1.tipo=='b' && $3.tipo=='b'){
											$$.tipo='b';
											if($1.info.valor_int==$3.info.valor_int)
												$$.info.valor_int=1;
											else
												$$.info.valor_int=0;
										}
									}										
	|expr CMP_IGUAL expr			{																																	
										if($1.tipo=='i' && $3.tipo=='i'){
											$$.tipo='b';
											if($1.info.valor_int==$3.info.valor_int)
												$$.info.valor_int=1;
											else
												$$.info.valor_int=0;
										}else if($1.tipo=='s' && $3.tipo=='s'){
											$$.tipo='b';
											if(strcmp($1.info.valor_cad, $3.info.valor_cad)==0)
												$$.info.valor_int=1;
											else
												$$.info.valor_int=0;
										}else if($1.tipo=='b' && $3.tipo=='b'){
											$$.tipo='b';
											if($1.info.valor_int==$3.info.valor_int)
												$$.info.valor_int=1;
											else
												$$.info.valor_int=0;
										}
										else
											printf("Error en linea %d: no se pueden operar los datos\n", yylineno+ADD);
											
									}											
																																																																																													
	|expr '.' EQUALS '('expr')'		{										
										$$.tipo='b';
										if($1.tipo=='s'&& $5.tipo=='s'){
											if(strcmp($1.info.valor_cad, $5.info.valor_cad)==0)
												$$.info.valor_int=1;
											else
												$$.info.valor_int=0;										
										}else
											printf("Error en la linea %d; no se pueden operar los datos \n",yylineno+ADD);
										
									}	
															
																																																
	| '('valid')'					{$$=$2;}			
;


expr:
		NUMERO	       	    { 
								$$.tipo='i';
								$$.info.valor_int=$1;								
							}
		|B_TRUE						{
										$$.tipo='b';
										$$.info.valor_int=1;
									}
		|B_FALSE					{
										$$.tipo='b';
										$$.info.valor_int=0;
									}							
		|CADENA				{
								$$.tipo='s';
								strcpy($$.info.valor_cad, $1);
								/* printf("%s",$$.info.valor_cad); */
								/* | ID                { 
														simbolo *s=buscar(t, $1->nombre);
														$$ = s->valor;
													}
									| expr '+' expr     { $$ = $1 + $3; }
									| expr '-' expr     { $$ = $1 - $3; }
									| expr '*' expr     { $$ = $1 * $3; }
									| expr '/' expr     { $$ = $1 / $3; }													
													
													 */
							}
		|ID					{
								simbolo *s=buscarEnBloque(t, $1->nombre, level);		     
								/* simbolo *s=buscar(t, $1->nombre);		      */
								$$.tipo=s->tipo;
								/* printf("t..: %d\n",s->info.valor_int); */
								if($$.tipo=='i' || $$.tipo=='b'){
									$$.info.valor_int=s->info.valor_int;
									$1->info.valor_int=s->info.valor_int;
								}									
								else
									strcpy($$.info.valor_cad, s->info.valor_cad);
							}	
		|expr '+' expr 		{
								if((($1.tipo == 's') && ($3.tipo == 's'))) {						
									$$.tipo = 's';															
									sprintf($$.info.valor_cad, "%s%s", $1.info.valor_cad, $3.info.valor_cad);
								} else if(($1.tipo == 'i') && ($3.tipo == 'i')) {
									$$.tipo = 'i';
									$$.info.valor_int = $1.info.valor_int + $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
					 		}
		|expr '-' expr 		{
								if(($1.tipo == 'i') && ($3.tipo == 'i')) {
									$$.tipo = 'i';
									$$.info.valor_int = $1.info.valor_int - $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
					 		}							 
		|expr '*' expr 		{
								if(($1.tipo == 'i') && ($3.tipo == 'i')) {
									$$.tipo = 'i';
									$$.info.valor_int = $1.info.valor_int * $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
					 		}

		|expr '/' expr 		{
								if(($1.tipo == 'i') && ($3.tipo == 'i')) {
									$$.tipo = 'i';
									$$.info.valor_int = $1.info.valor_int / $3.info.valor_int;
								}  else 
									printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
								/* 	|valid '?' expr ':' expr {									
									if($3.tipo=='i'&& $5.tipo=='i'){
										$$.tipo=='i';
										if($1.info.valor_int==1)
											$$.info.valor_int=$3.info.valor_int;
										else
											$$.info.valor_int=$5.info.valor_int;
									}else if($3.tipo=='s'&& $5.tipo=='s'){
										$$.tipo=='s';
										if($1.info.valor_int==1)											
											strcpy($$.info.valor_cad,$3.info.valor_cad);																																
										else
											strcpy($$.info.valor_cad,$5.info.valor_cad);
									}else
										printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
								} */
					 		}
								 
		|valid '?' expr ':' expr {									
									if($3.tipo=='i'&& $5.tipo=='i'){
										$$.tipo=='i';
										if($1.info.valor_int==1)
											$$.info.valor_int=$3.info.valor_int;
										else
											$$.info.valor_int=$5.info.valor_int;
									}else if($3.tipo=='s'&& $5.tipo=='s'){
										$$.tipo=='s';
										if($1.info.valor_int==1)											
											strcpy($$.info.valor_cad,$3.info.valor_cad);																																
										else
											strcpy($$.info.valor_cad,$5.info.valor_cad);
									}else
										printf("ERROR en linea: %d, No se pueden operar los datos ingresados.\n",yylineno+ADD);
								}
        |expr '.' TO_STRING '('')' {	
										$$.tipo='s';															  										
										if($1.tipo=='i')
											snprintf($$.info.valor_cad, sizeof($$.info.valor_cad), "%d", $1.info.valor_int);
										else
											printf("Error en la linea: %d, se requiere un tipo entero\n", yylineno+ADD);																	
									}
		|CONVERT '.' TO_STRING '('expr')'{	
											$$.tipo='s';															  										
											if($5.tipo=='i')
												snprintf($$.info.valor_cad, sizeof($$.info.valor_cad), "%d", $5.info.valor_int);
											else
												printf("Error en la linea: %d, se requiere un tipo entero\n", yylineno+ADD);																	
										}									

		|INTEGER '.' PARSE '(' expr ')'  {
								$$.tipo='i';
							   	if($5.tipo=='s'){
									if(esNumero($5.info.valor_cad))
										$$.info.valor_int=atoi($5.info.valor_cad);
									else
										printf("Error en la linea: %d, se requieren solo valores numericos\n", yylineno+ADD);
								}
								else
									printf("Error en la linea: %d, se requiere un tipo string\n", yylineno+ADD);
							  }
			 							  		
        | '(' expr ')'      { $$ = $2; }		
        ;				
		
%%
void yyerror(char *s)
{
	extern int yylineno;	// predefinida en lex.c
	extern char *yytext;	// predefinida en lex.c
	
	printf("ERROR: %s en simbolo \"%s\" en linea %d \n",s,yytext,yylineno+ADD); 
}
void main()
{ 
	t = crear();
	yyparse();
	//eliminarBloque(&t);
	//eliminarBloque(&t);
	imprimir(t);
	/* tipo ID	{
				simbolo *s = buscarEnBloque(t, $2->nombre, level);		     
				if (s==NULL){
					if($1=="int"){
						$2->valor=0;	
					 	$2->tipo='i';					  
						insertar(&t, $2);	 
					}else{						
					 	$2->tipo='s';					  
						insertar(&t, $2);
					}					
				}else{
					printf("ERROR en linea %d: la variable: \"%s\" ya existe   \n", yylineno, yytext /*s->tipo , s->nombre );					
				}
					
			} */
}
