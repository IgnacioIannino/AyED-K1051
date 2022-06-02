#include<cassert>
//al añadir la libreria cassert, podremos utilizar el assert

#include<iostream>
int main(){
	//valores int (enteros)
	assert (2==1+1);
	assert(-10==-2*5);
	assert (100>-5);
	assert (0==0*2986732);
	assert (1000<=2901741);
	assert (100!=5+5);
	assert (100 == 200-100);
	assert (4==-2*-2);

	// valores bool (Verdadero o falso)

	assert (true);
	assert (true != false);	
	assert (not false);
	assert (not true == false);
	assert ((true and false) == false);
	assert ((true or false ) and true );
	assert (((true or false) and false ) == false);	
	
	// valores char (caracteres ) 
	assert ('A'+' '== 'a')	;
	assert ('A'+' '== '97')	;

	assert ('a'=='a');
	assert ('a'!='b');
	assert ('a'!='A');
	assert ('a'>'A');
	assert ('s'>'a');
	
	// valores double (valores con decimales)
	
	assert ( 2.0 == 1.0+1.0);
	assert (1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	assert (1.5== 3.0- 1.5);
	assert (2.0!= 1.0+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	assert (2.0 == 20.0*0.1);
	
	//valores string (cadenas de caracteres)
	
	assert (7 == std::string("Ignacio").length());
	assert (7 == std::string("Iannino").length());
	assert (15 == std::string("Ignacio Iannino").length());
	assert (std::string ("IANNINO")< std ::string("iannino"));
	
	//valores unsigned (n>=0)
	
	assert (4==2+2);
	assert(10==2*1*5);
	assert (10>5);
	assert (20==10*2+ (0*2986732));
	assert (1000<=2919-919);

	
	return 0;

}
