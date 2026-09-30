
#include <iostream>
#include<fstream>
using namespace std;

// next projec is start




int main() {
  int p;
  

  string file_name;
  string file_Id;
  
  bool name_exist=false;
bool id_exist=false;
  
  string line;


      cout<<"Enter name"<<endl;
      getline(cin,file_name);
      cout<<"Enter Id";
      getline(cin,file_Id);

 ifstream file("bank detail.txt");
 if(!file){
    cout<<"File does not exist"<<endl;
 }
 //while(getline(file,line))
 while (getline(file, line))
 {
    if(line == "Name:"+file_name ){
        name_exist=true;

    }
 if(line == "Id:"+file_Id){
    id_exist=true;
    break;
 }       
 } 
file.close();
 
if(name_exist || id_exist){
    cout<<"Choose strong Pasword"<<endl;
}
else{

    
    ofstream outputfile("bank detail.txt",ios::app);
outputfile<<"Name:"<<file_name<<endl;
outputfile<<"Id:"<<file_Id<<endl;
// outputfile<<"---------------------";
// outputfile<<endl;




  outputfile.close();
}

 









      // if to check that data is avaible or not in the file

     


    return 0;
}
