#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

class BMIcal{

	public:
		void setnumber(float x ,float y){
			height=x;
			mass=y;
		}
		float getbmi(){
			height/=100.0;
			height*=2;
			bmi= mass/height ;

		}
		float returnbmi(){
			return bmi;
		}
		string returncategory(){

			if(bmi<15){
				category="Very severely underweight";
			}
			else if(bmi<16){

				category="Severely underweight";
			}
			else if(bmi<18.5){
			
				category="Underweight";
			}

			else if(bmi<25){
			
				category="Normal";
			}

			else if(bmi<30){
			
				category="Overweight";
			}
			else if(bmi<35){
			
				category="Obese Class1(Moderately obese";
			}
			else if(bmi<40){
			
				category="Severely obese";
			}
			else if(bmi>=40){
			
				category="Very severely obese";
			}
			return category;
		}


	private:
	
		float height,mass;
		float  bmi;
		string category;
};
