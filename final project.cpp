#include <iostream>
using namespace std;


int main() {
	string option, old_pin,new_pin,receiver_num;
	bool pin_out;
	int pin_count, pin_limit,amount,total_amount;
	total_amount=1000;
	pin_limit=2;
	pin_count=0;
	pin_out=false;
	while(true){
		cout<<"welcome to sokolo mobile money service \n";
	    cout<<"\n";
	    cout<<"1, Authentication \n";
	    cout<<"2, Reset pin \n";
    	cout<<"3, Check balance \n";
    	cout<<"4, send money \n";
    	cout<<"5, exit \n";
	    cout<<"";
	    cout<<"select option by enter 1 - 5: \n";
	    cin>>option;
    	if (option=="1"){
    		while(old_pin != "0000" and not(pin_out)){
    			if (pin_count<=pin_limit){
    				cout<<"enter your pin to accept withdrawal of 500 cedis: ";
				    cin>>old_pin;
				    pin_count+=1;}	
				
			    else{pin_out=true;}
		     	}
		if (pin_out==true){
			cout<<"your account is blocked for too many atempts \n";
			break;}
		else{
			cout<<"you have successfully withdrawn 500cedis from your account and your balance is 495";
			cout<<" with fee of 5 cedis \n";
		}
		
		
	}
	else if (option=="2"){
		while(old_pin != "0000" and not(pin_out)){
			if (pin_count<=pin_limit){
				cout<<"enter old pin: ";
				cin>>old_pin;
				pin_count+=1;}	
				
			else{pin_out=true;}
			}
			
			
		if (pin_out==true){
			cout<<"your account is blocked for too many atempts";
			break;}   
		else{
		cout<<"enter new pin: ";
		
		cin>>new_pin;
		if (new_pin==old_pin){
			cout<<"pin already exist \n";
			cout<<"\n";
		}
		else{
		
		cout<<"your pin has been resetted successfully \n";
		cout<<"\n";
		}}}
	
	else if (option=="3"){
		while(old_pin != "0000" and not(pin_out)){
			
			if (pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}	
				
			else{pin_out=true;}
			}
		if (pin_out==true){
		cout<<"your account is blocked for too many attempts \n";
		break;
		
		}
		else{
			cout<<"your balance is 1000 cedis";
			cout<<"\n";
			
		}
		
	}
	else if (option=="4"){
		cout<<"enter receiver number: ";
		cin>>receiver_num;
		cout<<"enter amount to be sent: ";
		cin>>amount;
		
		while(old_pin != "0000" and not(pin_out)){
			if (pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}	
				
			else{pin_out=true;}
			}
		if (pin_out==true){
			cout<<"your account is blocked for too many attempts";
			break;
		}
		else{
			cout<<"you have successfully sent an amount of "<<amount<<" to "<<receiver_num<<", your balance is "<<total_amount-amount<<endl;
			cout<<"\n";
		}
	}
	else if(option=="5"){
		cout<<"thank you for your service with us \n ";
		break;
	}
	}
		
		
	
	
		return 0;
}
