#include <iostream>
#include <string>
#include <string.h>

using namespace std;
class patient
{
protected:
	string region1[50] = { "1. Panjim","2. Mapusa","3. Bicholim","4. Ponda","5. Mormugao","6. Margao","7. Quepem","8. Dharbandora","9. Canacona","10. Pirla","11. Cansaulim","12. Nuvem","13. Candolim","14. Porvorim" };
	string blud[50] = { "a", "a+", "a-","b","b+","b-","ab+","ab-","o+","o-" };
	string name;
	int region;
	string check, bt;
	int flag = 0;
	double age, dd, mm, yy;
public:
	patient() //enter patient details using default constructor/
	{
		cout << "-------------------------------" << endl;
		cout << "|" << "        " << "Enter Details" << "        " << "|" << endl;
		cout << "-------------------------------" << endl;
		cout << "Enter your Name : ";
		cin >> name;
		cout << "Enter Age : ";
		cin >> age;
		if (cin.fail())
		{
			cout << "\nWrong Input. Enter again : " << endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> age;
		}
		cout << "Enter Date of Birth (dd mm yy) : ";
		cin >> dd >> mm >> yy;
		if (cin.fail())
		{
			cout << "\nWrong Input. Enter again : " << endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> dd >> mm >> yy;
		}
		cout << "--------------------------------------" << endl;
		cout << "|" << "        " << "Towns and Cities :" << "        " << "|" << endl;
		cout << "--------------------------------------" << endl;
		for (int i = 0; i < 14; i++)
		{
			cout << "|" << "        " << region1[i] << endl;
		}
		cout << "--------------------------------------" << endl;
		while (flag == 0)
		{
			cout<<"Enter Number of Region : ";
			cin >> region;
			if (region > 14)
				cout<<"Ivalid Choice.";
			else
			flag++;
		}
		
//		for (int j = 0; j < 999; j++)
//		{
//			cout << "Enter number of city closest to you : ";
//			cin >> region;
//			for (int i = 0; i < 14; i++)
//			{
//				if (region != region1[i])
//				{
//					flag++;
//				}
//			}
//			if (flag == 14)
//			{
//				cout << "Invalid Region Entered. Please re-enter : "<<endl;
//				flag = 0;
//			}
//			if (flag == 13)
//			{
//				break;
//			}
//		}
		flag = 0;
		for (int j = 0; j < 999; j++)
		{
			cout << "Enter Blood Type :";
			cin >> bt;
			int len = bt.length();
			for (int i = 0; i < len; i++)
			{
				char c = bt[i];
				if (isupper(c))
				{
					bt[i] = tolower(c);
				}
			}
			for (int i = 0; i < 10; i++)
			{
				if (bt != blud[i])
				{
					flag++;
				}
			}
			if (flag == 10)
			{
				cout << "Invalid Blood Type Entered. Please re-enter : " << endl;
				flag = 0;
			}
			if (flag == 9)
			{
				break;
			}
		}
		flag = 0;
	}

	void operator -();
};
void patient::operator -() //Operator Overloading
{
	cout << "Entered Details are as follows :" << endl << "Name : " << name << endl << "Age : " << age << endl << "Date of Birth : " << dd << " - " << mm << " - " << yy << endl << "Blood Type : " << bt << endl;
}

class disease
{
protected:
	int len;
	int flag = 0;
	int dis;
	string arr_dis[50] = { "1. Acne","2. Anemia","3. Asthma","4. Colon Cancer","5. Diabetes","6. Eczema","7. Heart Attack","8. Heart Failure","9. Hemorrhoids","10. Thyroidproblem","11. Glaucoma","12. Eyepain","13. High Cholesterol","14. Tonsil Problem","15. Leaky Bladder","16. Prostate Problem","17. Arthritis","18. Tendinitis","19. Lung Cancer","20. Emphysema","21. Hemophilia","22. Infertility","23. Jaundice","24. Leukemia","25. Stomach Ulcers","26. Sickle Cell Disease","27. Hormonal Imbalance" };
public:
	disease()
	{
		cout << "--------------------------------------" << endl;
		cout << "|" << "        " << "Treatable Ailments :" << "        " << "|" << endl;
		cout << "--------------------------------------" << endl;
		for (int i = 0; i < 27; i++)
		{
			cout << "|" << "        " << arr_dis[i] << endl;
		}
		cout << "--------------------------------------" << endl;
		while (flag == 0)
		{
			cout << "Enter your ailment :";
			cin >> dis;
			if (dis > 27)
				cout<<"\nIvalid Choice.\n";
			else
			flag++;
		}
		
	}
};

