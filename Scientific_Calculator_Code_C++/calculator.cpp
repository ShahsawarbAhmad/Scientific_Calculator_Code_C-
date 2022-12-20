#include<iostream>
#include<cmath>
using namespace std;


	void Trignometric_function(){
		
		cout<<endl<<endl;
		trignometric:
		cout<<"---------------"<<endl;
		cout<<"Enter 1 to sin "<<endl;
		cout<<"Enter 2 to tan "<<endl;
		cout<<"Enter 3 to cos "<<endl;
		cout<<"Enter 4 to acos "<<endl;
		cout<<"Enter 5 to asin "<<endl;
		cout<<"Enter 6 to atan "<<endl;
		cout<<"Enter 7 to exit "<<endl;
		cout<<"---------------"<<endl;
		
		cout<<endl<<endl;
		
		int choice;
		cout<<"Enter your choice = ";
		cin>>choice;
		cout<<endl<<endl;
		
		switch(choice){
			
			int number;
			
			case 1:
				cout<<"Enter Your number = ";
				cin>>number;
				cout<<endl<<endl;
				cout<<" sin("<<number<<") = "<<sin(number)<<endl;
				cout<<endl<<endl;
				goto trignometric;
				break;
				
			case 2:
				cout<<"Enter Your number = ";
				cin>>number;
				cout<<endl<<endl;
				cout<<" tan("<<number<<") = "<<tan(number)<<endl;
				cout<<endl<<endl;
				goto trignometric;
				break;
				
			case 3:
				cout<<"Enter Your number = ";
				cin>>number;
				cout<<endl<<endl;
				cout<<" cos("<<number<<") = "<<cos(number)<<endl;
				cout<<endl<<endl;
				goto trignometric;
				break;
				
			case 4:
				cout<<"Enter Your number = ";
				cin>>number;
				cout<<endl<<endl;
				cout<<" acos("<<number<<") = "<<acos(number)<<endl;
				cout<<endl<<endl;
				goto trignometric;
				break;
				
			case 5:
				cout<<"Enter Your number = ";
				cin>>number;
				cout<<endl<<endl;
				cout<<" asin("<<number<<") = "<<asin(number)<<endl;
				cout<<endl<<endl;
				goto trignometric;
				break;
				
			case 6:
				cout<<"Enter Your number = ";
				cin>>number;
				cout<<endl<<endl;
				cout<<" atan("<<number<<") = "<<atan(number)<<endl;
				cout<<endl<<endl;
				goto trignometric;
				break;
			
			case 7:
				exit(1);
				break;
				
			default:
				cout<<endl<<endl;
			cout<<"Your choice is wronge "<<endl<<endl;
			cout<<endl<<endl;
			goto trignometric;	
		}
	}
	
	void logarithm_function(){
		
		cout<<endl<<endl;
		log_label:
		cout<<"----------------------------------------------"<<endl<<endl;
		cout<<"Enter 1 to evaluate natural logarithm base-e "<<endl;
		cout<<"Enter 2 to evaluate logarithm base-e 10 "<<endl;
		cout<<"Enter 3 to exit "<<endl;
		cout<<"----------------------------------------------"<<endl<<endl;
		cout<<endl<<endl;
		
		cout<<"Enter your choice = ";
		int choice;
		cin>>choice;
		
		switch(choice){
			int number;
			case 1:
				
				cout<<endl<<endl;
				cout<<"Enter number ";
				cin>>number;
				cout<<endl<<endl;
				cout<<"The logarithm value base-e of "<<number<< " = "<<log(number)<<endl;
				cout<<endl<<endl;
				goto log_label;
				break;
				
			case 2:
				
				cout<<endl<<endl;
				cout<<"Enter number ";
				cin>>number;
				cout<<endl<<endl;
				cout<<"The logarithm value base-10 of "<<number<< " = "<<log10(number)<<endl;
				cout<<endl<<endl;
				goto log_label;
				break;
			case 3:
				exit(1);
				break;
			
			default:
				cout<<endl<<endl;
				cout<<"Your choice is wronge "<<endl<<endl;
				goto log_label;
					 
		}
	}
	
	
	void arithmetic_function(){
	
	jump_2:
	cout<<endl<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Enter 1 to Addition "<<endl;
	cout<<"Enter 2 to Subtraction "<<endl;
	cout<<"Enter 3 to multiplication "<<endl;
	cout<<"Enter 4 to Division "<<endl;
	cout<<"Enter 5 to exit "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<endl<<endl;
	
	cout<<"Enter your choice = ";
	
	int choice;
	cin>>choice;
	cout<<endl<<endl;
	
	switch(choice){
		float number1, number2;
		float result;
		case 1:
			
			cout<<"Enter number 1 = ";
			cin>>number1;
			cout<<"Enter number 2 = ";
			cin>>number2;
			
			 result=number1+number2;
			 cout<<endl<<endl;
			cout<<"Addition = "<<result;
			goto jump_2;
			break;
		
		case 2:
				
			cout<<"Enter number 1 = ";
			cin>>number1;
			cout<<"Enter number 2 = ";
			cin>>number2;
			
			 result=number1-number2;
			cout<<endl<<endl;
			cout<<"Subtraction = "<<result;
			goto jump_2;
			break;
		
		case 3:
						
			cout<<"Enter number 1 = ";
			cin>>number1;
			cout<<"Enter number 2 = ";
			cin>>number2;
			
			 result=number1*number2;
			 cout<<endl<<endl;
			cout<<"multiplication = "<<result;
			goto jump_2;
			break;
		
		case 4:
			
			cout<<"Enter number 1 = ";
			cin>>number1;
			cout<<"Enter number 2 = ";
			cin>>number2;
			
			 result=number1/number2;
			 cout<<endl<<endl;
			cout<<"Division = "<<result;
			goto jump_2;
			break;
		case 5:
			exit(1);
			
		default:
			cout<<"Your choice is wronge "<<endl<<endl;
	}
}



