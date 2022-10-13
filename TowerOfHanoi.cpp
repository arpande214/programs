/*
START
Procedure Hanoi(disk, source, dest, aux)

   IF disk == 1, THEN
      move disk from source to dest             
   ELSE
      Hanoi(disk - 1, source, aux, dest)     // Step 1
      move disk from source to dest          // Step 2
      Hanoi(disk - 1, aux, dest, source)     // Step 3
   END IF
   
END Procedure
STOP
*/

#include<iostream>
using namespace std;
void TOH(int n, char src, char aux, char dest){
	if(n==1){
		cout<<"Move "<<n<<" th disk from "<<src<<" to "<<dest<<endl;
		return;
	}
	TOH(n-1, src, dest, aux);
	cout<<"Move "<<n<<" th disk from "<<src<<" to "<<dest<<endl;
	TOH(n-1,aux,src,dest); 
}
int main(){
	int n;
	cout<<"Enter the disk number: ";
	cin>>n;
	TOH(n,'A','B','C');
	return 0;
}