class doctor
{
protected:
	string doc[50] = { "Anish Patel","Jimmil Mandani","Fathima Abbas","Reva Rebello","Priti Kuru","Philip Nero","Reddy Chetan","Abdul Suri","Hikartik Mandelakar","James Haresh","Michael Alonso","George Russel","Lewis Hamilton","Charles Leclerc","Lando Norris","Daniel Ricardo","Jenifer Lopez","Beyonce Fernandes","Max Verstappen","Mick Schumacher","Sebastian Stan","Tom Holland","Andrew Garfield","Robert Downey","Timothe Chalamet" };
	string reg[50] = { "Panjim","Panjim","Panjim","Mapusa","Mapusa","Mapusa","Bicholim","Ponda","Ponda","Ponda","Mormugao","Margao","Margao","Margao","Quepem","Porvorim","Porvorim","Porvorim","Dharbandora","Canacona","Pirla","Cansaulim","Nuvem","Candolim","Quepem" };
	int regcheck[50] = {1, 1, 1, 2, 2, 2, 3, 4, 4, 4, 5, 6, 6, 6, 7, 14, 14, 14, 8, 9, 10, 11, 12, 13, 7};
	string spec[50] = { "Immunologist","Immunologist","Cardiologist","Rectal Surgeon","Dermatologist","Endocrinologist","Gastroenterologist","Hematologist","Ophthalmologist","Thyroidologist","Urologist","Rheumatologist","Pulmonologist","Hematologist","Reproductive Endocrinologist","Endocrinologist","Rheumatologist","Thyroidologist","Hematologist","Dermatologist","Rectal Surgeon","Gastroenterologist","Urologist","Pulmonologist","Reproductive Endocrinologist" };
};

class mapper :public patient, public disease, public doctor
{
public:
	friend void find_map(mapper);
};

void find_map(mapper t) //Friend Function of Class Mapper.
{
	if (t.dis == 3 || t.dis == 6)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Immunologist")
			{
				if (t.region == t.regcheck[i])
					cout <<"You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i] << endl;
				if (t.spec[i] == "Immunologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 7 || t.dis == 8)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Cardiologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit " << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
			}
			if (t.spec[i] == "Cardiologist")
			{
				if (t.region != t.regcheck[i])
					cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i] << endl;
			}
		}
	}
	else if (t.dis == 4 || t.dis == 9)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Rectal Surgeon")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				if (t.spec[i] == "Rectal Surgeon")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 11 || t.dis == 12)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Ophthalmologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Ophthalmologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 1 || t.dis == 2)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Dermatologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Dermatologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 5 || t.dis == 13)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Endocrinologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				if (t.spec[i] == "Endocrinologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 10 || t.dis == 14)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Thyroidologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Thyroidologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 15 || t.dis == 16)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Urologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Urologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 17 || t.dis == 18)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Rheumatologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Rheumatologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				}
			}
		}
	}
	else if (t.dis == 19 || t.dis == 20)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Pulmonologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Pulmonologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 26 || t.dis == 21)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Hematologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Hematologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}
	else if (t.dis == 22 || t.dis == 27)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Reproductive Endocrinologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Reproductive_Endocrinologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				}
			}
		}
	}
	else if (t.dis == 23 || t.dis == 25)
	{
		for (int i = 0; i < 25; i++)
		{
			if (t.spec[i] == "Gastroenterologist")
			{
				if (t.region == t.regcheck[i])
					cout << "You must visit Dr." << t.doc[i] << " from " << t.reg[i] <<". Specalist : " << t.spec[i]<< endl;
				if (t.spec[i] == "Gastroenterologist")
				{
					if (t.region != t.regcheck[i])
						cout << "You could visit Dr." << t.doc[i] << " from " << t.reg[i]<<". Specalist : " << t.spec[i] << endl;
				}
			}
		}
	}

}
int main()
{
	int choice = 0;
	cout << "--------------------------------------------------" << endl;
	cout << "|" << "        " << "Medical Consultancy Service v0.1" << "        " << "|" << endl;
	cout << "--------------------------------------------------" << endl;
	do
	{
		cout << "Enter 1 to start program" << endl << "Enter 2 to end program" << endl;
		cout << "Enter Choice :";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			mapper m;
			-m;
			find_map(m);
			break;
		}
		case 2:
		{
			cout << "Program will end !";
			break;
		}
		default:
		{
			cout <<"Invalid"<<endl;
			break;
		}
		}
    }while (choice != 2);
	
}