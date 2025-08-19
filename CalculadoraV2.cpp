#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

#define RED   "\x1B[31m"
// VERMELHO
#define GRN   "\x1B[32m"
// VERDE
#define YEL   "\x1B[33;40m"
// AMARELO
#define BLU   "\x1B[34m"
// AZUL
#define MAG   "\x1B[35m"
// MANGENTA
#define CYN   "\x1B[36m"
// CIANO
#define WHT   "\x1B[37;40m"
// BRANCO
#define RESET "\x1B[0m"
// COR PADRAO
#define CLEARSCREEN "\x1b[2J"

int main(){
	float a, b, c, d, res, nums;
	int opc, opc2;
	
	cout << "###########################" << endl;
	cout << "#  Calculadora by Soldier #" << endl;
	cout << "###########################" << endl;
	cout << "#                         #" << endl;
	cout << "#     1 - Adicao          #" << endl;
	cout << "#     2 - Subtracao       #" << endl;
	cout << "#     3 - Multiplicacao   #" << endl;
	cout << "#     4 - Divisao         #" << endl;
	cout << "#     5 - Potenciacao     #" << endl;
	cout << "#     6 - Radiciacao      #" << endl;
	cout << "#     7 - Juros Simples   #" << endl;
	cout << "#     8 - Juros Composto  #" << endl;
	cout << "#     9 - Funcao 1° Grau   #" << endl;
	cout << "#    10 - Funcao 2° Grau   #" << endl;
	cout << "#    11 - Fatorial        #" << endl;
	cout << "#    12 - Fibonacci       #" << endl;
	cout << "#    13 - T. de Pitagoras #" << endl;
	cout << "#    14 - F. de Bháskara   #" << endl;
	cout << "#    15 - Estatisticas    #" << endl;
	cout << "#    16 - Temperaturas    #" << endl;
	cout << "#    19 - Exit            #" << endl;
	cout << "#    20 - Criador         #" << endl;
	cout << "#                  V.2.0  #" << endl;
	cout << "###########################" << "\n\n";
	
	cout << "Digite uma opcao: ";
	cin >> opc;
	if(opc < 5 && opc > 0){
		cout << "Digite com quantos numeros vamos trabalhar \"Max:4  Min:2\": ";
		cin >> nums;
	}else if(opc > 20){
		system("clear");
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#  1 - Tentar Novamente  #" << endl;
		cout << "#  2 - Exit              #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		
		cout << "Opcao invalida! Por favor tente novamente..." << endl;
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
	if(nums < 2){
		nums = 2;
	}else if(nums > 4){
		nums = 4;
	}

//#######################################################################

	//ADICAO COM 2 NUMEROS
	if(opc == 1 && nums == 2){
		system("clear");
		cout << "Digite o valor A: "; cin >> a;
		cout << "Digite o valor B: "; cin >> b;
		res = a + b;
		cout << "\n";
		cout << "RES = " << a << " + " << b << endl;
		cout << "RES = " << res;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//SUBTRACAO COM 2 NUMEROS
	}else if(opc == 2 && nums == 2){
		system("clear");
		cout << "Digite o valor A: "; cin >> a;
		cout << "Digite o valor B: "; cin >> b;
		res = a - b;
		cout << "\n";	
		cout << "RES = " << a << " - " << b << endl;
		cout << "RES = " << res;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//MULTIPLICACAO COM 2 NUMEROS
	}else if(opc == 3 && nums == 2){
		system("clear");
		cout << "Digite o valor A: "; cin >> a;
		cout << "Digite o valor B: "; cin >> b;
		res = a * b;
		cout << "\n";
		cout << "RES = " << a << " × " << b << endl;
		cout << "RES = " << res;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//DIVISAO COM 2 NUMEROS
	}else if(opc == 4 && nums == 2){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		res = a / b;
		cout << "\n";
		cout << "RES = " << a << " ÷ " << b << endl;
		cout << "RES = " << res;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}		
	}
	
//#######################################################################
	
	//ADICAO COM 3 NUMEROS
	if(opc == 1 && nums == 3){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		res = a + b + c;
		cout << "\n";
		cout << "RES = " << a << " + " << b << " + " << c << endl;
		cout << "RES = " << a + b << " + " << c << endl;
		cout << "RES = " << res << endl;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//SUBTRACAO COM 3 NUMEROS
	}else if(opc == 2 && nums == 3){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		res = a - b - c;
		
		cout << "\n";
		
		cout << "RES = " << a << " - " << b << " - " << c << endl;
		cout << "RES = " << a - b << " - " << c << endl;
		cout << "RES = " << res << endl;
			
		cout << "\n\n";
	
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//MULTIPLICACAO COM 3 NUMEROS
	}else if(opc == 3 && nums == 3){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		res = a * b * c;
		
		cout << "\n";
		
		cout << "RES = " << a << " × " << b << " × " << c << endl;
		cout << "RES = " << a * b << " × " << c << endl;
		cout << "RES = " << res << endl;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//DIVISAO COM 3 NUMEROS
	}else if(opc == 4 && nums == 3){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		res = a / b / c;
		
		cout << "\n";
		
		cout << "RES = " << a << " ÷ " << b << " ÷ " << c << endl;
		cout << "RES = " << a / b << " ÷ " << c << endl;
		cout << "RES = " << res << endl;
		
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
//#######################################################################

	//ADICAO COM 4 NUNEROS
	if(opc == 1 && nums == 4){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		cout << "Digite o valor D: ";
		cin >> d;
		res = a + b + c + d;
		cout << "\n";
		cout << "RES = " << a << " + " << b << " + " << c << " + " << d << endl;
		cout << "RES = " << a + b << " + " << c << " + " << d << endl;
		cout << "RES = " << a + b + c << " + " << d << endl;
		cout << "RES = " << res << endl;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//SUBTRACAO COM 4 NUMEROS
	}else if(opc == 2 && nums == 4){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		cout << "Digite o valor D: ";
		cin >> d;
		res = a - b - c - d;
		
		cout << "\n";
		
		cout << "RES = " << a << " - " << b << " - " << c << " - " << d << endl;
		cout << "RES = " << a - b << " - " << c << " - " << d << endl;
		cout << "RES = " << a - b - c << " - " << d << endl;
		cout << "RES = " << res << endl;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//MULTIPLICACAO COM 4 NUMEROS
	}else if(opc == 3 && nums == 4){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		cout << "Digite o valor D: ";
		cin >> d;
		res = a * b * c * d;
		cout << "\n";	
		cout << "RES = " << a << " × " << b << " × " << c << " × " << d << endl;
		cout << "RES = " << a * b << " × " << c << " * " << d << endl;
		cout << "RES = " << a * b * c << " × " << d << endl;
		cout << "RES = " << res << endl;
		
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	//DIVISAO COM 4 NUMEROS
	}else if(opc == 4 && nums == 4){
		system("clear");
		cout << "Digite o valor A: ";
		cin >> a;
		cout << "Digite o valor B: ";
		cin >> b;
		cout << "Digite o valor C: ";
		cin >> c;
		cout << "Digite o valor D: ";
		cin >> d;
		res = a / b / c / d;
		cout << "\n";	
		cout << "RES = " << a << " ÷ " << b << " ÷ " << c << " ÷ " << d << endl;
		cout << "RES = " << a / b << " ÷ " << c << " ÷ " << d << endl;
		cout << "RES = " << a / b / c << " ÷ " << d << endl;
		cout << "RES = " << res << endl;
			
		cout << "\n\n";
			
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}

//#######################################################################

	//POTENCIACAO		3^3 = 27
	if(opc == 5){
		system("clear");
		float num, exp;
		
		cout << "Digite um numero: ";
		cin >> num;
		cout << "Digite seu expoente: ";
		cin >> exp;
		
		cout << "\n";
		
		cout << "RES = Xª" << endl;
		cout << "RES = " << num << "^" << exp << endl;
		cout << "RES = " << pow(num, exp);
		
		cout << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################

	//RADICIACAO		81 = 9
	if(opc == 6){
		system("clear");
		float num;
		
		cout << "Digite um numero: ";
		cin >> num;
		
		cout << "\n";
		
		cout << "√X " << endl;
		cout << "√" << num << endl;
		cout << "√" << num << " = " << sqrt(num);
		
		cout << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################

	//JUROS SIMPLES
	if(opc == 7){
		system("clear");
		float cap, temp, taxa;
		
		cout << "Digite o valor do Capital: ";
		cin >> cap;
		cout << "Digite o valor da Taxa de Juros: ";
		cin >> taxa;
		float taxa2 = taxa / 100;
		cout << "Digite o Tempo de acumulo: ";
		cin >> temp;
		
		cout << "\n";
		
		cout << "Montante = C + C × i × t" << endl;
		cout << "Montante = " << cap << " + " << cap << " × " << taxa2 << " × " << temp << endl;
		cout << "Montante = " << cap << " + " << cap * taxa2 << " × " << temp << endl;
		cout << "Montante = " << cap << " + " << cap * taxa2 * temp << endl;
		cout << "Montante = " << cap + cap * taxa2 * temp << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################

	//JUROS COMPOSTO
	if(opc == 8){
		system("clear");
		float cap, temp, taxa;
		
		cout << "Digite o valor do Capital: ";
		cin >> cap;
		cout << "Digite o valor da Taxa de Juros: ";
		cin >> taxa;
		float taxa2 = taxa / 100;
		float taxa3 = 1 + taxa2;
		cout << "Digite o Tempo de acumulo: ";
		cin >> temp;
		
		cout << "\n";
		
		cout << "Montante = C × (1 + I)^T" << endl;
		cout << "Montante = " << cap << " × (1 + " << taxa2 << ")^" << temp << endl;
		cout << "Montante = " << cap << " × (" << 1 + taxa2 << ")^" << temp << endl;
		cout << "Montante = " << cap << " × " << pow(taxa3, temp) << endl;
		cout << "Montante = " << cap * pow(taxa3, temp) << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################

	//FUNCAO 1° GRAU
	if(opc == 9){
		system("clear");
		float a, b, x;
		
		cout << "Digite o valor de A: ";
		cin >> a;
		cout << "Digite o valor de X: ";
		cin >> x;
		cout << "Digite o valor de B: ";
		cin >> b;
		
		cout << "\n";
		
		cout << "ƒ(x) = ax + b" << endl;
		cout << "ƒ(" << x << ") = " << a << " × " << x << " + " << b << endl;
		cout << "ƒ(" << x << ") = " << a * x << " + " << b << endl;
		cout << "ƒ(" << x << ") = " << a * x + b;
		
		cout << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################
	
	//FUNCAO 2° GRAU
	if(opc == 10){
		system("clear");
		cout << "Use a Formula de BHASKARA!" << "\n\n";
		/*
		float a, b, c, x1, x2;
		
		cout << "Digite o valor de A: ";
		cin >> a;
		cout << "Digite o valor de B: ";
		cin >> b;
		cout << "Digite o valor de C: ";
		cin >> c;
		
		cout << "\n";
		*/
		main();
		
		
	}
	
//#######################################################################

	//FATORIAL		4! = 4×3×2×1 = 24
	if(opc == 11){
		system("clear");
		int num;
		long long fatorial = 1;
		
		cout << "Obs: Numeros acima de 25 poderar gerar erros!" << "\n\n";
		cout << "Digite o um valor para calcular o fatorial: ";
		cin >> num;
		
		
		for(int i = 1; i <= num; ++i){
			fatorial = fatorial * i; // fatorial *= i;
		}
		
		cout << "\nO fatorial de " << num << " é " << fatorial << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################

	//FIBONACCI
	if(opc == 12){
		system("clear");
		cout << "Em desenvolvimento!" << "\n\n";
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
	
//#######################################################################

	//TEOREMA DE PITAGORAS
	if(opc == 13){
		system("clear");
		string letraVal;
		float a, b, c;
		
		cout << "Deseja descobrir o valor de A,B ou C? ";
		cin >> letraVal;
		
		//VALOR DE A
		if(letraVal == "a" || letraVal == "A"){
			cout << "Digite o valor de B: ";
			cin >> b;
			cout << "Digite o valor de C: ";
			cin >> c;
			 
			cout << "\n";
			 
			cout << "a² = b² + c²" << endl;
			cout << "a² = " << b << "² + " << c << "²" << endl;
			cout << "a² = " << pow(b, 2) << " + " << pow(c, 2) << endl;
			cout << "a² = " << pow(b, 2) + pow(c, 2) << endl;
			cout << "a = √" << pow(b, 2) + pow(c, 2) << endl;
			cout << "a = " << sqrt((pow(b, 2) + pow(c, 2))) << "\n\n";
			
			cout << "##########################" << endl;
			cout << "# Calculadora by Soldier #"<< endl;
			cout << "##########################" << endl;
			cout << "#                        #" << endl;
			cout << "#   1 - Menu Principal   #" << endl;
			cout << "#   2 - Exit             #" << endl;
			cout << "#                        #" << endl;
			cout << "##########################" << "\n\n";
			cout << "Digite uma opcao: ";
			cin >> opc2;
			if(opc2 == 1){
				system("clear");
				main();
			}else{
				system("exit");
			}
		//VALOR DE B
		}else if(letraVal == "b" || letraVal == "B"){
			cout << "Digite o valor de A: ";
			cin >> a;
			cout << "Digite o valor de C: ";
			cin >> c;
			 
			cout << "\n";
			 
			cout << "b² = a² - c²" << endl;
			cout << "b² = " << a << "² - " << c << "²" << endl;
			cout << "b² = " << pow(a, 2) << " - " << pow(c, 2) << endl;
			cout << "b² = " << pow(a, 2) - pow(c, 2) << endl;
			cout << "b = √" << pow(a, 2) - pow(c, 2) << endl;
			cout << "b = " << sqrt((pow(a, 2) - pow(c, 2))) << "\n\n";
			
			cout << "##########################" << endl;
			cout << "# Calculadora by Soldier #"<< endl;
			cout << "##########################" << endl;
			cout << "#                        #" << endl;
			cout << "#   1 - Menu Principal   #" << endl;
			cout << "#   2 - Exit             #" << endl;
			cout << "#                        #" << endl;
			cout << "##########################" << "\n\n";
			cout << "Digite uma opcao: ";
			cin >> opc2;
			if(opc2 == 1){
				system("clear");
				main();
			}else{
				system("exit");
			}
		//VALOR DE C
		}else if(letraVal == "c" || letraVal == "C"){
			cout << "Digite o valor de A: ";
			cin >> a;
			cout << "Digite o valor de B: ";
			cin >> b;
			 
			cout << "\n";
			 
			cout << "c² = a² - b²" << endl;
			cout << "c² = " << a << "² - " << b << "²" << endl;
			cout << "c² = " << pow(a, 2) << " - " << pow(b, 2) << endl;
			cout << "c² = " << pow(a, 2) - pow(b, 2) << endl;
			cout << "c = √" << pow(a, 2) - pow(b, 2) << endl;
			cout << "c = " << sqrt((pow(a, 2) - pow(b, 2))) << "\n\n";
			
			cout << "##########################" << endl;
			cout << "# Calculadora by Soldier #"<< endl;
			cout << "##########################" << endl;
			cout << "#                        #" << endl;
			cout << "#   1 - Menu Principal   #" << endl;
			cout << "#   2 - Exit             #" << endl;
			cout << "#                        #" << endl;
			cout << "##########################" << "\n\n";
			cout << "Digite uma opcao: ";
			cin >> opc2;
			if(opc2 == 1){
				system("clear");
				main();
			}else{
				system("exit");
			}
		}else{
			system("clear");
			cout << "##########################" << endl;
			cout << "# Calculadora by Soldier #"<< endl;
			cout << "##########################" << endl;
			cout << "#                        #" << endl;
			cout << "#  1 - Tentar Novamente  #" << endl;
			cout << "#  2 - Exit              #" << endl;
			cout << "#                        #" << endl;
			cout << "##########################" << "\n\n";
			
			cout << "Opcao invalida! Por favor tente novamente..." << endl;
			cout << "Digite uma opcao: ";
			cin >> opc2;
			if(opc2 == 1){
				system("clear");
				main();
			}else{
				system("exit");
			}
		}
	}

//#######################################################################

	//FORMULA DE BHASKARA
	if(opc == 14){
		system("clear");
		float a, b, c;
		
		cout << "Digite o valor de A: ";
		cin >> a;
		cout << "Digite o valor de B: ";
		cin >> b;
		cout << "Digite o valor de C: ";
		cin >> c;
		float res1 = pow(b,2);
		float res2 = - 4 * a * c;
		float res3 = res1 + res2;
		
		
		cout << "\n";
		
		if(a != 0){
			//DELTA
			cout << "Formula de Delta" << endl;
			cout << "∆ =  B² - 4 × A × C" << endl;
			if(a < 0 && c > 0){
				cout << "∆ =  " << b << "² - 4 × (" << a << ") × " << c << endl;
				cout << "∆ =  " << pow(b,2) << " + " << - 4 * a << " × " << c << endl;
				cout << "∆ =  " << pow(b,2) << " + " << - 4 * a * c << endl;
				cout << "∆ =  " << res1 + res2 << endl;
				if(res3 < 0){
					cout << "A equacao terminou pois o valor de ∆ < 0" << "\n\n";
				}
			//DELTA
			}else if(a > 0 && c < 0){
				cout << "∆ =  " << b << "² - 4 × " << a << " × (" << c << ")"<< endl;
				cout << "∆ =  " << pow(b,2) << " + " << - 4 * a << " × (" << c << ")" << endl;
				cout << "∆ =  " << pow(b,2) << " + " << - 4 * a * c << endl;
				cout << "∆ =  " << res1 + res2 << endl;
				if(res3 < 0){
					cout << "A equacao terminou pois o valor de ∆ < 0" << "\n\n";
				}
			//DELTA
			}else if(a < 0 && c < 0){
				cout << "∆ =  " << b << "² - 4 × (" << a << ") × (" << c << ")"<< endl;
				cout << "∆ =  " << pow(b,2) << " + " << - 4 * a << " × (" << c << ")" << endl;
				cout << "∆ =  " << pow(b,2) << - 4 * a * c << endl;
				cout << "∆ =  " << res1 + res2 << endl;
				if(res3 < 0){
					cout << "A equacao terminou pois o valor de ∆ < 0" << "\n\n";
				}
			}else if(a > 0 && c > 0){
				cout << "∆ =  " << b << "² - 4 × " << a << " × " << c << endl;
				cout << "∆ =  " << pow(b,2) << " " << - 4 * a << " × " << c << endl;
				cout << "∆ =  " << pow(b,2) << " " << - 4 * a * c << endl;
				cout << "∆ =  " << res1 + (res2) << endl;
				if(res3 < 0){
					cout << "A equacao terminou pois o valor de ∆ < 0" << "\n\n";
				}
			}
			//FORMULA COMPLETA
			if(- 4 * a * b >= 0){
				if(b >= 0){
					cout << "\nFormula Completa" << endl;
					cout << "X = - B ± √∆ / 2 × A " << endl;
					if(a > 0){
						cout << "X = - " << b << " ± √" << res3 << " / 2 × " << a << endl;
					}
					else{
						cout << "X = - " << b << " ± √" << res3 << " / 2 × (" << a << ")" << endl;
					}
					cout << "X = - " << b << " ± " << sqrt(res3) << " / " << 2 * a << "\n\n";
					
					//X1
					cout << "X1 = " << "- " << b << " + " << sqrt(res3) << " / " << 2 * a << endl;
					cout << "X1 = " << - b  + sqrt(res3) << " / " << 2 * a << endl;
					cout << "X1 = " << (- b  + sqrt(res3)) / (2 * a) << "\n\n";
					
					//X2
					cout << "X2 = " << "- " << b << " - " << sqrt(res3) << " / " << 2 * a << endl;
					cout << "X2 = " << - b  - sqrt(res3) << " / " << 2 * a << endl;
					cout << "X2 = " << (- b  - sqrt(res3))  / (2 * a) << "\n\n";
				}else if(b < 0){
					float b2 = b * -1;
					
					cout << "\nFormula Completa" << endl;
					cout << "X = - B ± √∆ / 2 × A " << endl;
					if(a > 0){
						cout << "X = - (" << b << ") ± √" << res3 << " / 2 × " << a << endl;
					}
					else{
						cout << "X = - (" << b << ") ± √" << res3 << " / 2 × (" << a << ")" << endl;
					}
					cout << "X = " << b2 << " ± " << sqrt(res3) << " / " << 2 * a << "\n\n";
					
					//X1
					cout << "X1 = " << b2 << " + " << sqrt(res3) << " / " << 2 * a << endl;
					cout << "X1 = " << b2 + sqrt(res3) << " / " << 2 * a << endl;
					cout << "X1 = " << (b2 + sqrt(res3)) / (2 * a) << "\n\n";
					
					//X2
					cout << "X2 = " << b2 << " - " << sqrt(res3) << " / " << 2 * a << endl;
					cout << "X2 = " << b2 - sqrt(res3) << " / " << 2 * a << endl;
					cout << "X2 = " << (b2 - sqrt(res3))  / (2 * a) << "\n\n";
				}
			}
		}
	}
	
//#######################################################################
	
	//ESTATISTICAS
	if(opc == 15){
		system("clear");
		
		int na, nb, nab, ns;
		
		cout << "Digite o valor de n(a): ";
		cin >> na;
		cout << "Digite o valor de n(b): ";
		cin >> nb;
		cout << "Digite o valor de n(a n b): ";
		cin >> nab;
		cout << "Digite o valor de n(s): ";
		cin >> ns;
		
		cout << "\n\n";
		
		
		cout << " n(a)  n(b)    n(a n b)" << endl;
		cout << "---- + ---- - ---------" << endl;
		cout << " n(s)  n(s)      n(s)  " << "\n\n";
		
		cout << " " << na << "     " << nb << "     " << nab << endl;
		cout << "---- + ---- - -----" << endl;
		cout << " " << ns << "     " << ns << "     " << ns << "\n\n";
		
		//cout << "VAI TOMAR NO CU!";
	}
	
//#######################################################################
		
	//TEMPERATURAS
	if(opc == 16){
		system("clear");
		
		cout << "#################################" << endl;
		cout << "#     Calculadora by Soldier    #"<< endl;
		cout << "#################################" << endl;
		cout << "#                               #" << endl;
		cout << "#   1 - Kelvin for Celsius      #" << endl;
		cout << "#   2 - Kelvin for Fahrenheit   #" << endl;
		cout << "#   3 - Celsius for Kelvin      #" << endl;
		cout << "#   4 - Celsius for Fahrenheit  #" << endl;
		cout << "#   5 - Fahrenheit for Kelvin   #" << endl;
		cout << "#   6 - Fahrenheit for Celsius  #" << endl;
		cout << "#   7 - Menu Principal          #" << endl;
		cout << "#                               #" << endl;
		cout << "#################################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		
		//KELVIN PARA CELSIUS
		if(opc2 == 1){
			system("clear");
					
			float TempKel;
			
			cout << "Digite a temperatura em Kelvin: ";
			cin >> TempKel;
			
			cout << "\n\n";
			
			cout << "Øc = T - 273" << endl;
			cout << "Øc = " << TempKel << " - 273" << endl;
			cout << "Øc = " << TempKel - 273 << " °C" << "\n\n";
			
			cout << "##########################" << endl;
			cout << "#                        #" << endl;
			cout << "#   1 - Menu Principal   #" << endl;
			cout << "#   2 - Exit             #" << endl;
			cout << "#                        #" << endl;
			cout << "##########################" << "\n\n";
			cout << "Digite uma opcao: ";
			cin >> opc2;
			
			//MENU PRINCIPAL
			if(opc2 == 1){
				system("clear");
				main();
			//EXIT
			}else if(opc2 == 2){
				system("exit");
			}	
		//KELVIN PARA FAHRENHEIT
		}else if(opc2 == 2){
			system("clear");
			
		//CELSIUS PARA KELVIN
		}else if(opc2 == 3){
			system("clear");
					
			float TempCel;
			
			cout << "Digite a temperatura em Celsius: ";
			cin >> TempCel;
			
			cout << "\n\n";
			
			cout << "T = Øc + 273" << endl;
			cout << "T = " << TempCel << " + 273" << endl;
			cout << "T = " << TempCel + 273 << " K" << "\n\n";
			
			cout << "##########################" << endl;
			cout << "#                        #" << endl;
			cout << "#   1 - Menu Principal   #" << endl;
			cout << "#   2 - Exit             #" << endl;
			cout << "#                        #" << endl;
			cout << "##########################" << "\n\n";
			cout << "Digite uma opcao: ";
			cin >> opc2;
			
			//MENU PRINCIPAL
			if(opc2 == 1){
				system("clear");
				main();
			//EXIT
			}else if(opc2 == 2){
				system("exit");
			}
			
		//CELSIUS PARA FAHRENHEIT
		}else if(opc2 == 4){
			system("clear");
			
			float temCel;
			
			cout << "Digite a temperatura em Celsius: ";
			cin >> temCel;
			
			cout << "\n\n";
			
			cout << "Øf - 32    Øc" << endl;
			cout << "------- = -----" << endl;
			cout << "   9        5\n\n";
			
			cout << "5 × (Øf - 32) = 9 × Øc" << endl;
			cout << "5 × (Øf - 32) = 9 × " << temCel << endl;
			cout << "5 × Øf - 160 = " << 9 * temCel << endl;
			cout << "5 × Øf = " << 9 * temCel << " + " << 160 << endl;
			cout << "5 × Øf = " << (9 * temCel) + 160 << endl;
			cout << "Øf = " << (9 * temCel) + 160 << " ÷ 5" << endl;
			cout << "Øf = " << (9 * temCel + 160) / 5 << " °F\n\n";
			
		//FAHRENHEIT PARA KELVIN
		}else if(opc2 == 5){
			system("clear");
			
		//FAHRENHEIT PARA CELSIUS
		}else if(opc2 == 6){
			system("clear");
			
		//MENU PRINCIPAL
		}else if(opc2 == 7){
			system("clear");
			main();
		//OPCAO INVALIDA
		}else{
		}
	}
	
//#######################################################################
	
	//SAIR DO PROGRAMA
	if(opc == 19){
		system("exit");
	}
	
//#######################################################################
	
	//INFORMACOES SOBRE O CRIADOR
	if(opc == 20){
		system("clear");
		
		cout << CYN;
		cout << "********************************" << endl;
		cout << "* Nome: David                  *" << endl;
		cout << "* NickName: Lone Soldier       *" << endl;
		cout << "* Contato: +55 (99) 98806-4535 *" << endl;
		cout << "********************************" << "\n\n";
		cout << RESET;
		
		cout << "##########################" << endl;
		cout << "# Calculadora by Soldier #"<< endl;
		cout << "##########################" << endl;
		cout << "#                        #" << endl;
		cout << "#   1 - Menu Principal   #" << endl;
		cout << "#   2 - Exit             #" << endl;
		cout << "#                        #" << endl;
		cout << "##########################" << "\n\n";
		cout << "Digite uma opcao: ";
		cin >> opc2;
		if(opc2 == 1){
			system("clear");
			main();
		}else{
			system("exit");
		}
	}
	
//#######################################################################
	
	return 0;
}



//* √∆ ª ƒ(x) = Ω */->
/*
	
	□□□■■■■□□□□□□□□□□□□□□□□□□
	□■■■■■■■□□□□□□□□□□□□□□□□□
	■■■■□□■□□□□■■□□□□□□■■□□□□
	■■■□□□□□□□□■■□□□□□□■■□□□□
	■■□□□□□□□□□■■□□□□□□■■□□□□
	■■□□□□□□□■■■■■■■□■■■■■■■□
	■■□□□□□□□■■■■■■■□■■■■■■■□
	■■■□□□□□□□□■■□□□□□□■■□□□□
	■■■■□□■□□□□■■□□□□□□■■□□□□
	□■■■■■■■□□□■■□□□□□□■■□□□□
	□□■■■■■□□□□□□□□□□□□□□□□□□

*/
