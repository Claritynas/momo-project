#include <iostream>
using namespace std;


int main() {
	string option, old_pin,new_pin,receiver_num;
	bool pin_out;
	int pin_count, pin_limit;
	float amount,total_amount,fee;
	total_amount=1000.00;
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
	    cout<<"\n";
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
			cout<<"you have successfully withdrawn GHS 500  from your account and your balance is GHS 495";
			cout<<" with fee of GHS 5 \n";
			cout<<"\n";
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
		//new pin can be any value except the old pin !!
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
			cout<<"your balance is GHS"<<total_amount<<endl;
			cout<<"\n";
			
		}
		
	}
	else if (option=="4"){
		cout<<"enter receiver number: ";
		cin>>receiver_num;
//consider fee to be charged before entering amount to be sent !!		
		cout<<"enter amount to be sent: ";
		cin>>amount;
		fee=amount*1/100;
		if (amount+fee>total_amount){
			cout<<"You do not enough funds to perform this transaction \n";
			cout<<"\n";
			
		}
		else{
		
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
			fee=amount*1/100;
			cout<<"you have successfully sent an amount of GHS "<<amount<<" to "<<receiver_num;
			cout<<", your balance is GHS "<<total_amount-amount-fee<<" with fee of GHS "<<fee<<endl;
			cout<<"\n";
			
		}}
	}
	else if(option=="5"){
		cout<<"Thank you for your service with us \n ";
		break;
	}
	else{
		cout<<"invalid option try again";
		cout<<"\n";
		
	}
	}
		
		
	
	
		return 0;
}
