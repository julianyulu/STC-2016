// csvWrite.cc
#include<iostream>
#include<fstream>
#include<sstream>


void csvWrite(double t, int rowNum, double *field2D){
  std::string path="../dat/";
  std::string filename;
  std::ostringstream convert;
  convert << t*1e6;
  filename = convert.str();
  filename = path + filename;

  std::ofstream totalFieldDatafile;
  totalFieldDatafile.open(filename);
  
  for(int k = 0; k < rowNum;k++){
    for (int i=0;i<2;i++){
      // print first column's element
      totalFieldDatafile << *(field2D + k * 2 + i)<< "\t ";
    }
    totalFieldDatafile << "\n";
  }
  totalFieldDatafile.close();
  std::cout << filename << "SAVED" << std::endl;
}
