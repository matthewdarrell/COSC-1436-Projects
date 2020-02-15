// Dr_T does some math C++ Bishop
// Date: 02/09/20 IDE: Visual Studio Code
#include <iostream>
#include <string>
#include<locale> //to use toupper() transform char
#include<iomanip>
using namespace std;

double weeklyPay(double, double,string,int);// function prototype

int main( )
{    
  locale loc; 
  string text1 = "TCC-TR IS COOL";
  string text2 = "i will succeed at c++";
  for(int i = 0; i < text1.length(); i++ )
  {
    cout << tolower(text1[i], loc); 
  }
  cout << endl;
  for(int i = 0; i < text2.length(); i++ )
  {
    cout << toupper(text2[i], loc); 
  }
  cout << endl;

  //a function call for each person - no input from the console for part 1
  cout << fixed << setprecision(2); 
  cout << weeklyPay(47.0, 505.75,"Matthew",1) << endl;
  cout << weeklyPay(45.0, 55.25, "Melvin", 1) << endl;
  cout << weeklyPay(15.0, 65.25,"Susan",2) << endl;
  cout << weeklyPay(41.0, 14.75,"Mika",1) << endl;
  cout << weeklyPay(25.0, 15.0,"Eldridge",2) << endl;
  cout << weeklyPay(55.0, 203.50,"Freedom",1) << endl;
  cout << weeklyPay(32.5, 100.25,"Tyson",1) << endl;
            
  return 0;
}


double weeklyPay(double hours, double rate, string name, int empType)
{// complete the function definition
  double netPay = 0.0, grossPay = 0.0, taxableWages = 0.0;
  double ss = 0.062, med = 0.0145, sSwages = 0.0, medWages = 0.0;
  double FIT = 0.0, fitTax = 0.0, dental = 0.0, retirement = 0.0;
  double clockHours = 40.0, overtimeRate = 2.0, overTimeIfAny = 0.0;
  locale loc; 
  string status = ""; 
  string reset = "\x1b[0m";
  string color = "\x1b[" + to_string(32) + ";4m"; //green and underlined
  string color2 = "\x1b[" + to_string(34) + ";1m"; //blue

  //display the name on screen CAP and in colore
  cout << color << endl; //format a new line before each name 
  for(int i = 0; i < name.length(); i++ )
  {
    cout << toupper(name[i],loc); 
  }
  cout << reset << endl; //a line after the name



  status = (empType == 1) ? "Fulltime" : "Parttime"; //set status 
  cout << "\tStatus: " << status << endl; 
  cout << "\tHours Worked: " << hours << " Rate: $" << rate << endl; 

  overTimeIfAny = ((hours - clockHours) > 0.0) ? (hours - clockHours) : 0.0;  
  if(empType == 1) //overtime for fulltime employees only
  {
    cout << "\tOvertime Hours: " << overTimeIfAny << endl; 
  }

  FIT = (rate < 15.0) ? 0.12 : 0.15; //set FIT based upon rate
  cout << "\tFIT Rate: " << FIT << endl; 
  dental = (empType == 1) ? 17.00 : 0.00; //deduction for fulltime employees
  retirement = (empType == 1) ? 77.00 : 0.00; //deduction for fulltime emp.
  

  grossPay = (hours <= clockHours) ? (hours * rate) : 
             ((clockHours * rate) + ((overTimeIfAny) * (overtimeRate * rate))); 

  cout << "Gross Pay: $" << grossPay;  
  taxableWages = grossPay - (dental + retirement);
  fitTax = taxableWages * FIT; //less pre-tax deductions  
  
 
  sSwages = grossPay * ss; 
  medWages =  grossPay * med; 
 
  //print deductions
  cout << color2 << "\n\tDEDUCTIONS (preTax):" << reset << endl; 
  cout << "\tDental Deduction: $" << dental << "\n\tRet. Deduction: $" <<retirement << endl;
  cout << "Taxable Wages (for FIT): $" << taxableWages << endl; 
  cout << color2 << "\tDEDUCTIONS:" << reset << endl; 
  cout << "\tFIT Tax Amount: $" << fitTax << endl; 
   
  cout << "\tSSDed = $" << sSwages << " MedDed = $" << medWages << endl;

  netPay = grossPay - (dental + retirement + fitTax + sSwages + medWages); 

  cout << "NET PAY for " << name << " "<< color << "$"; 

  return netPay; 
}

 