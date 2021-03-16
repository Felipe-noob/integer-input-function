#include <iostream>
using namespace std;

int cin_int(){
	bool gate=0;
	int number;
	
	do{
	char input[100];	
	gate=0;
	int aux;
	number=0;
	
	std::cout<<"Type a non-negative integer: ";
	std::cin>>input;
	
		for(int i=0;i<100;i++){
		
			if(input[i]=='\0'){
			   	break;
		   	}
		
		   	aux=input[i]-48; //See ASCII table
		
			if ((aux<0)||(aux>9)){
				std::cerr<<"ERROR: wrong input"<<std::endl;
				gate=1;
			  	break;}
		number=number*10+aux;
		};	
	} while (gate);
	return number;	
}

int main()
{
int number=cinint();
std::cout<<"You have chosen: "<<number<<std::endl;	
return 0;
}