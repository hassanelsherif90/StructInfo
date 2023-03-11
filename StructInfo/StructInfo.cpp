#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	int Age;
	bool HasLicenseDriving;
};

stInfo ReadInfo() {
	stInfo Info;
	cout << "Please enter Your Age : " << endl;
	cin >> Info.Age;

	cout << "Has You LicenseDriving ?" << endl;
	cin >> Info.HasLicenseDriving;
	
	return Info;
}
bool IsAccepted(stInfo Info) {
	return (Info.Age > 21 && Info.HasLicenseDriving);
}
void PrintInfo(stInfo Info) {


	if (IsAccepted(Info))
	{
		cout << " \n Hiered" << endl;
	}
	else {
		cout << " \n Rejected" << endl;
	}

}

int main() {
	PrintInfo(ReadInfo());
	return 0;
}