void average_two_or_more(){
		
	float sum = 0;
	float average = 0;

			int n;
			cout<<"Enter total number of observation = ";
			cin>>n;
			int store[n];
			cout<<endl<<endl;
			
			cout<<"Enter "<<n<<" numbers "<<endl;
			 
			
			for(int i=0; i<n; i++)
			cin>>store[i];
			
			cout<<endl<<endl;
				
			for(int i=0; i<n; i++)
			sum+=store[i];
			
			cout<<"sum is = "<<sum<<endl<<endl;
			average =(float)(sum/n);
			cout<<"Average is = "<<average<<endl<<endl;
}

	
	
int main(){
	jump:
	cout<<endl<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<endl<<endl;
	cout<<"Enter 1 to Arithmetic function "<<endl;
	cout<<"Enter 2 to Trignometric function "<<endl;
	cout<<"Enter 3 to logarithm function "<<endl;
	cout<<"Enter 4 to Square root "<<endl;
	cout<<"Enter 5 to find average of two or more number "<<endl;
	cout<<"Enter 6 to find power of a number "<<endl;
	cout<<"Enter 7 to find cube root of a number "<<endl;
	cout<<"Enter 8 to exit ";
	
	cout<<endl<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<endl<<endl;
	
	
	cout<<"Enter your choice = ";
	
	int choice;
	cin>>choice;
	cout<<endl<<endl;
	
	switch(choice){
		float number1;
		case 1:
			arithmetic_function();
		case 2:
			Trignometric_function();
			break;
			
		case 3:
			logarithm_function();
			break;
			
		case 4:
			cout<<"Enter number = ";
			cin>>number1;
			cout<<endl<<endl;
			cout<<"The number of "<<number1<<" Square root is "<<sqrt(number1);
			goto jump;
			break;
			
			
		case 5:
			average_two_or_more();
			break;	
		
						
		case 6:
			int exponent;
			float base; 
			cout<<"Enter base = ";
			cin>>base;
			cout<<"Enter  exponent = ";
			cin>>exponent;
			cout<<endl<<endl;
			cout<<base<<"^"<<exponent<<" = ";
			
			
			cout<<"Power is = "<<pow(base,exponent);
			goto jump;
		
		case 7:
		cout<<"Enter number = ";
			cin>>number1;
			cout<<"cube root of "<<number1<<" is "<<cbrt(number1);
			break;

		case 8:
			exit(1);
			break;
		
		default:
			cout<<"Your choice is wronge "<<endl<<endl;
			
	}
}

