
/*Statistical Analysis
Write a program that calculates the mean, median, and mode of a set of numbers. The mean is the sum of the numbers divided by the count of the numbers (ie: the average). The median is the number that sits in the middle of the data set (if there is an even number of data points, it is the average of the two middle values). The mode is the value that occurs most frequently in the data set. You can assume that the data set is already sorted*/


#include <iostream>
using namespace std;

int array[6]={3,5,7,9,10,10};
float mean=0, median=0, mode=0, sum=0;


int main() {
int i;
for (int i=0; i<6; i++){
    sum = sum + array[i];  
}
    mean = sum/6;
    cout<<"The Mean of numbers is: " 
    <<mean<<endl;


for (int j=0; j<6; j++){
      if (array[j] == array[j+1]){
        mode=array[j];
        cout<<"The Mode is: "<<mode<<endl;   
      }   
}

for (int k=0; k<6; k++){
  if (6%2 == 0){
    k = 6/2;
    median = array[k-1]+ array[k];
    median = median/2;    
    }
    cout<<"The Median is: "<<median<<endl;
    break;
  }
    
  
  return 0;
  
}