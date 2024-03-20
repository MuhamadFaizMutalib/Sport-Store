/*
Programming Technique II
Semester 2, 2021/2022

PROJECT : ONLINE SPORT STORE

Section: 04

Group 02   
Member 1's Name: MUHAMAD AMSYAR BIN IBRAHIM				Matric Number : A21EC0058
Member 2's Name: MUHAMAD FAIZ BIN ABDUL MUTALIB  		Matric Number : A21EC0059 
Member 3's Name: NORAIN BINTI MOHD SULAIMAN  			Matric Number : A21EC0106
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void WelcomeMenu(){
	cout << "\t #######  ##    # ##      ######## ##    # ####### " 	<< "	####### #######  #######  #######  ######## " << endl
	 	 << "\t##     ## # #   # ##         ##    # #   # ##      " 	<< "	##      ##   ## ##     ## ##     #    ##    " << endl
	 	 << "\t##     ## #  #  # ##         ##    #  #  # ####### "		<< "	####### ####### ##     ## #######     ##    " << endl
	 	 << "\t##     ## #   # # ##         ##    #   # # ##      " 	<< "	     ## ##      ##     ## ##  ##      ##    " << endl
		 << "\t #######  #    ## ####### ######## #    ## ####### " 	<< "	####### ##       #######  ##   ##     ##    " << endl;
	
	cout << endl;
	cout << 						"\t\t\t\t\t####### ######## #######  #######  #######"<<endl
		 << 						"\t\t\t\t\t##         ##   ##     ## ##     # ##     "<<endl
		 << 						"\t\t\t\t\t#######    ##   ##     ## #######  #######"<<endl
		 << 						"\t\t\t\t\t     ##    ##   ##     ## ##  ##   ##     "<<endl
		 << 						"\t\t\t\t\t#######    ##    #######  ##    ## #######"<<endl

		 << "\n\t\t\t\t\tWELCOME TO ONLINE SPORT STORE." << endl

		 << "========================================================================================================================"
		 << "Feature:" << endl
		 << "*Very convenient and easy to use " 						 << endl
		 << "*Buy sports item online without visiting physical store" 	 << endl
		 << "*Display order details from customer"						 << endl
		 << "========================================================================================================================" << endl;
}

int UserMenu(){
	int input;
    cout << "\t\t\t\t##     ## ####### ####### #######		" << endl
    	 << "\t\t\t\t##     ## ##  	   ##	   ##	  #	" << endl
     	 << "\t\t\t\t##     ## ####### ####### #######	" << endl
    	 << "\t\t\t\t##     ##   	## ##	   ##  ##		" << endl
    	 << "\t\t\t\t #######  ####### ####### ##	 ## " << endl;

    cout << endl
    	 << "=======================================================================================================================" << endl
		 << "Please choose which user are you:" << endl
		 << "[1] Student" 	<< endl
		 << "[2] Adult " 	<< endl
    	 << "========================================================================================================================" << endl
    	 << "Please enter your choice: "; 
    cin >> input;
	cout << endl;
	return input;
}

//standAlone Fucntion
int Menu(){
    int choice;
	cout << "\t\t\t\t###       ### ####### ####    ## ##     ##	  " << endl
   		 << "\t\t\t\t## ##   ## ## ##      ## ##   ## ##     ##   " << endl
   	 	 << "\t\t\t\t##  ## ##  ## ####### ##  ##  ## ##     ##   " << endl
   		 << "\t\t\t\t##   ##    ## ##      ##   ## ## ##     ##   " << endl
   		 << "\t\t\t\t##         ## ####### ##    ####   #####     " << endl;
	cout << "=======================================================================================================================\n";		
    cout << " [1] Buy item\n"
         << " [2] Print OrderStatus\n"
         << " [3] Proceed with the Payments\n"
         << " [4] Cancel Order\n"
         << " [5] Exit\n"
         << "=======================================================================================================================\n"
         << "Please enter your choice: ";
        cin >> choice;
        return choice;
}

void ItemMenu(){

    cout << "\t\t\t\t ######## ######## ####### ####     ####  " << endl
  		 << "\t\t\t\t    ##       ##    ##      ## ##   ## ##  " << endl
  		 << "\t\t\t\t    ##       ##    ####### ##  ## ##  ##  " << endl
  		 << "\t\t\t\t    ##       ##    ##      ##   ###   ##  " << endl
   		 << "\t\t\t\t ########    ##    ####### ##         ##  " << endl;

}

void OrderStatus(){
	cout << "\t\t #######  #######  #######   ####### #######	" << endl
	     << "\t\t##     ## ##     # ##    ##  ##      ##     #	" << endl
   		 << "\t\t##     ## #######  ##     ## ####### #######	" << endl
   		 << "\t\t##     ## ##   ##  ##    ##  ##      ##   ##	" << endl
   		 << "\t\t #######  ##    ## ######    ####### ##    ##	" << endl << endl
   		 << endl

		 << "\t\t\t\t####### ########   ####   ######## ##   ## #######	" << endl
    	 << "\t\t\t\t##         ##     ##  ##     ##    ##   ## ##      " << endl
   		 << "\t\t\t\t#######    ##    ########    ##    ##   ## #######	" << endl
   		 << "\t\t\t\t     ##    ##    ##    ##    ##    ##   ##      ##	" << endl
    	 << "\t\t\t\t#######    ##    ##    ##    ##     #####  #######	" << endl;
	cout << "=======================================================================================================================\n";
}

int PaymentMenu(){
    int input;
    cout << "\t\t\t#######    ###   ##    ## ####     #### ####### ###     ## ########     " << endl
  		 << "\t\t\t##     # ##   ##  ##  ##  ## ##   ## ## ##      ## ##   ##    ##        " << endl
 		 << "\t\t\t#######  #######   ####   ##  ## ##  ## ####### ##  ##  ##    ##        " << endl
  		 << "\t\t\t##       ##   ##    ##    ##   ###   ## ##      ##   ## ##    ##        " << endl
  		 << "\t\t\t##       ##   ##    ##    ##         ## ####### ##     ###    ##        " << endl

  		 << endl
   		 << "========================================================================================================================" << endl
   		 << "Which payment method would you like to use?" << endl
   		 << "[1] Bank Islam"                              << endl
    	 << "[2] CIMB"                                    << endl
    	 << "[3] Bank Rakyat"                             << endl
    	 << "========================================================================================================================" << endl
    	 << "Please enter your choice : ";
    cin >> input;
	return input;
}

void ExitMenu(){
	cout << "\n\n\n\n\n\n" << endl
     	 << "========================================================================================================================" << endl
   		 << "\t\t\t\t\tYou have successfully exited the system " << endl
   		 << "\t\t\t\t\tThank you for using our system" << endl << endl

    	 << "\t\t\t\t\tBrought to you by: " << endl
   		 << "\t\t\t\t\t1)MUHAMAD AMSYAR BIN IBRAHIM" << endl
   		 << "\t\t\t\t\t2)MUHAMAD FAIZ BIN ABDUL MUTALIB" << endl
   		 << "\t\t\t\t\t3)NORAIN BINTI MOHD SULAIMAN" << endl
   		 << endl
    	 << "========================================================================================================================" << endl;
}


class Name{
	private:
		string nama;
     public:
     	Name(string n = " "){	//constructor
     		nama = n;
		}
		
		string getName() const{	//accessor
			return nama;
		}
	
};

class Item{
	private:
		string nameItem;
		int Price;
		int quantity;
		bool statusItem;
		
	public:
		Item(){}
		Item(string a,int b,int c){
			nameItem = a;
			Price    = b;
			quantity = c;
			}

		//accessor	
		string getnameItem() const{return nameItem;}
		int getPrice() const{return Price;}
		int getquantity() const{return quantity;}
		
		void display(){
		  	cout << "\nItemName : "    << nameItem
                 << "\nPrice    : "    << Price 
                 << "\nQuantity : "    << quantity
                 << "\nSubtotal : RM " << calcPrice() <<endl;
			  }
			  		
		int calcPrice(){
			return Price*quantity;
		}
		
		
		void setStatusItem(int Y){
			if(Y == 1){
				statusItem = true;
			}
			else{
				statusItem = false;
			}
			
		}
		
		string getStatusItem(){
			if(statusItem == 0)return "NOT COMPLETE";
			else return "COMPLETED";
		     }
};

class Payment{
	private:
		  string Bankname;		
	public:
		 Payment(){}
		 Payment(string A){
		 	Bankname = A;
		}
		string getBankname() const{
			return Bankname;
		}

};

class Customer{
	private:
		   string Contact,Email,DeliAddress[10],BankID[10];
		   Name c1;			//showing composition
		   Item *tem[10];	//showing association and aggregation
		   Payment *Pay[10];   
		   int ny,nx;
		   string Type;
		   
	public:
		  Customer(){}
		  Customer(string name =" ", string contact=" ", string email=" "):c1(name){	//3 argument constructor
			  Contact = contact;
			  Email = email;
		  }
		  Customer(string N,string C,string E,string J,string M):c1(N){		//5 argument constructor
		  	 Contact = C;
		  	 Email   = E;		  
		   }
		
			virtual void printDetails(){
				cout << "Name            : " << c1.getName() << endl	//composition being applied
					 << "Contact         : " << Contact 	 << endl
					 << "Email           : " << Email 		 << endl; 
			}


		    void BuyItem(Item *T,int k){          
		    tem[k] = T;
		    tem[k]->setStatusItem(0);
		    ny = k;
		    }
		   
		   string getNameCust() const{
		   	  return c1.getName();	//composition being applied
		   }
	
		void setDetailPay(int Y,int X){
			int totalPrice,R;
			
			if(Y == 1){
				cout << "<====[ Welcome to Bank Islam ]====>"<<endl<<endl;
    			cout << "Enter BankID     = ";
     			cin.ignore();
     			getline(cin,BankID[X]);
     			cout << "Delivery Address = ";
     			getline(cin,DeliAddress[X]);
     			cout <<"\nYour Items: "<<endl<<endl;
     		
     			for(int i =0;i<ny; i++){
     				if(tem[i+1]->getStatusItem() == "NOT COMPLETE"){
                		cout << "----------------------Item #" << i+1 << "---------------------------";
                		tem[i+1]->display();
                
                		totalPrice += tem[i+1]->calcPrice();
                		cout<<"\n--------------------------------------------------------"<<endl;
            		}
            	}
			  
     			cout << "Enter which item you want to Pay: Item #";
     			cin  >> R;
     			tem[R]->setStatusItem(1);
				cout <<"\n******************************************PAYMENT DONE*******************************************"<<endl
	    		 <<"*************************************PLZ CHECK YOUR ORDER STATUS***********************************"<<endl<<endl;
				
				system("pause");
				system("CLS");
     		}
     		
			else if(Y == 2){
     			cout << "<====[ Welcome to CIMB BANK ]====>"<<endl<<endl;
     			cout << "Enter BankID     = ";
     			cin.ignore();
    			getline(cin,BankID[X]);
     			cout << "Delivery Address = ";
     			getline(cin,DeliAddress[X]);
     			cout <<"\nYour Items: "<<endl<<endl;
     				for(int i =0;i<ny; i++){
     					if(tem[i+1]->getStatusItem() == "NOT COMPLETE"){
                			cout << "----------------------Item #" << i+1 << "---------------------------";
                			tem[i+1]->display();
                
                			totalPrice += tem[i+1]->calcPrice();
                			cout<<"\n--------------------------------------------------------"<<endl;
         				}
		  			}  
     			cout << "Enter which item you want to Pay: Item #";
     			cin  >> R;
     			tem[R]->setStatusItem(1);
				cout <<"\n******************************************PAYMENT DONE*******************************************"<<endl
	     		 	 <<"*************************************PLZ CHECK YOUR ORDER STATUS***********************************"<<endl<<endl;
			
			system("pause");
			system("CLS");
			}
			
			else{
				cout << "<====[ Welcome to BANK RAKYAT ]====>"<<endl<<endl;
     			cout << "Enter BankID     = ";
     			cin.ignore();
     			getline(cin,BankID[X]);
     			cout << "Delivery Address = ";
     			getline(cin,DeliAddress[X]);
     			cout <<"\nYour Items: "<<endl<<endl;
     				for(int i =0;i<ny; i++){
     					if(tem[i+1]->getStatusItem() == "NOT COMPLETE"){
                			cout << "----------------------Item #" << i+1 << "---------------------------";
                			tem[i+1]->display();
                
                			totalPrice += tem[i+1]->calcPrice();
                			cout<<"\n--------------------------------------------------------"<<endl;
        				}
		 			}  
     			cout << "Enter which item you want to Pay: Item #";
    			cin  >> R;
				cin.ignore();
     			tem[R]->setStatusItem(1);
				cout <<"\n******************************************PAYMENT DONE*******************************************"<<endl
	     			 <<"*************************************PLZ CHECK YOUR ORDER STATUS***********************************"<<endl<<endl;
				
				system("pause");
				system("CLS");
		 		}

		}

		void ToPay(Payment *P,int W){
            Pay[W] = P;
		   	nx = W;       	    
		}

		void CancelOrder(){	
 			for(int k=0;k<ny;k++)
	   			tem[k+1] = NULL;
		}
		  
		void PayMenu(Customer *);
};

class Adult: public Customer{
	private :
		string Job;
	
	public :
		Adult(string _name =" ", string _contact=" ", string _email=" " , string _job= " "): Customer(_name ,_contact, _email) {
			Job = _job;
		}
		
		void setJob(string _job){
			Job = _job;
		}

		string getjob() const{
			return Job;
		}

		void printDetails(){
			cout<<"-----------[ADULT]------------"<<endl;
			Customer::printDetails();
			cout<<"Job     : "<<Job<<endl;
		}
		
};

class Student : public Customer{
	private :
		string matricNum;
	
	public :
		Student(string _name =" ", string _contact=" ", string _email=" " , string _matricNum = " "): Customer(_name ,_contact, _email) {
			matricNum = _matricNum;
		}
		
		void setMatricNum(string _matric){
			matricNum = _matric;
		}

		string getmatric() const{
			return matricNum;
		}

		void printDetails(){
			cout<<"-----------[STUDENT]------------"<<endl;
			Customer::printDetails();
			cout<<"Matric Number   : "<<matricNum<<endl;
		}
		
		
};

void Customer::PayMenu(Customer *c){                      
		OrderStatus();
     	cout << "( Customer Details )" <<endl;
    	c->printDetails();

        cout << "<=======================================[ RECENT PURCHASES ]======================================>\n\n";
         	for(int i=0;i<ny;i++){
         		cout <<"[ Item #" <<i+1<<" ]"<<endl<<endl
         	     	 <<"Brand          : "<< tem[i+1]->getnameItem()<<endl	//aggregation being applied
         	     	 <<"Price          : "<< tem[i+1]->getPrice()<<endl
         	    	 <<"Quantity       : "<< tem[i+1]->getquantity()<<"                      [Subtotal: RM "<<tem[i+1]->calcPrice()<<"]"<<endl
					 <<"[Status Payment: "<< tem[i+1]->getStatusItem()<<"]"<<endl;
				if(tem[i+1]->getStatusItem() == "COMPLETED"){
			   		cout <<"\nPayment with #" <<Pay[i+1]->getBankname()
			        	 <<"\nPayer name          : "<<c1.getName()
			        	 <<"\nAddress to Delivery : "<<DeliAddress[i+1]<<endl;
			    }       	     
         		cout <<"------------------------------------------------------------------------------------------------\n";
          	}			  
				cout<<endl<<endl;	   
	}
		
int main(){
	string name, contact, email, matric , job;
	int q, choice, choiceMM, type; 
	static int Q =0, W=0;
	Customer *cust;	
	Adult ad;
	Student stud;
		
	Item Sportshoes[3]={{"Nike Go FlyEase Shoe",519,0},{"Nike Air Force 1 Shoes",215,0},{"Nike Revolution 6",349,0}}, 
	     SportShirt[3]={{"Adidas PRSVE",119,0},{"Adidas PRIME AEROREADY",115,0},{"Adidas Jacquard Jersey",149,0}},
		 Bicycle[3]   ={{"SHIMANO Folding Bike",3519,0},{"Mountain Bike Bicycle",4215,0},{"Rockrider St 30",5349,0}};
		
	Payment OnlineBanking[3]={{"Bank Islam"},{"CIMB"},{"Bank Rakyat"}};
	 	 	
	WelcomeMenu();
	system("pause");

	cout<<"Enter Name    : ";
	getline(cin,name);
	cout<<"Enter Contact : ";
	getline(cin,contact);
	cout<<"Enter Email   : ";
	getline(cin,email);
	
	Customer Cust(name,contact,email,matric, job);	//5 argument constructor

	cout << "Welcome " << Cust.getNameCust() << endl << endl;	//composition being applied
	do{
		system("CLS");
	
		type = UserMenu();
		cin.ignore();
	
			if(type == 1){
				cout<<"Please enter your matric number : ";
				getline(cin,matric);
				stud.setMatricNum(matric);		
			}
			else if(type == 2){
				cout<<"Please enter your job: ";
				getline(cin,job);
				ad.setJob(job);
			}
			else{
				cout << "Invalid user. Please enter the correct user" << endl;
				system("pause");
			}
	}while(type !=1 && type != 2);
	
	system("CLS");
	
	cout << "Welcome " << Cust.getNameCust() << endl << endl;
     
    
	do {
        choiceMM = Menu();
        system("CLS");
        switch (choiceMM){

        case 1: //Buy item
        	ItemMenu();
			cout << "=======================================================================================================================\n";
        	cout << "\n  [1] SportShoes"
            	 << "\n  [2] SportShirt"
            	 << "\n  [3] Bicycle" << endl;
			cout << "=======================================================================================================================\n"
            	 << "\n Choice: "; 
        	cin >> choice;
        
        	if(choice == 1){
            	cout << "\n***SportShoes***\n";
             	cout << " [1] Nike Go FlyEase Shoe 	- RM519\n"
                	 << " [2] Nike AirForce 1 Shoes	- RM215\n"
                 	 << " [3] Nike Revolution 6		- RM349\n"
                 	 << "Please enter your choice: ";
              	cin >> choice;
              	cout << "Please enter the quantity that you want to buy: ";
              	cin >> q;
                    if(choice == 1){
                        Q++;                                                    
                        Sportshoes[0]={"Nike Go FlyEase Shoe",519,q};	//call the 3 argument constructor 
				    	Cust.BuyItem(&Sportshoes[0],Q);					//to update the number of item purchased in the cart
				    }
				    
				    else if(choice == 2){
                        Q++;                                                    
                        Sportshoes[1]={"Nike Air Force 1 Shoes",215,q}; //call the 3 argument constructor 
				    	Cust.BuyItem(&Sportshoes[1],Q);					//to update the number of item purchased in the cart
				    }
				    
				    else{
                        Q++;                                                    
                        Sportshoes[2]={"Nike Revolution 6",349,q}; 		//call the 3 argument constructor 
				    	Cust.BuyItem(&Sportshoes[2],Q);					//to update the number of item purchased in the cart
				    }
           		system("CLS");
        	}
        
        	else if(choice == 2){
            	cout << "\n***SportShirt***\n";
             	cout << " [1] Adidas PRSVE           - RM119\n"
                	 << " [2] Adidas PRIME AEROREADY - RM115\n"
                 	 << " [3] Adidas Jacquard Jersey - RM149\n"
                 	 << "Please enter your choice: ";
              	cin >> choice;
              	cout << "Please enter the quantity that you want to buy: ";
              	cin >> q;
                    if(choice == 1){
                        Q++;                                                    
                        SportShirt[0]={"Adidas PRSVE",119,q};
				    	Cust.BuyItem(&SportShirt[0],Q);
					}
				    	
					else if(choice == 2){
                        Q++;                                                    
                        SportShirt[1]={"Adidas PRIME AEROREADY",115,q};
				    	Cust.BuyItem(&SportShirt[1],Q);
			    	}
				    
				    else{
                        Q++;                                                    
                        SportShirt[2]={"Adidas Jacquard Jersey",149,q};
				 	    Cust.BuyItem(&SportShirt[2],Q);
				    }		    
            	system("CLS");
            }
        
            else{
            	cout << "\n***Bicycle***\n";
             	cout << " [1] SHIMANO Folding Bike	- RM3519\n"
                 	 << " [2] Mountain Bike Bicycle	- RM4215\n"
                 	 << " [3] Rockrider St 30		- RM5349\n"
                 	 << "Please enter your choice: ";
              	cin >> choice;
              	cout << "Please enter the quantity that you want to buy: ";
              	cin >> q;
                    if(choice == 1){
                        Q++;                                                    
                        Bicycle[0]={"SHIMANO Folding Bike",3519,q};
				    	Cust.BuyItem(&Bicycle[0],Q);
				    }
				    
				    else if(choice == 2){
                        Q++;                                                    
                        Bicycle[1]={"Mountain Bike Bicycle",4215,q};
				    	Cust.BuyItem(&Bicycle[1],Q);
				    }
				    
				    else{
                        Q++;                                                    
                        Bicycle[2]={"Rockrider St 30",5349,q};
				    	Cust.BuyItem(&Bicycle[2],Q);
				    }		    
            	system("CLS");
		  	}

            break;
 
        case 2:	// Order status
			if(type == 1){
				Student stud(name, contact, email, matric);
				cust = &stud;
				Cust.PayMenu(cust);
			}
			else if(type == 2){
				Adult ad(name,contact, email, job);
				cust = &ad;
				Cust.PayMenu(cust);
			}

			else{
				cout << "Invalid user. Please reenter user" << endl;

			}
			system("pause");
			system("CLS");
			break;
	    
	   	case 3: //Payment
		   	choice = PaymentMenu();
			
	        system("CLS");
	          	if(choice == 1){
	             	W++;
	             	Cust.ToPay(&OnlineBanking[0],W);
	             	Cust.setDetailPay(1,W);
	 	        }
	       	   	else if(choice == 2){
	             	W++;
	             	Cust.ToPay(&OnlineBanking[1],W);
	             	Cust.setDetailPay(2,W);
	           	}
	          	else{
	             	W++;
	             	Cust.ToPay(&OnlineBanking[2],W);
	             	Cust.setDetailPay(3,W);
	          	}
	   		
			break;

        case 4: //Cancel order
			Cust.CancelOrder();
        		cout<<"\n( Done )Item has been discarded plz check Order Status\n\n\n";
				system("pause");
				system("CLS");
	   		
			   break;
	   		 
	   	case 5: //Exit system
		    ExitMenu();
            
			break;

        default: 
			cout << "Invalid input! Try again :)" << endl; 
       
	   	}

	}while (choiceMM != 5);
       
	cout<<endl<<endl;

	system("pause");
	return 0;
}