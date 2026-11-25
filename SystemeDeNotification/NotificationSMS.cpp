#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string d, string o, string m):Notification(d,m)
{
	this->operateur = o;
}

void NotificationSMS::afficher() {
	
}

void NotificationSMS::envoyer() {
	cout << "Envoi de message a: " << this->destinataire << endl;
	

}

NotificationSMS::~NotificationSMS() {

}