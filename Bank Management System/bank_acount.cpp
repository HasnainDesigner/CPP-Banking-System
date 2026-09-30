#include <iostream>
#include <fstream>
using namespace std;

// bank account


//  Next move is 
// Bank Account → Login System → Password Strength Checker → 
// File Integrity Checker → Hash Tool → File Encryption → Network Client/Server → 
// Packet Analyzer → IDS


// C++ Cybersecurity Projects

// ├── 01_Bank_Account
// ├── 02_Login_System
// ├── 03_Password_Strength_Checker
// ├── 04_File_Integrity_Checker
// ├── 05_Hash_Tool
// ├── 06_File_Encryption
// ├── 07_Client_Server
// ├── 08_Packet_Analyzer
// └── 09_Intrusion_Detection_System



// storing data in a file





class bank_account{
 private:
    long double  balance=5000;
    int chose_number;
    long double amount;

    // For login system
     string l_name="jaki";
     long pasword=332;
    //  string check_n;
    //  long check_p;


 public: 
    string name;
    string check_n;
     long check_p;
    bool Login();
    void display_option(void);
    void choose(void);
   bool isRunning=true;
    
     




};

void bank_account:: display_option(void){
cout<<"1.\tdeposit"<<endl<<"2.\tWithdraw"<<endl<<"3.\tCheck Balance"<<endl<<"4.\tExit"<<endl;
}


void bank_account:: choose(void){
  cout<<"Choose:";
  cin>>chose_number;
  if(chose_number ==1){
  cout<<" Amount: "<<endl;
  cin>>amount;
   balance=amount+balance;

  cout<<"\t\tNew balance is:"<<balance<<endl;
  } 

  else if(chose_number ==2)
  {
  cout<<" Withdrawal Amount: "<<endl;
  
  cin>>amount;
  if(amount> balance){
    cout<<"Not Enought balance"<<endl;
    cout<<"balance in your account is:"<<balance<<endl;
  }

  else{

      balance=balance-amount;
      cout<<endl;
      cout<<"Withdraw is success.\t New balance is:"<<balance<<endl;
  
 

  }
  

//   else{

      
//       cout<<" Withdraw success: "<<amount<<endl;
//       cout<<"New Balance is:"<<balance;
//     }

    
    
}// else if chose is end





    else if(chose_number==3){
        cout<<endl;
    cout<<" \t\tBalance is : "<<balance<<endl;
     

    }
else if(chose_number==4){
        
    isRunning=false;
     

    }




    else{
        cout<<endl;

        cout<<"Invalid chooice"<<endl;
    }
}


bool :: bank_account:: Login(void){




  cout<<"________________Enter the Login Name";
    getline(cin,check_n);
//   cout<<"________________Enter the Pasword";
//   cin>>check_p;

  if(check_n == l_name)
  {
     cout<<"________________Enter the Pasword";
  cin>>check_p;
    
        if( check_p==pasword){
           cout<<endl;
            cout<<"\t\t"<<check_n<<"Welcome to your Acccount"<<endl;
           cout<<endl;

            cout<<"What you want to do today"<<endl;
            return true;
        }// second if is end
        else{
            cout<<"________Wrong Login name"<<endl;
            return false;
        }


    }  // outer if is end
    else{
        cout<<"Wrong Login Name and Pasword";
        return false;
    }





} // login function is end

int main() {

   bank_account user;
//    user.isRunning();
   
   if(user.Login()== true){
       while(user.isRunning){
            cout<<endl;

            user.display_option();
            user.choose();
        }// loop is end
        
    }

    ofstream write_data("information.txt"); 
    // write_data<<;
    
     cout<<"Data saved";
   




    return 0;
}