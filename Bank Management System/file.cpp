#include <iostream>
#include<fstream>
using namespace std;

// next projec is start




int main() {
  int p;
  

  string file_name;
  string file_Id;


  bool running=true;
 bool idfound=false;
 bool namefound=false;
 string line;


      cout<<"Enter name"<<endl;
      getline(cin,file_name);
      cout<<"Enter Id";
      getline(cin,file_Id);

      ifstream file("bank detail.txt");

 
while(getline(file,line)){
if(line == file_name){
  namefound=true;
} // outer if is end

  if(line == file_Id){
    idfound=true;
    break;
  }
  

}

file.close();


if(idfound || namefound){
  cout<<"PLease change";
}


else{
  
  ofstream write_file("bank detail.txt",ios::app);
  write_file<<"Name:"<<file_name<<endl;
      write_file<<"Id:"<<file_Id<<endl;
      
      write_file<<"------------------------";
      write_file.close();  
 cout << "Data saved!";

}







      // if to check that data is avaible or not in the file

     


    return 0;
}