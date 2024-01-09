 #include "tabsim.h"
 
 simbolo * crear() {
	return NULL;
 };
 void insertar(simbolo **pT, simbolo *s) {
	s->sig = (*pT);	//el siguiente de "s" apunta al actual(top)
	(*pT) = s;	//el actual ahora es "s"(simbolo insertado)
 };
 
 void eliminar(simbolo **pT) {
	simbolo *s = (*pT);	//guardamos el actual en s
	(*pT) = s->sig;		//ahora el actual es el siguiente
	free(s);		//liberamos s
 };
 
 void eliminarBloque(simbolo **pT) {
	simbolo *s = (*pT);
	int l = s->scope;
	while (s->scope == l) {	//elimina mientras este en el mismo nivel
		(*pT) = s->sig;
		s = s->sig;
		if (s==NULL)
			break;
	}	
 };
 
 simbolo *buscar(simbolo *t, char nombre[20]){
	while ( (t != NULL) && (strcmp(nombre, t->nombre)) )
		t = t->sig;
	return (t);
 };
 
 simbolo *buscarEnBloque(simbolo *t, char nombre[20], int scope){
	
	while (t != NULL){
		if (strcmp(nombre, t->nombre)==0){
			if (t->scope==scope)
				return t;
			else
				return NULL;
		}
		else{t=t->sig;}			
		}
	return (t);
 };
 
 void entrarBloque(){
	level++;
 }
 
 void salirBloque(){
	level--;
 }
 
 void imprimir(simbolo * t) {
	while (t != NULL) {
		/* printf("%s: valor-> %d: nivel->%d\n", t->nombre, t->valor,t->scope);		 */
		t = t->sig;


			/* string mensaje;
			mensaje="hola";
			Console.WriteLine(mensaje);
			string x;
			x=mensaje;
			x+=" este es el mensaje";								
			sx*=100;
			
			bool cdc;
			cdc=5<15 && 1<11 && "mensaje".Equals("hola") && 4!=4;	
			cdc=true;
			bool xss;
			int md;
			md=100;
			xss="hola".Equals("6hola");
			Console.WriteLine "el valor de xss: ";					
			Console.WriteLine xss;		
			string angelica="hola "+"mundo "+toString(125);
			angelica+="gatita"+" "+"serpas";			
			string sangelica;
			bool encontrado=5<15 && 1<11 && "mensaje".Equals("mensaje") && 3!=4;
			string nombre="jorge";
			string nombre2="jorsge";
			Console.WriteLine(encontrado);	
			bool etc=(encontrado!=false)&&5<15 && 1<11 && "mensaje".Equals("menssaje") && 3!=4;
			Console.WriteLine(etc);							
			string dd;
			dd=ToString("155");
			Console.WriteLine(dd);
			
			
			
			 */
	}
};
