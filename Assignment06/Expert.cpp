// Chatbot
#include<bits/stdc++.h>
using namespace std;

vector<string> QUESTIONS = {
	"Do you have cough?",
	"Do you have a sore throat?",
	"Do you have a fever?",
	"Are you noticing any unexplained excessive sweating?",
	"Do you have an itchy throat?",
	"Do you have a runny nose?",
	"Do you have a stuffy nose?",
	"Do you have a headache?",
	"Do you feel tired without actually exhausting yourself?"
};


map<string, int> threshold;




void expertSystem() {

	int score = 0;

	for (auto &question : QUESTIONS) {
		cout << question;
		cout << " (Y/N) " << endl;
		char ans;
		cin >> ans;
		int ip;

		if (ans == 'Y') {
			cout << "On a scale of 1-10 how bad is it ?" << endl;
			cin >> ip;
			while ( ip < 1 || ip > 10) {
				cout << "Enter a valid input !" << endl;
				cin >> ip;

			}
			score += int(ip);
		}
	}

	cout << endl;
	cout << endl;

	if (score >= threshold["Extreme"]) {
		cout << "You are showing symptoms of having EXTREME COVID-19" << endl;
		cout << "Please call +91 8112233445 immediately to immediate assistance" << endl;
		cout << "Based on your symptoms, You will need Immediate Hospitalization" << endl;
	}
	else if (score >= threshold["Severe"]) {
		cout << ("Based on your answers You are showing Symptoms of SEVERE COVID-19") << endl;
		cout << ("You are advised to contact a COVID-19 Specialist ASAP") << endl;
		cout << ("You are prescribed with Favipriavir, Dolo 650 / Crocin 500, Paracetamol, Brufane") << endl;
		cout << "Also coduct a COVID-19 Lab Test ASAP at your own convenience as this might be a false Positive" << endl;
		cout << endl;
		cout << endl;
		cout << ("Lab Testing: https://www.metropolisindia.com/parameter/pune/covid-19-rt-pcr-test") << endl;
	}
	else if (score >= threshold["Mild"]) {
		cout<<("Based on your answers You are showing Symptoms of VERY MILD COVID-19") << endl;
		cout<<("Please Isolate yourself Immediately on a precautionary basis") << endl;
		cout<<("As this has a possibility of being a false positive , please consider testing yourself") << endl;
		cout<<("At home testing using Self-Testing kits is recommended , but you can get Lab Tests as well") << endl;
		cout << endl;
		cout << endl;
		cout<<("Self testing : https://www.flipkart.com/mylab-coviself-covid-19-rapid-antigen-test-kit/p/itm4d34ea09cad97") << endl;
		cout<<("Lab Testing  : https://www.metropolisindia.com/parameter/pune/covid-19-rt-pcr-test") << endl;
	}
	else {
		cout<<("You are Showing NO Symptoms of COVID-19") << endl;
		cout<<("This might be a false negative, If you feel unsure , please get Tested") << endl;
		cout<<("As this has a possibility of being a false negative , please consider testing yourself") << endl;
		cout<<("At home testing using Self-Testing kits is recommended") << endl;
		cout << endl;
		cout << endl;
		cout<<("Self testing : https://www.flipkart.com/mylab-coviself-covid-19-rapid-antigen-test-kit/p/itm4d34ea09cad97") << endl;
	}
	cout << endl;
	cout << endl;
	cout << "For any further queries visit : https://www.aarogyasetu.gov.in/" << endl;
	cout << endl;
	cout << endl;
}

int main() {
	threshold["Mild"] = 30;
	threshold["Severe"] = 50;
	threshold["Extreme"] = 75;
	cout << "\n\n\t\tWelcome To The COVID-19 EXPERT SYSTEM\n" << endl;
	cout << "\tNote : Please answer the following questions very honestly\n\n" << endl;
	expertSystem();
	return 0;
}
