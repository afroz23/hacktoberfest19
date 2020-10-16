#include"iostream"
using namespace std;

class Circle{
 public:
 	float rs; //rs for result
	float Area(int r){
		rs=3.14*r*r;
		return(rs);
	}
};
int main()
{
	Circle c1;
	int redius;
	float area;
	cout<<"Enter the reduis of CIRCLE :" << endl;
	cin>>redius;
	area=c1.Area(redius);
	cout<<"The area of the "<<redius<< " redius Circle is "<<area <<" ." << endl;
	return 0;  
}
